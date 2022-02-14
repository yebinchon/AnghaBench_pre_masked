
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clockdomain {int dep_bit; scalar_t__ clkdm_offs; int cm_inst; int prcm_partition; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct clockdomain *VAR_1,
     struct clockdomain *VAR_2)
{
 return FUNC_0(VAR_1->prcm_partition,
            VAR_1->cm_inst,
            VAR_1->clkdm_offs +
            VAR_0,
            (1 << VAR_2->dep_bit));
}
