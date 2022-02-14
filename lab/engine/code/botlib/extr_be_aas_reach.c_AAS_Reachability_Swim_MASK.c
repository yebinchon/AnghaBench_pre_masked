
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_10__ {int normal; } ;
typedef TYPE_2__ aas_plane_t ;
struct TYPE_11__ {int areanum; int facenum; int traveltime; struct TYPE_11__* next; int traveltype; int end; int start; scalar_t__ edgenum; } ;
typedef TYPE_3__ aas_lreachability_t ;
struct TYPE_12__ {int planenum; } ;
typedef TYPE_4__ aas_face_t ;
struct TYPE_13__ {scalar_t__* mins; scalar_t__* maxs; int numfaces; int firstface; } ;
typedef TYPE_5__ aas_area_t ;
struct TYPE_14__ {int* faceindex; TYPE_2__* planes; TYPE_4__* faces; TYPE_5__* areas; TYPE_1__* areasettings; } ;
struct TYPE_9__ {int presencetype; } ;


 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 TYPE_7__ VAR_6 ;
 int FUNC_7 (int) ;
 TYPE_3__** VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_8(int VAR_11, int VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 aas_area_t *VAR_18, *VAR_19;
 aas_lreachability_t *VAR_20;
 aas_face_t *VAR_21;
 aas_plane_t *VAR_22;
 vec3_t VAR_23;

 if (!FUNC_1(VAR_11) || !FUNC_1(VAR_12)) return VAR_8;

 if (!(VAR_6.areasettings[VAR_12].presencetype & VAR_4)) return VAR_8;

 VAR_18 = &VAR_6.areas[VAR_11];
 VAR_19 = &VAR_6.areas[VAR_12];


 for (VAR_13 = 0; VAR_13 < 3; VAR_13++)
 {
  if (VAR_18->mins[VAR_13] > VAR_19->maxs[VAR_13] + 10) return VAR_8;
  if (VAR_18->maxs[VAR_13] < VAR_19->mins[VAR_13] - 10) return VAR_8;
 }

 for (VAR_13 = 0; VAR_13 < VAR_18->numfaces; VAR_13++)
 {
  VAR_15 = VAR_6.faceindex[VAR_18->firstface + VAR_13];
  VAR_17 = VAR_15 < 0;
  VAR_15 = FUNC_7(VAR_15);

  for (VAR_14 = 0; VAR_14 < VAR_19->numfaces; VAR_14++)
  {
   VAR_16 = FUNC_7(VAR_6.faceindex[VAR_19->firstface + VAR_14]);

   if (VAR_15 == VAR_16)
   {
    FUNC_3(VAR_15, VAR_23);

    if (FUNC_4(VAR_23) & (VAR_0|VAR_1|VAR_2))
    {

     VAR_21 = &VAR_6.faces[VAR_15];

     VAR_20 = FUNC_0();
     if (!VAR_20) return VAR_8;
     VAR_20->areanum = VAR_12;
     VAR_20->facenum = VAR_15;
     VAR_20->edgenum = 0;
     FUNC_5(VAR_23, VAR_20->start);
     VAR_22 = &VAR_6.planes[VAR_21->planenum ^ VAR_17];
     FUNC_6(VAR_20->start, -VAR_3, VAR_22->normal, VAR_20->end);
     VAR_20->traveltype = VAR_5;
     VAR_20->traveltime = 1;

     if (FUNC_2(VAR_12) < 800)
      VAR_20->traveltime += 200;


     VAR_20->next = VAR_7[VAR_11];
     VAR_7[VAR_11] = VAR_20;
     VAR_10++;
     return VAR_9;
    }
   }
  }
 }
 return VAR_8;
}
