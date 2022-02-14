
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clockdomain {int flags; int clkdm_offs; int cm_inst; int prcm_partition; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clockdomain*) ;
 int FUNC_1 (struct clockdomain*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct clockdomain *VAR_2)
{
 bool VAR_3 = 0;

 if (!VAR_2->prcm_partition)
  return 0;






 if (VAR_2->flags & VAR_1 &&
     !(VAR_2->flags & VAR_0)) {
  FUNC_0(VAR_2);
  return 0;
 }

 VAR_3 = FUNC_2(VAR_2->prcm_partition,
     VAR_2->cm_inst, VAR_2->clkdm_offs);

 if (!VAR_3 && (VAR_2->flags & VAR_0))
  FUNC_1(VAR_2);

 return 0;
}
