
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ims_pcu_gamepad {int input; } ;
struct ims_pcu {struct ims_pcu_gamepad* gamepad; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ims_pcu_gamepad*) ;

__attribute__((used)) static void FUNC_2(struct ims_pcu *VAR_0)
{
 struct ims_pcu_gamepad *VAR_1 = VAR_0->gamepad;

 FUNC_0(VAR_1->input);
 FUNC_1(VAR_1);
}
