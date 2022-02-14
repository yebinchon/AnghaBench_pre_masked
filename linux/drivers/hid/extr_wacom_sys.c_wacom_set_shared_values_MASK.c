
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int device_type; int type; } ;
struct wacom_wac {TYPE_1__* shared; scalar_t__ has_mute_touch_switch; TYPE_3__* touch_input; TYPE_2__ features; } ;
struct TYPE_6__ {int evbit; } ;
struct TYPE_4__ {int has_mute_touch_switch; int is_touch_on; TYPE_3__* touch_input; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wacom_wac *VAR_3)
{
 if (VAR_3->features.device_type & VAR_2) {
  VAR_3->shared->type = VAR_3->features.type;
  VAR_3->shared->touch_input = VAR_3->touch_input;
 }

 if (VAR_3->has_mute_touch_switch) {
  VAR_3->shared->has_mute_touch_switch = 1;
  VAR_3->shared->is_touch_on = 1;
 }

 if (VAR_3->shared->has_mute_touch_switch &&
     VAR_3->shared->touch_input) {
  FUNC_1(VAR_0, VAR_3->shared->touch_input->evbit);
  FUNC_0(VAR_3->shared->touch_input, VAR_0,
         VAR_1);
 }
}
