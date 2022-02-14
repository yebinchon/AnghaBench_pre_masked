
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_14__ {int* endpos; scalar_t__ startsolid; } ;
typedef TYPE_2__ aas_trace_t ;
struct TYPE_15__ {int areanum; int* start; int* end; struct TYPE_15__* next; int traveltime; int traveltype; scalar_t__ edgenum; scalar_t__ facenum; } ;
typedef TYPE_3__ aas_lreachability_t ;
struct TYPE_16__ {int faceflags; } ;
typedef TYPE_4__ aas_face_t ;
struct TYPE_17__ {int frames; int stopevent; } ;
typedef TYPE_5__ aas_clientmove_t ;
struct TYPE_18__ {scalar_t__* maxs; scalar_t__* mins; int* center; int numfaces; int firstface; } ;
typedef TYPE_6__ aas_area_t ;
struct TYPE_20__ {int rs_rocketjump; int rs_bfgjump; } ;
struct TYPE_19__ {int* faceindex; TYPE_4__* faces; TYPE_6__* areas; TYPE_1__* areasettings; } ;
struct TYPE_13__ {int areaflags; } ;


 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 float FUNC_3 (int*) ;
 int FUNC_4 (int,int*) ;
 int FUNC_5 (float,int*,int*,float*) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (TYPE_5__*,int,int*,int ,int,int*,int*,int,int,float,int,int,int) ;
 float FUNC_8 (int*) ;
 TYPE_2__ FUNC_9 (int*,int*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_10 (char*,int,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (int*,int*) ;
 int FUNC_12 (int*,float,int*) ;
 int FUNC_13 (int*,int ,int ,float) ;
 int FUNC_14 (int*,int*,int*) ;
 TYPE_9__ VAR_13 ;
 TYPE_8__ VAR_14 ;
 size_t FUNC_15 (int) ;
 TYPE_3__** VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

int FUNC_16(int VAR_19, int VAR_20)
{
 int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 float VAR_26, VAR_27;

 aas_face_t *VAR_28;
 aas_area_t *VAR_29, *VAR_30;
 aas_lreachability_t *VAR_31;
 vec3_t VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37;
 vec3_t VAR_38;
 aas_clientmove_t VAR_39;
 aas_trace_t VAR_40;

 VAR_25 = VAR_16;




 if (!FUNC_1(VAR_19) || FUNC_2(VAR_19)) return VAR_16;
 if (!FUNC_1(VAR_20)) return VAR_16;

 if (!(VAR_14.areasettings[VAR_20].areaflags & VAR_0)) return VAR_16;

 VAR_29 = &VAR_14.areas[VAR_19];
 VAR_30 = &VAR_14.areas[VAR_20];

 if (VAR_30->maxs[2] < VAR_29->mins[2]) return VAR_16;

 FUNC_11(VAR_14.areas[VAR_19].center, VAR_34);

 if (!FUNC_6(VAR_34)) FUNC_10("area %d center %f %f %f in solid?\r\n", VAR_19,
       VAR_34[0], VAR_34[1], VAR_34[2]);
 FUNC_11(VAR_34, VAR_35);
 VAR_35[2] -= 1000;
 VAR_40 = FUNC_9(VAR_34, VAR_35, VAR_2, -1);
 if (VAR_40.startsolid) return VAR_16;
 FUNC_11(VAR_40.endpos, VAR_32);



 for (VAR_22 = 0; VAR_22 < VAR_30->numfaces; VAR_22++)
 {
  VAR_21 = VAR_14.faceindex[VAR_30->firstface + VAR_22];
  VAR_28 = &VAR_14.faces[FUNC_15(VAR_21)];

  if (!(VAR_28->faceflags & VAR_1)) continue;

  FUNC_4(VAR_21, VAR_33);

  if (VAR_33[2] < VAR_32[2] + 64) continue;

  for (VAR_23 = 0; VAR_23 < 1 ; VAR_23++)
  {

   if (VAR_23) VAR_27 = FUNC_3(VAR_32);
   else VAR_27 = FUNC_8(VAR_32);


   VAR_24 = FUNC_5(VAR_27, VAR_32, VAR_33, &VAR_26);
   if (VAR_24 && VAR_26 < 300)
   {

    FUNC_14(VAR_33, VAR_32, VAR_36);
    VAR_36[2] = 0;


    {

     FUNC_12(VAR_36, VAR_26, VAR_37);
     FUNC_13(VAR_38, 0, 0, VAR_27);







     FUNC_7(&VAR_39, -1, VAR_32, VAR_3, VAR_17,
            VAR_38, VAR_37, 30, 30, 0.1f,
            VAR_6|VAR_5|
            VAR_4|VAR_9|
            VAR_10|VAR_7|VAR_8, VAR_20, VAR_25);


     if (VAR_39.frames < 30 &&
       !(VAR_39.stopevent & (VAR_5|VAR_4|VAR_9))
        && (VAR_39.stopevent & (VAR_8|VAR_10)))
     {

      VAR_31 = FUNC_0();
      if (!VAR_31) return VAR_16;
      VAR_31->areanum = VAR_20;
      VAR_31->facenum = 0;
      VAR_31->edgenum = 0;
      FUNC_11(VAR_32, VAR_31->start);
      FUNC_11(VAR_33, VAR_31->end);
      if (VAR_23)
      {
       VAR_31->traveltype = VAR_11;
       VAR_31->traveltime = VAR_13.rs_bfgjump;
      }
      else
      {
       VAR_31->traveltype = VAR_12;
       VAR_31->traveltime = VAR_13.rs_rocketjump;
      }
      VAR_31->next = VAR_15[VAR_19];
      VAR_15[VAR_19] = VAR_31;

      VAR_18++;
      return VAR_17;
     }
    }
   }
  }
 }

 return VAR_16;
}
