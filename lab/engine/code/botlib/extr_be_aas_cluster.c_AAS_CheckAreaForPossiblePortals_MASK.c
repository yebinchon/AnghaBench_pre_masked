
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int numareafrontfaces ;
typedef int numareabackfaces ;
struct TYPE_6__ {int faceflags; int frontarea; int backarea; int planenum; int numedges; int firstedge; } ;
typedef TYPE_2__ aas_face_t ;
struct TYPE_7__ {int numfaces; int firstface; } ;
typedef TYPE_3__ aas_area_t ;
struct TYPE_8__ {TYPE_1__* areasettings; int * edgeindex; TYPE_2__* faces; int * faceindex; TYPE_3__* areas; } ;
struct TYPE_5__ {int contents; int areaflags; } ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int*,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (char*,int) ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_4 (int ) ;

int FUNC_5(int VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15[VAR_4], VAR_16, VAR_17;
 int VAR_18[VAR_4], VAR_19[VAR_4];
 int VAR_20[VAR_4], VAR_21[VAR_4];
 int VAR_22, VAR_23;
 int VAR_24[VAR_4], VAR_25[VAR_4];
 int VAR_26, VAR_27;
 int VAR_28, VAR_29, VAR_30;
 aas_area_t *VAR_31;
 aas_face_t *VAR_32, *VAR_33, *VAR_34;


 if (VAR_5.areasettings[VAR_6].contents & VAR_0) return 0;

 if (!(VAR_5.areasettings[VAR_6].areaflags & VAR_2)) return 0;

 FUNC_2(VAR_18, 0, sizeof(VAR_18));
 FUNC_2(VAR_19, 0, sizeof(VAR_19));
 VAR_22 = VAR_23 = 0;
 VAR_26 = VAR_27 = 0;
 VAR_28 = VAR_29 = -1;

 VAR_16 = FUNC_1(VAR_15, 0, VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_16; VAR_7++)
 {
  VAR_31 = &VAR_5.areas[VAR_15[VAR_7]];
  for (VAR_8 = 0; VAR_8 < VAR_31->numfaces; VAR_8++)
  {
   VAR_14 = FUNC_4(VAR_5.faceindex[VAR_31->firstface + VAR_8]);
   VAR_34 = &VAR_5.faces[VAR_14];

   if (VAR_34->faceflags & VAR_3) continue;

   for (VAR_9 = 0; VAR_9 < VAR_16; VAR_9++)
   {
    if (VAR_9 == VAR_7) continue;
    if (VAR_34->frontarea == VAR_15[VAR_9] || VAR_34->backarea == VAR_15[VAR_9]) break;
   }

   if (VAR_9 != VAR_16) continue;

   if (VAR_34->frontarea == VAR_15[VAR_7]) VAR_17 = VAR_34->backarea;
   else VAR_17 = VAR_34->frontarea;

   if (VAR_5.areasettings[VAR_17].contents & VAR_0) return 0;

   VAR_30 = VAR_34->planenum & ~1;

   if (VAR_28 < 0 || VAR_30 == VAR_28)
   {
    VAR_28 = VAR_30;
    VAR_20[VAR_22++] = VAR_14;
    for (VAR_9 = 0; VAR_9 < VAR_26; VAR_9++)
    {
     if (VAR_24[VAR_9] == VAR_17) break;
    }
    if (VAR_9 == VAR_26) VAR_24[VAR_26++] = VAR_17;
    VAR_18[VAR_7]++;
   }
   else if (VAR_29 < 0 || VAR_30 == VAR_29)
   {
    VAR_29 = VAR_30;
    VAR_21[VAR_23++] = VAR_14;
    for (VAR_9 = 0; VAR_9 < VAR_27; VAR_9++)
    {
     if (VAR_25[VAR_9] == VAR_17) break;
    }
    if (VAR_9 == VAR_27) VAR_25[VAR_27++] = VAR_17;
    VAR_19[VAR_7]++;
   }
   else
   {
    return 0;
   }
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_16; VAR_7++)
 {
  if (!VAR_18[VAR_7] || !VAR_19[VAR_7]) return 0;
 }

 if (!FUNC_0(VAR_24, VAR_26)) return 0;

 if (!FUNC_0(VAR_25, VAR_27)) return 0;

 for (VAR_7 = 0; VAR_7 < VAR_22; VAR_7++)
 {
  VAR_32 = &VAR_5.faces[VAR_20[VAR_7]];
  for (VAR_10 = 0; VAR_10 < VAR_32->numedges; VAR_10++)
  {
   VAR_12 = FUNC_4(VAR_5.edgeindex[VAR_32->firstedge + VAR_10]);
   for (VAR_8 = 0; VAR_8 < VAR_23; VAR_8++)
   {
    VAR_33 = &VAR_5.faces[VAR_21[VAR_8]];
    for (VAR_11 = 0; VAR_11 < VAR_33->numedges; VAR_11++)
    {
     VAR_13 = FUNC_4(VAR_5.edgeindex[VAR_33->firstedge + VAR_11]);
     if (VAR_12 == VAR_13) break;
    }
    if (VAR_11 != VAR_33->numedges) break;
   }
   if (VAR_8 != VAR_23) break;
  }
  if (VAR_10 != VAR_32->numedges) break;
 }
 if (VAR_7 != VAR_22) return 0;

 for (VAR_7 = 0; VAR_7 < VAR_16; VAR_7++)
 {
  VAR_5.areasettings[VAR_15[VAR_7]].contents |= VAR_0;

  VAR_5.areasettings[VAR_15[VAR_7]].contents |= VAR_1;
  FUNC_3("possible portal: %d\r\n", VAR_15[VAR_7]);
 }

 return VAR_16;
}
