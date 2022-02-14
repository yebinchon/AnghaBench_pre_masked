
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int faceindexsize; int* faceindex; TYPE_2__* areas; } ;
typedef TYPE_1__ optimized_t ;
struct TYPE_9__ {int numfaces; int firstface; } ;
typedef TYPE_2__ aas_area_t ;
struct TYPE_10__ {int* faceindex; TYPE_2__* areas; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 TYPE_3__ VAR_0 ;

void FUNC_2(optimized_t *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 aas_area_t *VAR_6, *VAR_7;

 VAR_6 = &VAR_0.areas[VAR_2];
 VAR_7 = &VAR_1->areas[VAR_2];
 FUNC_1(VAR_7, VAR_6, sizeof(aas_area_t));

 VAR_7->numfaces = 0;
 VAR_7->firstface = VAR_1->faceindexsize;
 for (VAR_3 = 0; VAR_3 < VAR_6->numfaces; VAR_3++)
 {
  VAR_4 = VAR_0.faceindex[VAR_6->firstface + VAR_3];
  VAR_5 = FUNC_0(VAR_1, VAR_4);
  if (VAR_5)
  {
   VAR_1->faceindex[VAR_7->firstface + VAR_7->numfaces] = VAR_5;
   VAR_7->numfaces++;
   VAR_1->faceindexsize++;
  }
 }
}
