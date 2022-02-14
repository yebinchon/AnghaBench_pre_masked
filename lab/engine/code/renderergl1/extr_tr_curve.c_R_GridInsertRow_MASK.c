
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_12__ {int width; int height; float* heightLodError; float* widthLodError; float lodRadius; int lodOrigin; TYPE_2__* verts; } ;
typedef TYPE_1__ srfGridMesh_t ;
struct TYPE_13__ {int xyz; } ;
typedef TYPE_2__ drawVert_t ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int,int,TYPE_2__**) ;
 TYPE_1__* FUNC_2 (int,int,TYPE_2__**,float**) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;

srfGridMesh_t *FUNC_5( srfGridMesh_t *VAR_1, int VAR_2, int VAR_3, vec3_t VAR_4, float VAR_5 ) {
 int VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;
 drawVert_t VAR_11[VAR_0][VAR_0];
 float VAR_12[2][VAR_0];
 float VAR_13;
 vec3_t VAR_14;

 VAR_10 = 0;
 VAR_8 = VAR_1->width;
 VAR_9 = VAR_1->height + 1;
 if (VAR_9 > VAR_0)
  return ((void*)0);
 for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
  if (VAR_6 == VAR_2) {

   for (VAR_7 = 0; VAR_7 < VAR_1->width; VAR_7++) {
    FUNC_0( &VAR_1->verts[(VAR_6-1) * VAR_1->width + VAR_7], &VAR_1->verts[VAR_6 * VAR_1->width + VAR_7], &VAR_11[VAR_6][VAR_7] );
    if (VAR_7 == VAR_3)
     FUNC_4(VAR_4, VAR_11[VAR_6][VAR_7].xyz);
   }
   VAR_12[1][VAR_6] = VAR_5;
   continue;
  }
  VAR_12[1][VAR_6] = VAR_1->heightLodError[VAR_10];
  for (VAR_7 = 0; VAR_7 < VAR_1->width; VAR_7++) {
   VAR_11[VAR_6][VAR_7] = VAR_1->verts[VAR_10 * VAR_1->width + VAR_7];
  }
  VAR_10++;
 }
 for (VAR_7 = 0; VAR_7 < VAR_1->width; VAR_7++) {
  VAR_12[0][VAR_7] = VAR_1->widthLodError[VAR_7];
 }



 FUNC_1( VAR_8, VAR_9, VAR_11 );

 FUNC_4(VAR_1->lodOrigin, VAR_14);
 VAR_13 = VAR_1->lodRadius;

 FUNC_3(VAR_1);

 VAR_1 = FUNC_2( VAR_8, VAR_9, VAR_11, VAR_12 );
 VAR_1->lodRadius = VAR_13;
 FUNC_4(VAR_14, VAR_1->lodOrigin);
 return VAR_1;
}
