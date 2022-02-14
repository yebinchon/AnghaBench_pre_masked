
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct kovaplus_mouse_report_button {int type; int data2; int data1; } ;
struct kovaplus_device {int actual_y_sensitivity; int actual_x_sensitivity; int actual_cpi; } ;





 scalar_t__ const VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct kovaplus_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct kovaplus_device *VAR_1,
  u8 const *VAR_2)
{
 struct kovaplus_mouse_report_button const *VAR_3;

 if (VAR_2[0] != VAR_0)
  return;

 VAR_3 = (struct kovaplus_mouse_report_button const *)VAR_2;

 switch (VAR_3->type) {
 case 129:
  FUNC_1(VAR_1, VAR_3->data1 - 1);
  break;
 case 130:
  VAR_1->actual_cpi = FUNC_0(VAR_3->data1);
  break;
 case 128:
  VAR_1->actual_x_sensitivity = VAR_3->data1;
  VAR_1->actual_y_sensitivity = VAR_3->data2;
  break;
 default:
  break;
 }
}
