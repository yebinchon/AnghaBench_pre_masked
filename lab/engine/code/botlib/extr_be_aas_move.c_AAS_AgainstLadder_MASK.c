
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_7__ {scalar_t__ dist; int normal; } ;
typedef TYPE_2__ aas_plane_t ;
struct TYPE_8__ {int faceflags; int planenum; } ;
typedef TYPE_3__ aas_face_t ;
struct TYPE_9__ {int numfaces; int firstface; } ;
typedef TYPE_4__ aas_area_t ;
struct TYPE_10__ {int* faceindex; TYPE_2__* planes; TYPE_3__* faces; TYPE_4__* areas; TYPE_1__* areasettings; } ;
struct TYPE_6__ {int areaflags; int presencetype; } ;


 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (size_t,int*,float) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int*,int*) ;
 TYPE_5__ VAR_3 ;
 size_t FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_6(vec3_t VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;
 vec3_t VAR_11;
 aas_plane_t *VAR_12;
 aas_face_t *VAR_13;
 aas_area_t *VAR_14;

 FUNC_3(VAR_6, VAR_11);
 VAR_7 = FUNC_0(VAR_11);
 if (!VAR_7)
 {
  VAR_11[0] += 1;
  VAR_7 = FUNC_0(VAR_11);
  if (!VAR_7)
  {
   VAR_11[1] += 1;
   VAR_7 = FUNC_0(VAR_11);
   if (!VAR_7)
   {
    VAR_11[0] -= 2;
    VAR_7 = FUNC_0(VAR_11);
    if (!VAR_7)
    {
     VAR_11[1] -= 2;
     VAR_7 = FUNC_0(VAR_11);
    }
   }
  }
 }

 if (!VAR_7) return VAR_4;

 if (!(VAR_3.areasettings[VAR_7].areaflags & VAR_0)) return VAR_4;

 if (!(VAR_3.areasettings[VAR_7].presencetype & VAR_2)) return VAR_4;

 VAR_14 = &VAR_3.areas[VAR_7];
 for (VAR_8 = 0; VAR_8 < VAR_14->numfaces; VAR_8++)
 {
  VAR_9 = VAR_3.faceindex[VAR_14->firstface + VAR_8];
  VAR_10 = VAR_9 < 0;
  VAR_13 = &VAR_3.faces[FUNC_4(VAR_9)];

  if (!(VAR_13->faceflags & VAR_1)) continue;

  VAR_12 = &VAR_3.planes[VAR_13->planenum ^ VAR_10];

  if (FUNC_5(FUNC_2(VAR_12->normal, VAR_6) - VAR_12->dist) < 3)
  {
   if (FUNC_1(FUNC_4(VAR_9), VAR_6, 0.1f)) return VAR_5;
  }
 }
 return VAR_4;
}
