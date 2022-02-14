
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dmar_unit {int hw_cap; } ;
struct TYPE_3__ {int pglvl; int cap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

bool
FUNC_2(struct dmar_unit *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_0); VAR_3++) {
  if (VAR_0[VAR_3].pglvl != VAR_2)
   continue;
  if ((FUNC_0(VAR_1->hw_cap) & VAR_0[VAR_3].cap) != 0)
   return (1);
 }
 return (0);
}
