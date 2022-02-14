
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int vec_t ;
typedef int* vec3_t ;
struct TYPE_15__ {int* endpos; scalar_t__ startsolid; } ;
typedef TYPE_2__ aas_trace_t ;
struct TYPE_16__ {int normal; } ;
typedef TYPE_3__ aas_plane_t ;
struct TYPE_17__ {int areanum; int edgenum; int* start; int* end; struct TYPE_17__* next; scalar_t__ traveltime; int traveltype; scalar_t__ facenum; } ;
typedef TYPE_4__ aas_lreachability_t ;
struct TYPE_18__ {int faceflags; int numedges; int firstedge; int frontarea; int backarea; size_t planenum; } ;
typedef TYPE_5__ aas_face_t ;
struct TYPE_19__ {size_t* v; } ;
typedef TYPE_6__ aas_edge_t ;
struct TYPE_20__ {int numfaces; int firstface; } ;
typedef TYPE_7__ aas_area_t ;
struct TYPE_21__ {int* faceindex; int* edgeindex; TYPE_1__* areasettings; TYPE_3__* planes; int ** vertexes; TYPE_6__* edges; TYPE_5__* faces; TYPE_7__* areas; } ;
struct TYPE_14__ {int areaflags; int contents; } ;
struct TYPE_13__ {int rs_maxfallheight; int phys_gravity; scalar_t__ phys_falldelta5; scalar_t__ phys_falldelta10; scalar_t__ rs_falldamage10; scalar_t__ rs_falldamage5; scalar_t__ rs_startwalkoffledge; } ;


 TYPE_4__* FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int*) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (int*,int*,int*,int *,int ) ;
 TYPE_2__ FUNC_9 (int*,int*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int ,int*,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int *,int *,int*) ;
 int FUNC_13 (int*,int*) ;
 int FUNC_14 (int*,int,int*,int*) ;
 int FUNC_15 (int*) ;
 int FUNC_16 (int*,double,int*) ;
 int FUNC_17 (int *,int *,int*) ;
 TYPE_10__ VAR_7 ;
 TYPE_9__ VAR_8 ;
 size_t FUNC_18 (int) ;
 TYPE_4__** VAR_9 ;
 int FUNC_19 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

void FUNC_20(int VAR_13)
{
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21[10], VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 int VAR_29, VAR_30, VAR_31, VAR_32;
 aas_area_t *VAR_33, *VAR_34;
 aas_face_t *VAR_35, *VAR_36, *VAR_37;
 aas_edge_t *VAR_38;
 aas_plane_t *VAR_39;
 vec_t *VAR_40, *VAR_41;
 vec3_t VAR_42, VAR_43, VAR_44, VAR_45;
 aas_lreachability_t *VAR_46;
 aas_trace_t VAR_47;

 if (!FUNC_2(VAR_13) || FUNC_4(VAR_13)) return;

 VAR_33 = &VAR_8.areas[VAR_13];

 for (VAR_14 = 0; VAR_14 < VAR_33->numfaces; VAR_14++)
 {
  VAR_23 = VAR_8.faceindex[VAR_33->firstface + VAR_14];
  VAR_35 = &VAR_8.faces[FUNC_18(VAR_23)];

  if (!(VAR_35->faceflags & VAR_3)) continue;

  for (VAR_16 = 0; VAR_16 < VAR_35->numedges; VAR_16++)
  {
   VAR_26 = VAR_8.edgeindex[VAR_35->firstedge + VAR_16];

   for (VAR_15 = 0; VAR_15 < VAR_33->numfaces; VAR_15++)
   {
    VAR_24 = VAR_8.faceindex[VAR_33->firstface + VAR_15];
    VAR_36 = &VAR_8.faces[FUNC_18(VAR_24)];

    if (VAR_36->faceflags & VAR_3) continue;

    for (VAR_17 = 0; VAR_17 < VAR_36->numedges; VAR_17++)
    {
     VAR_27 = VAR_8.edgeindex[VAR_36->firstedge + VAR_17];
     if (FUNC_18(VAR_26) == FUNC_18(VAR_27))
     {

      if (VAR_36->frontarea == VAR_13) VAR_29 = VAR_36->backarea;
      else VAR_29 = VAR_36->frontarea;

      VAR_34 = &VAR_8.areas[VAR_29];

      if (VAR_8.areasettings[VAR_29].areaflags & VAR_2)
      {

       VAR_30 = VAR_10;
       for (VAR_19 = 0; VAR_19 < VAR_34->numfaces; VAR_19++)
       {
        VAR_25 = VAR_8.faceindex[VAR_34->firstface + VAR_19];

        if (FUNC_18(VAR_25) == FUNC_18(VAR_24)) continue;

        VAR_37 = &VAR_8.faces[FUNC_18(VAR_25)];

        for (VAR_18 = 0; VAR_18 < VAR_37->numedges; VAR_18++)
        {
         VAR_28 = VAR_8.edgeindex[VAR_37->firstedge + VAR_18];

         if (FUNC_18(VAR_28) == FUNC_18(VAR_26))
         {
          if (!(VAR_37->faceflags & VAR_4))
          {
           VAR_30 = VAR_11;
           break;
          }

          if (VAR_37->faceflags & VAR_3)
          {
           VAR_30 = VAR_10;
           break;
          }

          VAR_30 = VAR_11;
          break;
         }
        }
        if (VAR_18 < VAR_37->numedges) break;
       }
       if (!VAR_30) break;
      }

      VAR_38 = &VAR_8.edges[FUNC_18(VAR_26)];
      VAR_32 = VAR_26 < 0;

      VAR_40 = VAR_8.vertexes[VAR_38->v[VAR_32]];
      VAR_41 = VAR_8.vertexes[VAR_38->v[!VAR_32]];

      VAR_39 = &VAR_8.planes[VAR_35->planenum];

      FUNC_17(VAR_41, VAR_40, VAR_42);
      FUNC_11(VAR_39->normal, VAR_42, VAR_44);
      FUNC_15(VAR_44);

      FUNC_12(VAR_40, VAR_41, VAR_43);
      FUNC_16(VAR_43, 0.5, VAR_43);
      FUNC_14(VAR_43, 8, VAR_44, VAR_43);

      FUNC_13(VAR_43, VAR_45);
      VAR_45[2] -= 1000;
      VAR_47 = FUNC_9(VAR_43, VAR_45, VAR_5, -1);

      if (VAR_47.startsolid)
      {

       break;
      }
      VAR_31 = FUNC_6(VAR_47.endpos);
      if (VAR_31 == VAR_13)
      {

       break;
      }
      if (FUNC_7(VAR_13, VAR_31))
      {

       break;
      }
      if (!FUNC_2(VAR_31) && !FUNC_4(VAR_31))
      {

       break;
      }

      if (VAR_8.areasettings[VAR_31].contents & (VAR_1
                      | VAR_0))
      {

       break;
      }

      VAR_22 = FUNC_8(VAR_43, VAR_45, VAR_21, ((void*)0), FUNC_10(VAR_21));
      for (VAR_20 = 0; VAR_20 < VAR_22; VAR_20++)
       if (FUNC_1(VAR_21[VAR_20]))
        break;
      if (VAR_20 < VAR_22)
       break;

      if (VAR_7.rs_maxfallheight && FUNC_19(VAR_43[2] - VAR_47.endpos[2]) > VAR_7.rs_maxfallheight)
       break;

      VAR_46 = FUNC_0();
      if (!VAR_46) break;
      VAR_46->areanum = VAR_31;
      VAR_46->facenum = 0;
      VAR_46->edgenum = VAR_26;
      FUNC_13(VAR_43, VAR_46->start);
      FUNC_13(VAR_47.endpos, VAR_46->end);
      VAR_46->traveltype = VAR_6;
      VAR_46->traveltime = VAR_7.rs_startwalkoffledge + FUNC_19(VAR_43[2] - VAR_47.endpos[2]) * 50 / VAR_7.phys_gravity;
      if (!FUNC_4(VAR_31) && !FUNC_3(VAR_31))
      {
       if (FUNC_5(VAR_43[2] - VAR_47.endpos[2]) > VAR_7.phys_falldelta5)
       {
        VAR_46->traveltime += VAR_7.rs_falldamage5;
       }
       else if (FUNC_5(VAR_43[2] - VAR_47.endpos[2]) > VAR_7.phys_falldelta10)
       {
        VAR_46->traveltime += VAR_7.rs_falldamage10;
       }
      }
      VAR_46->next = VAR_9[VAR_13];
      VAR_9[VAR_13] = VAR_46;

      VAR_12++;
     }
    }
   }
  }
 }
}
