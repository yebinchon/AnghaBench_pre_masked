
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clockdomain {int flags; int clkdm_offs; int cm_inst; int prcm_partition; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct clockdomain *VAR_3)
{
 if (VAR_3->flags & VAR_1)
  FUNC_0(VAR_3->prcm_partition,
      VAR_3->cm_inst,
      VAR_3->clkdm_offs);
 else if (VAR_3->flags & VAR_0)
  FUNC_1(VAR_3->prcm_partition,
            VAR_3->cm_inst,
            VAR_3->clkdm_offs);
 else
  return -VAR_2;

 return 0;
}
