
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pyra_mouse_event_button {int data1; int type; } ;
struct pyra_device {int actual_cpi; } ;





 int FUNC_0 (struct pyra_device*,int ) ;

__attribute__((used)) static void FUNC_1(struct pyra_device *VAR_0,
  u8 const *VAR_1)
{
 struct pyra_mouse_event_button const *VAR_2;

 switch (VAR_1[0]) {
 case 128:
  VAR_2 = (struct pyra_mouse_event_button const *)VAR_1;
  switch (VAR_2->type) {
  case 129:
   FUNC_0(VAR_0, VAR_2->data1 - 1);
   break;
  case 130:
   VAR_0->actual_cpi = VAR_2->data1;
   break;
  }
  break;
 }
}
