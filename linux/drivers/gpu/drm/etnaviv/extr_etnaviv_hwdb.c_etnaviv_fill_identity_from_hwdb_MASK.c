
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct etnaviv_chip_identity {scalar_t__ model; scalar_t__ revision; } ;
struct etnaviv_gpu {struct etnaviv_chip_identity identity; } ;
struct TYPE_4__ {scalar_t__ model; scalar_t__ revision; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct etnaviv_chip_identity*,TYPE_1__*,int) ;

bool FUNC_2(struct etnaviv_gpu *VAR_1)
{
 struct etnaviv_chip_identity *VAR_2 = &VAR_1->identity;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_0[VAR_3].model == VAR_2->model &&
      VAR_0[VAR_3].revision == VAR_2->revision) {
   FUNC_1(VAR_2, &VAR_0[VAR_3],
          sizeof(*VAR_2));
   return 1;
  }
 }

 return 0;
}
