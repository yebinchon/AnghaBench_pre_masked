
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kone_mouse_event {int event; int value; } ;
struct kone_device {int actual_dpi; int actual_profile; TYPE_1__* profiles; } ;
struct TYPE_2__ {int startup_dpi; } ;







__attribute__((used)) static void FUNC_0(struct kone_device *VAR_0,
  struct kone_mouse_event const *VAR_1)
{
 switch (VAR_1->event) {
 case 128:
  VAR_0->actual_dpi = VAR_0->profiles[VAR_1->value - 1].
    startup_dpi;

 case 130:
  VAR_0->actual_profile = VAR_1->value;
  break;
 case 129:
 case 131:
  VAR_0->actual_dpi = VAR_1->value;
  break;
 }
}
