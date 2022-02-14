
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_6__ {size_t planenum; int surf; int flags; } ;
typedef TYPE_1__ side_t ;
struct TYPE_7__ {float dist; int normal; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_8__ {int numsides; TYPE_1__* original_sides; } ;
typedef TYPE_3__ mapbrush_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 size_t FUNC_2 (int ,float) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;

void FUNC_3(mapbrush_t *VAR_4, vec3_t VAR_5, vec3_t VAR_6)
{
 int VAR_7;
 float VAR_8;
 side_t *VAR_9;
 plane_t *VAR_10;

 for (VAR_7 = 0; VAR_7 < VAR_4->numsides; VAR_7++)
 {
  VAR_9 = VAR_4->original_sides + VAR_7;
  VAR_10 = &VAR_3[VAR_9->planenum];
  VAR_8 = VAR_10->dist;
  if (VAR_2) {
   VAR_8 += FUNC_1(VAR_10->normal, VAR_5, VAR_6);
  }
  else {
   VAR_8 += FUNC_0(VAR_10->normal, VAR_5, VAR_6, 0);
  }
  VAR_9->planenum = FUNC_2(VAR_10->normal, VAR_8);

  VAR_9->flags &= ~VAR_0;

  VAR_9->surf &= ~VAR_1;




 }
}
