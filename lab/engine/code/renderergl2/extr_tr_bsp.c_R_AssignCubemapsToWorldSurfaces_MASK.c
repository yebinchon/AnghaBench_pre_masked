
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int numsurfaces; TYPE_3__* surfaces; } ;
typedef TYPE_2__ world_t ;
typedef float* vec3_t ;
struct TYPE_5__ {int type; float** bounds; int localOrigin; } ;
struct TYPE_7__ {int cubemapIndex; TYPE_1__ cullinfo; } ;
typedef TYPE_3__ msurface_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float*) ;
 int FUNC_1 (int ,float*) ;
 TYPE_2__ VAR_2 ;

void FUNC_2(void)
{
 world_t *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_3->numsurfaces; VAR_4++)
 {
  msurface_t *VAR_5 = &VAR_3->surfaces[VAR_4];
  vec3_t VAR_6;

  if (VAR_5->cullinfo.type & VAR_1)
  {
   FUNC_1(VAR_5->cullinfo.localOrigin, VAR_6);
  }
  else if (VAR_5->cullinfo.type & VAR_0)
  {
   VAR_6[0] = (VAR_5->cullinfo.bounds[0][0] + VAR_5->cullinfo.bounds[1][0]) * 0.5f;
   VAR_6[1] = (VAR_5->cullinfo.bounds[0][1] + VAR_5->cullinfo.bounds[1][1]) * 0.5f;
   VAR_6[2] = (VAR_5->cullinfo.bounds[0][2] + VAR_5->cullinfo.bounds[1][2]) * 0.5f;
  }
  else
  {

   continue;
  }

  VAR_5->cubemapIndex = FUNC_0(VAR_6);

 }
}
