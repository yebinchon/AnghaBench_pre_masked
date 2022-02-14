
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clockdomain {int clkdm_offs; int cm_inst; int prcm_partition; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct clockdomain *VAR_0)
{
 FUNC_0(VAR_0->prcm_partition,
     VAR_0->cm_inst, VAR_0->clkdm_offs);
}
