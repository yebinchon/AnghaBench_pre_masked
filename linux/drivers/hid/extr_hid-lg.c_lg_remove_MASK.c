
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lg_drv_data {int quirks; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 struct lg_drv_data* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct lg_drv_data*) ;
 int FUNC_3 (struct hid_device*) ;

__attribute__((used)) static void FUNC_4(struct hid_device *VAR_1)
{
 struct lg_drv_data *VAR_2 = FUNC_0(VAR_1);
 if (VAR_2->quirks & VAR_0)
  FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 FUNC_2(VAR_2);
}
