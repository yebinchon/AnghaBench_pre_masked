
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {int hw_cap; } ;
typedef int dmar_gaddr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

int
FUNC_1(struct dmar_unit *VAR_1, dmar_gaddr_t VAR_2, dmar_gaddr_t VAR_3,
    dmar_gaddr_t *VAR_4)
{
 dmar_gaddr_t VAR_5;
 int VAR_6;

 for (VAR_6 = FUNC_0(VAR_1->hw_cap);; VAR_6--) {
  VAR_5 = 1ULL << (VAR_6 + VAR_0);
  if ((VAR_2 & (VAR_5 - 1)) == 0 && VAR_3 >= VAR_5)
   break;
  if (VAR_6 == 0)
   break;
 }
 *VAR_4 = VAR_5;
 return (VAR_6);
}
