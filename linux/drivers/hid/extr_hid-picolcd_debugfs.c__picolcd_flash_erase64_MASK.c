
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct picolcd_pending {int raw_data; TYPE_1__* in_report; } ;
struct picolcd_data {int hdev; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {scalar_t__ id; } ;


 scalar_t__ EINVAL ;
 scalar_t__ EIO ;
 scalar_t__ REPORT_BL_ERASE_MEMORY ;
 scalar_t__ REPORT_MEMORY ;
 int _picolcd_flash_setaddr (struct picolcd_data*,int *,int) ;
 int kfree (struct picolcd_pending*) ;
 scalar_t__ memcmp (int *,int ,int) ;
 struct picolcd_pending* picolcd_send_and_wait (int ,int,int *,int) ;

__attribute__((used)) static ssize_t _picolcd_flash_erase64(struct picolcd_data *data, int report_id,
  loff_t *off)
{
 struct picolcd_pending *resp;
 u8 raw_data[3];
 int len_off;
 ssize_t ret = -EIO;

 if (*off & 0x3f)
  return -EINVAL;

 len_off = _picolcd_flash_setaddr(data, raw_data, *off);
 resp = picolcd_send_and_wait(data->hdev, report_id, raw_data, len_off);
 if (!resp || !resp->in_report)
  goto skip;
 if (resp->in_report->id == REPORT_MEMORY ||
  resp->in_report->id == REPORT_BL_ERASE_MEMORY) {
  if (memcmp(raw_data, resp->raw_data, len_off) != 0)
   goto skip;
  ret = 0;
 }
skip:
 kfree(resp);
 return ret;
}
