
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
struct dmar_unit {int hw_cap; } ;
typedef unsigned long long dmar_gaddr_t ;
struct TYPE_3__ {unsigned long long agaw; int cap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

int
FUNC_3(struct dmar_unit *VAR_1, dmar_gaddr_t VAR_2, bool VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_0); VAR_4++) {
  if ((1ULL << VAR_0[VAR_4].agaw) >= VAR_2 &&
      (FUNC_0(VAR_1->hw_cap) & VAR_0[VAR_4].cap) != 0)
   break;
 }
 if (VAR_3 && VAR_4 == FUNC_2(VAR_0)) {
  do {
   VAR_4--;
  } while ((FUNC_0(VAR_1->hw_cap) & VAR_0[VAR_4].cap)
      == 0);
 }
 if (VAR_4 < FUNC_2(VAR_0))
  return (VAR_0[VAR_4].agaw);
 FUNC_1(0, ("no mgaw for maxaddr %jx allow_less %d",
     (uintmax_t) VAR_2, VAR_3));
 return (-1);
}
