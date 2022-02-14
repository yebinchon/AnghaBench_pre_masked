
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int infmval1; int infmsifl; int infmdifl; int infmscps; int infmdcps; } ;
struct sthyi_sctns {TYPE_2__ mac; } ;
struct TYPE_6__ {int cpus; } ;
struct diag204_x_phys_block {TYPE_1__* cpus; TYPE_3__ hdr; } ;
struct TYPE_4__ {int weight; int ctidx; } ;



 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int ,void*) ;

__attribute__((used)) static void FUNC_1(struct sthyi_sctns *VAR_2,
     struct diag204_x_phys_block *VAR_3,
     void *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->hdr.cpus; VAR_5++) {
  switch (FUNC_0(VAR_3->cpus[VAR_5].ctidx, VAR_4)) {
  case 129:
   if (VAR_3->cpus[VAR_5].weight == VAR_0)
    VAR_2->mac.infmdcps++;
   else
    VAR_2->mac.infmscps++;
   break;
  case 128:
   if (VAR_3->cpus[VAR_5].weight == VAR_0)
    VAR_2->mac.infmdifl++;
   else
    VAR_2->mac.infmsifl++;
   break;
  }
 }
 VAR_2->mac.infmval1 |= VAR_1;
}
