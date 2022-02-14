
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_8__ {scalar_t__ dist; int normal; } ;
typedef TYPE_1__ sin_dplane_t ;
struct TYPE_9__ {size_t planenum; } ;
typedef TYPE_2__ sin_dbrushside_t ;
struct TYPE_10__ {int numsides; int firstside; } ;
typedef TYPE_3__ sin_dbrush_t ;


 int * FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int **,int ,scalar_t__,int ) ;
 double FUNC_2 (int ,int ) ;
 double FUNC_3 (scalar_t__) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

winding_t *FUNC_4(sin_dbrush_t *VAR_2, sin_dbrushside_t *VAR_3)
{
 int VAR_4;
 sin_dplane_t *VAR_5, *VAR_6;
 sin_dbrushside_t *VAR_7;
 winding_t *VAR_8;


 VAR_5 = &VAR_1[VAR_3->planenum];
 VAR_8 = FUNC_0(VAR_5->normal, VAR_5->dist);
 for (VAR_4 = 0; VAR_4 < VAR_2->numsides && VAR_8; VAR_4++)
 {
  VAR_7 = &VAR_0[VAR_2->firstside + VAR_4];

  if (VAR_7->planenum == VAR_3->planenum) continue;

  VAR_6 = &VAR_1[VAR_7->planenum];
  if (FUNC_2(VAR_5->normal, VAR_6->normal) > 0.999
    && FUNC_3(VAR_5->dist - VAR_6->dist) < 0.01) continue;

  VAR_6 = &VAR_1[VAR_7->planenum^1];
  FUNC_1(&VAR_8, VAR_6->normal, VAR_6->dist, 0);
 }
 return VAR_8;
}
