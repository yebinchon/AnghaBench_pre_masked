
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lg_drv_data {int quirks; } ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 struct lg_drv_data* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,struct hid_report*,int *,int,struct lg_drv_data*) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_1, struct hid_report *VAR_2,
  u8 *VAR_3, int VAR_4)
{
 struct lg_drv_data *VAR_5 = FUNC_0(VAR_1);

 if (VAR_5->quirks & VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 return 0;
}
