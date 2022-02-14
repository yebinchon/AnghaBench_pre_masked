
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dmar_domain {int mgaw; int agaw; TYPE_1__* dmar; int awlvl; int pglvl; } ;
struct TYPE_5__ {int agaw; int awlvl; int pglvl; } ;
struct TYPE_4__ {int dev; int hw_cap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;

int
FUNC_3(struct dmar_domain *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_2->mgaw = VAR_3;
 VAR_4 = FUNC_0(VAR_2->dmar->hw_cap);
 for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_1); VAR_5++) {
  if (VAR_1[VAR_5].agaw >= VAR_3) {
   VAR_2->agaw = VAR_1[VAR_5].agaw;
   VAR_2->pglvl = VAR_1[VAR_5].pglvl;
   VAR_2->awlvl = VAR_1[VAR_5].awlvl;
   return (0);
  }
 }
 FUNC_1(VAR_2->dmar->dev,
     "context request mgaw %d: no agaw found, sagaw %x\n",
     VAR_3, VAR_4);
 return (VAR_0);
}
