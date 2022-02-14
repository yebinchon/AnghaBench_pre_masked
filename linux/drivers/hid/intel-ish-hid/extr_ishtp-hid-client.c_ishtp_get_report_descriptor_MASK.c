
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ishtp_cl_data {int report_descr_done; int * report_descr; int init_wait; TYPE_2__* hid_devices; } ;
struct ishtp_cl {int dummy; } ;
struct TYPE_3__ {int device_id; int command; } ;
struct hostif_msg {TYPE_1__ hdr; } ;
struct TYPE_4__ {int dev_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ishtp_cl_data*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ishtp_cl*,unsigned char*,int) ;
 struct ishtp_cl_data* FUNC_3 (struct ishtp_cl*) ;
 int FUNC_4 (struct hostif_msg*,int ,int) ;
 int FUNC_5 (int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct ishtp_cl *VAR_4,
           int VAR_5)
{
 struct hostif_msg VAR_6;
 struct ishtp_cl_data *VAR_7 = FUNC_3(VAR_4);
 int VAR_8;


 VAR_7->report_descr_done = 0;
 FUNC_4(&VAR_6, 0, sizeof(struct hostif_msg));
 VAR_6.hdr.command = VAR_2;
 VAR_6.hdr.device_id = VAR_7->hid_devices[VAR_5].dev_id;
 VAR_8 = FUNC_2(VAR_4, (unsigned char *) &VAR_6,
      sizeof(struct hostif_msg));
 if (VAR_8)
  return VAR_8;

 if (!VAR_7->report_descr_done)
  FUNC_5(VAR_7->init_wait,
      VAR_7->report_descr_done,
      3 * VAR_3);
 if (!VAR_7->report_descr_done) {
  FUNC_1(FUNC_0(VAR_7),
    "[hid-ish]: timed out for report descr\n");
  return -VAR_0;
 }
 if (!VAR_7->report_descr[VAR_5]) {
  FUNC_1(FUNC_0(VAR_7),
   "[hid-ish]: failed to alloc report descr\n");
  return -VAR_1;
 }

 return 0;
}
