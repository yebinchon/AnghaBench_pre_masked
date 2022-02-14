
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef scalar_t__ qboolean ;
struct TYPE_14__ {int* headnode; int visleafs; int firstface; int numfaces; void** origin; void** maxs; void** mins; } ;
typedef TYPE_1__ q1_dmodel_t ;
struct TYPE_15__ {int nummiptex; int* dataofs; } ;
typedef TYPE_2__ q1_dmiptexlump_t ;
struct TYPE_21__ {int lightofs; int firstedge; void* numedges; void* side; void* planenum; void* texinfo; } ;
struct TYPE_20__ {int contents; int visofs; void* nummarksurfaces; void* firstmarksurface; void** maxs; void** mins; } ;
struct TYPE_19__ {int planenum; void* numfaces; void* firstface; void** children; void** maxs; void** mins; } ;
struct TYPE_18__ {int type; void* dist; void** normal; } ;
struct TYPE_17__ {void** point; } ;
struct TYPE_16__ {int miptex; int flags; void*** vecs; } ;
struct TYPE_13__ {int planenum; void** children; } ;
struct TYPE_12__ {void** v; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (void*) ;
 int VAR_0 ;
 TYPE_11__* VAR_1 ;
 TYPE_10__* VAR_2 ;
 TYPE_9__* VAR_3 ;
 TYPE_8__* VAR_4 ;
 void** VAR_5 ;
 TYPE_1__* VAR_6 ;
 TYPE_6__* VAR_7 ;
 TYPE_5__* VAR_8 ;
 int* VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_4__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 TYPE_3__* VAR_24 ;

void FUNC_3 (qboolean VAR_25)
{
 int VAR_26, VAR_27, VAR_28, VAR_29;
 q1_dmodel_t *VAR_30;
 q1_dmiptexlump_t *VAR_31;



 for (VAR_26=0 ; VAR_26<VAR_17 ; VAR_26++)
 {
  VAR_30 = &VAR_6[VAR_26];

  for (VAR_27=0 ; VAR_27<VAR_0 ; VAR_27++)
   VAR_30->headnode[VAR_27] = FUNC_1 (VAR_30->headnode[VAR_27]);

  VAR_30->visleafs = FUNC_1 (VAR_30->visleafs);
  VAR_30->firstface = FUNC_1 (VAR_30->firstface);
  VAR_30->numfaces = FUNC_1 (VAR_30->numfaces);

  for (VAR_27=0 ; VAR_27<3 ; VAR_27++)
  {
   VAR_30->mins[VAR_27] = FUNC_0(VAR_30->mins[VAR_27]);
   VAR_30->maxs[VAR_27] = FUNC_0(VAR_30->maxs[VAR_27]);
   VAR_30->origin[VAR_27] = FUNC_0(VAR_30->origin[VAR_27]);
  }
 }




 for (VAR_26=0 ; VAR_26<VAR_22 ; VAR_26++)
 {
  for (VAR_27=0 ; VAR_27<3 ; VAR_27++)
   VAR_11[VAR_26].point[VAR_27] = FUNC_0(VAR_11[VAR_26].point[VAR_27]);
 }




 for (VAR_26=0 ; VAR_26<VAR_19 ; VAR_26++)
 {
  for (VAR_27=0 ; VAR_27<3 ; VAR_27++)
   VAR_8[VAR_26].normal[VAR_27] = FUNC_0(VAR_8[VAR_26].normal[VAR_27]);
  VAR_8[VAR_26].dist = FUNC_0(VAR_8[VAR_26].dist);
  VAR_8[VAR_26].type = FUNC_1(VAR_8[VAR_26].type);
 }




 for (VAR_26=0 ; VAR_26<VAR_21 ; VAR_26++)
 {
  for (VAR_27=0 ; VAR_27<2 ; VAR_27++)
  {
   for (VAR_28=0; VAR_28<4; VAR_28++)
   {
    VAR_24[VAR_26].vecs[VAR_27][VAR_28] = FUNC_0 (VAR_24[VAR_26].vecs[VAR_27][VAR_28]);
   }
  }
  VAR_24[VAR_26].miptex = FUNC_1(VAR_24[VAR_26].miptex);
  VAR_24[VAR_26].flags = FUNC_1(VAR_24[VAR_26].flags);
 }




 for (VAR_26=0 ; VAR_26<VAR_14 ; VAR_26++)
 {
  VAR_3[VAR_26].texinfo = FUNC_2(VAR_3[VAR_26].texinfo);
  VAR_3[VAR_26].planenum = FUNC_2(VAR_3[VAR_26].planenum);
  VAR_3[VAR_26].side = FUNC_2(VAR_3[VAR_26].side);
  VAR_3[VAR_26].lightofs = FUNC_1(VAR_3[VAR_26].lightofs);
  VAR_3[VAR_26].firstedge = FUNC_1(VAR_3[VAR_26].firstedge);
  VAR_3[VAR_26].numedges = FUNC_2(VAR_3[VAR_26].numedges);
 }




 for (VAR_26=0 ; VAR_26<VAR_18 ; VAR_26++)
 {
  VAR_7[VAR_26].planenum = FUNC_1(VAR_7[VAR_26].planenum);
  for (VAR_27=0 ; VAR_27<3 ; VAR_27++)
  {
   VAR_7[VAR_26].mins[VAR_27] = FUNC_2(VAR_7[VAR_26].mins[VAR_27]);
   VAR_7[VAR_26].maxs[VAR_27] = FUNC_2(VAR_7[VAR_26].maxs[VAR_27]);
  }
  VAR_7[VAR_26].children[0] = FUNC_2(VAR_7[VAR_26].children[0]);
  VAR_7[VAR_26].children[1] = FUNC_2(VAR_7[VAR_26].children[1]);
  VAR_7[VAR_26].firstface = FUNC_2(VAR_7[VAR_26].firstface);
  VAR_7[VAR_26].numfaces = FUNC_2(VAR_7[VAR_26].numfaces);
 }




 for (VAR_26=0 ; VAR_26<VAR_15 ; VAR_26++)
 {
  VAR_4[VAR_26].contents = FUNC_1(VAR_4[VAR_26].contents);
  for (VAR_27=0 ; VAR_27<3 ; VAR_27++)
  {
   VAR_4[VAR_26].mins[VAR_27] = FUNC_2(VAR_4[VAR_26].mins[VAR_27]);
   VAR_4[VAR_26].maxs[VAR_27] = FUNC_2(VAR_4[VAR_26].maxs[VAR_27]);
  }

  VAR_4[VAR_26].firstmarksurface = FUNC_2(VAR_4[VAR_26].firstmarksurface);
  VAR_4[VAR_26].nummarksurfaces = FUNC_2(VAR_4[VAR_26].nummarksurfaces);
  VAR_4[VAR_26].visofs = FUNC_1(VAR_4[VAR_26].visofs);
 }




 for (VAR_26=0 ; VAR_26<VAR_12 ; VAR_26++)
 {
  VAR_1[VAR_26].planenum = FUNC_1(VAR_1[VAR_26].planenum);
  VAR_1[VAR_26].children[0] = FUNC_2(VAR_1[VAR_26].children[0]);
  VAR_1[VAR_26].children[1] = FUNC_2(VAR_1[VAR_26].children[1]);
 }




 if (VAR_23)
 {
  VAR_31 = (q1_dmiptexlump_t *)VAR_10;
  if (VAR_25)
   VAR_29 = VAR_31->nummiptex;
  else
   VAR_29 = FUNC_1(VAR_31->nummiptex);
  VAR_31->nummiptex = FUNC_1 (VAR_31->nummiptex);
  for (VAR_26=0 ; VAR_26<VAR_29 ; VAR_26++)
   VAR_31->dataofs[VAR_26] = FUNC_1(VAR_31->dataofs[VAR_26]);
 }




 for (VAR_26=0 ; VAR_26<VAR_16 ; VAR_26++)
  VAR_5[VAR_26] = FUNC_2(VAR_5[VAR_26]);




 for (VAR_26=0 ; VAR_26<VAR_20 ; VAR_26++)
  VAR_9[VAR_26] = FUNC_1(VAR_9[VAR_26]);




 for (VAR_26=0 ; VAR_26<VAR_13 ; VAR_26++)
 {
  VAR_2[VAR_26].v[0] = FUNC_2(VAR_2[VAR_26].v[0]);
  VAR_2[VAR_26].v[1] = FUNC_2(VAR_2[VAR_26].v[1]);
 }
}
