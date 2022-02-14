
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clockdomain {int context; scalar_t__ clkdm_offs; int cm_inst; int prcm_partition; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct clockdomain *VAR_2)
{
 VAR_2->context = FUNC_0(VAR_2->prcm_partition,
          VAR_2->cm_inst,
          VAR_2->clkdm_offs +
          VAR_1);
 VAR_2->context &= VAR_0;
 return 0;
}
