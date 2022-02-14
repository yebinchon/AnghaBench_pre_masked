
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {int hw_cap; int hw_ecap; scalar_t__ qi_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (struct dmar_unit*) ;
 int FUNC_2 (struct dmar_unit*) ;
 int FUNC_3 (struct dmar_unit*) ;

__attribute__((used)) static int
FUNC_4(struct dmar_unit *VAR_2, bool VAR_3)
{
 int VAR_4;






 if ((VAR_2->hw_cap & VAR_0) == 0 && !VAR_3)
  return (0);
 if (VAR_2->qi_enabled) {
  FUNC_2(VAR_2);
  if ((VAR_2->hw_ecap & VAR_1) != 0 || VAR_3)
   FUNC_3(VAR_2);
  return (0);
 }
 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == 0 && ((VAR_2->hw_ecap & VAR_1) != 0 || VAR_3))
  VAR_4 = FUNC_1(VAR_2);
 return (VAR_4);
}
