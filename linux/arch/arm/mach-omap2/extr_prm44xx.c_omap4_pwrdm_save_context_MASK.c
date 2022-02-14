
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerdomain {int context; int pwrstctrl_offs; int prcm_offs; int prcm_partition; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct powerdomain *VAR_1)
{
 VAR_1->context = FUNC_0(VAR_1->prcm_partition,
           VAR_1->prcm_offs,
           VAR_1->pwrstctrl_offs);





 VAR_1->context &= ~VAR_0;
}
