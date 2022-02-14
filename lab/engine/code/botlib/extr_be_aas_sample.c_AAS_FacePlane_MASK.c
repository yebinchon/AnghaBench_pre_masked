
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_5__ {float dist; int normal; } ;
typedef TYPE_2__ aas_plane_t ;
struct TYPE_6__ {TYPE_1__* faces; TYPE_2__* planes; } ;
struct TYPE_4__ {size_t planenum; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_3__ VAR_0 ;

void FUNC_1(int VAR_1, vec3_t VAR_2, float *VAR_3)
{
 aas_plane_t *VAR_4;

 VAR_4 = &VAR_0.planes[VAR_0.faces[VAR_1].planenum];
 FUNC_0(VAR_4->normal, VAR_2);
 *VAR_3 = VAR_4->dist;
}
