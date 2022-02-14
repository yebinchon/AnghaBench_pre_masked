
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_22__ {int firstface; int numfaces; int headnode; void** origin; void** maxs; void** mins; } ;
typedef TYPE_1__ sin_dmodel_t ;
typedef scalar_t__ qboolean ;
struct TYPE_29__ {int contents; void* numleafbrushes; void* firstleafbrush; void* numleaffaces; void* firstleafface; void** maxs; void** mins; void* area; void* cluster; } ;
struct TYPE_28__ {int planenum; int* children; void* numfaces; void* firstface; void** maxs; void** mins; } ;
struct TYPE_27__ {int type; void* dist; void** normal; } ;
struct TYPE_26__ {void** point; } ;
struct TYPE_25__ {int numclusters; int** bitofs; } ;
struct TYPE_24__ {int value; void* directstyle; void* directangle; void* direct; void** color; } ;
struct TYPE_23__ {int trans_angle; int flags; int value; int nexttexinfo; void* restitution; void* friction; void* translucence; void* nonlit; void* animtime; void* trans_mag; void*** vecs; } ;
struct TYPE_21__ {int portalnum; int otherarea; } ;
struct TYPE_20__ {int numareaportals; int firstareaportal; } ;
struct TYPE_19__ {int firstside; int numsides; int contents; } ;
struct TYPE_18__ {int lightinfo; void* texinfo; void* planenum; } ;
struct TYPE_17__ {void** v; } ;
struct TYPE_16__ {int lightinfo; int lightofs; int firstedge; void* numedges; void* side; void* planenum; void* texinfo; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (void*) ;
 TYPE_15__* VAR_0 ;
 TYPE_14__* VAR_1 ;
 TYPE_13__* VAR_2 ;
 TYPE_12__* VAR_3 ;
 TYPE_11__* VAR_4 ;
 TYPE_10__* VAR_5 ;
 void** VAR_6 ;
 void** VAR_7 ;
 TYPE_9__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 TYPE_7__* VAR_10 ;
 TYPE_6__* VAR_11 ;
 int* VAR_12 ;
 TYPE_5__* VAR_13 ;
 TYPE_4__* VAR_14 ;
 TYPE_3__* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 TYPE_2__* VAR_32 ;

void FUNC_5 (qboolean VAR_33)
{
 int VAR_34, VAR_35, VAR_36;
 sin_dmodel_t *VAR_37;



 for (VAR_34=0 ; VAR_34<VAR_26 ; VAR_34++)
 {
  VAR_37 = &VAR_9[VAR_34];

  VAR_37->firstface = FUNC_1 (VAR_37->firstface);
  VAR_37->numfaces = FUNC_1 (VAR_37->numfaces);
  VAR_37->headnode = FUNC_1 (VAR_37->headnode);

  for (VAR_35=0 ; VAR_35<3 ; VAR_35++)
  {
   VAR_37->mins[VAR_35] = FUNC_0(VAR_37->mins[VAR_35]);
   VAR_37->maxs[VAR_35] = FUNC_0(VAR_37->maxs[VAR_35]);
   VAR_37->origin[VAR_35] = FUNC_0(VAR_37->origin[VAR_35]);
  }
 }




 for (VAR_34=0 ; VAR_34<VAR_31 ; VAR_34++)
 {
  for (VAR_35=0 ; VAR_35<3 ; VAR_35++)
   VAR_13[VAR_34].point[VAR_35] = FUNC_0 (VAR_13[VAR_34].point[VAR_35]);
 }




 for (VAR_34=0 ; VAR_34<VAR_28 ; VAR_34++)
 {
  for (VAR_35=0 ; VAR_35<3 ; VAR_35++)
   VAR_11[VAR_34].normal[VAR_35] = FUNC_0 (VAR_11[VAR_34].normal[VAR_35]);
  VAR_11[VAR_34].dist = FUNC_0 (VAR_11[VAR_34].dist);
  VAR_11[VAR_34].type = FUNC_1 (VAR_11[VAR_34].type);
 }




 for (VAR_34 = 0; VAR_34 < VAR_30; VAR_34++)
 {
  for (VAR_35=0 ; VAR_35<2 ; VAR_35++)
  {
   for (VAR_36=0; VAR_36<4; VAR_36++)
   {
    VAR_32[VAR_34].vecs[VAR_35][VAR_36] = FUNC_0 (VAR_32[VAR_34].vecs[VAR_35][VAR_36]);
   }
  }
  VAR_32[VAR_34].value = FUNC_1 (VAR_32[VAR_34].value);
  VAR_32[VAR_34].flags = FUNC_1 (VAR_32[VAR_34].flags);

  VAR_32[VAR_34].nexttexinfo = FUNC_1 (VAR_32[VAR_34].nexttexinfo);
 }
 for (VAR_34=0 ; VAR_34<VAR_21 ; VAR_34++)
 {
  VAR_5[VAR_34].texinfo = FUNC_2 (VAR_5[VAR_34].texinfo);




  VAR_5[VAR_34].planenum = FUNC_2 (VAR_5[VAR_34].planenum);

  VAR_5[VAR_34].side = FUNC_2 (VAR_5[VAR_34].side);
  VAR_5[VAR_34].lightofs = FUNC_1 (VAR_5[VAR_34].lightofs);
  VAR_5[VAR_34].firstedge = FUNC_1 (VAR_5[VAR_34].firstedge);
  VAR_5[VAR_34].numedges = FUNC_2 (VAR_5[VAR_34].numedges);
 }




 for (VAR_34=0 ; VAR_34<VAR_27 ; VAR_34++)
 {
  VAR_10[VAR_34].planenum = FUNC_1 (VAR_10[VAR_34].planenum);
  for (VAR_35=0 ; VAR_35<3 ; VAR_35++)
  {
   VAR_10[VAR_34].mins[VAR_35] = FUNC_2 (VAR_10[VAR_34].mins[VAR_35]);
   VAR_10[VAR_34].maxs[VAR_35] = FUNC_2 (VAR_10[VAR_34].maxs[VAR_35]);
  }
  VAR_10[VAR_34].children[0] = FUNC_1 (VAR_10[VAR_34].children[0]);
  VAR_10[VAR_34].children[1] = FUNC_1 (VAR_10[VAR_34].children[1]);




  VAR_10[VAR_34].firstface = FUNC_2 (VAR_10[VAR_34].firstface);
  VAR_10[VAR_34].numfaces = FUNC_2 (VAR_10[VAR_34].numfaces);

 }




 for (VAR_34=0 ; VAR_34<VAR_24 ; VAR_34++)
 {
  VAR_8[VAR_34].contents = FUNC_1 (VAR_8[VAR_34].contents);
  VAR_8[VAR_34].cluster = FUNC_2 (VAR_8[VAR_34].cluster);
  VAR_8[VAR_34].area = FUNC_2 (VAR_8[VAR_34].area);
  for (VAR_35=0 ; VAR_35<3 ; VAR_35++)
  {
   VAR_8[VAR_34].mins[VAR_35] = FUNC_2 (VAR_8[VAR_34].mins[VAR_35]);
   VAR_8[VAR_34].maxs[VAR_35] = FUNC_2 (VAR_8[VAR_34].maxs[VAR_35]);
  }






  VAR_8[VAR_34].firstleafface = FUNC_2 (VAR_8[VAR_34].firstleafface);
  VAR_8[VAR_34].numleaffaces = FUNC_2 (VAR_8[VAR_34].numleaffaces);
  VAR_8[VAR_34].firstleafbrush = FUNC_2 (VAR_8[VAR_34].firstleafbrush);
  VAR_8[VAR_34].numleafbrushes = FUNC_2 (VAR_8[VAR_34].numleafbrushes);

 }




 for (VAR_34=0 ; VAR_34<VAR_23 ; VAR_34++)
  VAR_7[VAR_34] = FUNC_2 (VAR_7[VAR_34]);




 for (VAR_34=0 ; VAR_34<VAR_22 ; VAR_34++)
  VAR_6[VAR_34] = FUNC_2 (VAR_6[VAR_34]);




 for (VAR_34=0 ; VAR_34<VAR_29 ; VAR_34++)
  VAR_12[VAR_34] = FUNC_1 (VAR_12[VAR_34]);




 for (VAR_34=0 ; VAR_34<VAR_20 ; VAR_34++)
 {




  VAR_4[VAR_34].v[0] = FUNC_2 (VAR_4[VAR_34].v[0]);
  VAR_4[VAR_34].v[1] = FUNC_2 (VAR_4[VAR_34].v[1]);

 }




 for (VAR_34=0 ; VAR_34<VAR_18 ; VAR_34++)
 {
  VAR_2[VAR_34].firstside = FUNC_1 (VAR_2[VAR_34].firstside);
  VAR_2[VAR_34].numsides = FUNC_1 (VAR_2[VAR_34].numsides);
  VAR_2[VAR_34].contents = FUNC_1 (VAR_2[VAR_34].contents);
 }




 for (VAR_34=0 ; VAR_34<VAR_17 ; VAR_34++)
 {
  VAR_1[VAR_34].numareaportals = FUNC_1 (VAR_1[VAR_34].numareaportals);
  VAR_1[VAR_34].firstareaportal = FUNC_1 (VAR_1[VAR_34].firstareaportal);
 }




 for (VAR_34=0 ; VAR_34<VAR_16 ; VAR_34++)
 {
  VAR_0[VAR_34].portalnum = FUNC_1 (VAR_0[VAR_34].portalnum);
  VAR_0[VAR_34].otherarea = FUNC_1 (VAR_0[VAR_34].otherarea);
 }




 for (VAR_34=0 ; VAR_34<VAR_19 ; VAR_34++)
 {



  VAR_3[VAR_34].planenum = FUNC_2 (VAR_3[VAR_34].planenum);

  VAR_3[VAR_34].texinfo = FUNC_2 (VAR_3[VAR_34].texinfo);



 }




 if (VAR_33)
  VAR_35 = VAR_14->numclusters;
 else
  VAR_35 = FUNC_1(VAR_14->numclusters);
 VAR_14->numclusters = FUNC_1 (VAR_14->numclusters);
 for (VAR_34=0 ; VAR_34<VAR_35 ; VAR_34++)
 {
  VAR_14->bitofs[VAR_34][0] = FUNC_1 (VAR_14->bitofs[VAR_34][0]);
  VAR_14->bitofs[VAR_34][1] = FUNC_1 (VAR_14->bitofs[VAR_34][1]);
 }
}
