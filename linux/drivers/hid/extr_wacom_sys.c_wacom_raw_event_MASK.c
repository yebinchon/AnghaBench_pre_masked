
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int data; } ;
struct wacom {TYPE_1__ wacom_wac; } ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 struct wacom* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (struct hid_device*,struct hid_report*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_1, struct hid_report *VAR_2,
  u8 *VAR_3, int VAR_4)
{
 struct wacom *VAR_5 = FUNC_0(VAR_1);

 if (VAR_4 > VAR_0)
  return 1;

 if (FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4))
  return -1;

 FUNC_1(VAR_5->wacom_wac.data, VAR_3, VAR_4);

 FUNC_2(&VAR_5->wacom_wac, VAR_4);

 return 0;
}
