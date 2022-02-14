
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ims_pcu_buttons {int input; } ;
struct ims_pcu {struct ims_pcu_buttons buttons; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ims_pcu *VAR_0)
{
 struct ims_pcu_buttons *VAR_1 = &VAR_0->buttons;

 FUNC_0(VAR_1->input);
}
