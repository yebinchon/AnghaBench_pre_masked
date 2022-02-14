
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct koneplus_mouse_report_button {int data1; int type; } ;
struct koneplus_device {int dummy; } ;




 int FUNC_0 (struct koneplus_device*,int ) ;

__attribute__((used)) static void FUNC_1(struct koneplus_device *VAR_0,
  u8 const *VAR_1)
{
 struct koneplus_mouse_report_button const *VAR_2;

 switch (VAR_1[0]) {
 case 128:
  VAR_2 = (struct koneplus_mouse_report_button const *)VAR_1;
  switch (VAR_2->type) {
  case 129:
   FUNC_0(VAR_0, VAR_2->data1 - 1);
   break;
  }
  break;
 }
}
