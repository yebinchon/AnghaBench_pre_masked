
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ surfaceType; int lodFixed; scalar_t__ lodRadius; scalar_t__* lodOrigin; int height; int width; int * heightLodError; TYPE_1__* verts; int * widthLodError; } ;
typedef TYPE_3__ srfGridMesh_t ;
struct TYPE_11__ {int numsurfaces; TYPE_2__* surfaces; } ;
struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_8__ {scalar_t__* xyz; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 scalar_t__ VAR_0 ;
 double FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;

void FUNC_3( int VAR_4, srfGridMesh_t *VAR_5 ) {
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 srfGridMesh_t *VAR_14;

 for ( VAR_6 = VAR_4; VAR_6 < VAR_3.numsurfaces; VAR_6++ ) {

  VAR_14 = (srfGridMesh_t *) VAR_3.surfaces[VAR_6].data;

  if ( VAR_14->surfaceType != VAR_0 ) continue;

  if ( VAR_14->lodFixed == 2 ) continue;

  if ( VAR_5->lodRadius != VAR_14->lodRadius ) continue;

  if ( VAR_5->lodOrigin[0] != VAR_14->lodOrigin[0] ) continue;
  if ( VAR_5->lodOrigin[1] != VAR_14->lodOrigin[1] ) continue;
  if ( VAR_5->lodOrigin[2] != VAR_14->lodOrigin[2] ) continue;

  VAR_13 = VAR_1;
  for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {

   if (VAR_10) VAR_11 = (VAR_5->height-1) * VAR_5->width;
   else VAR_11 = 0;
   if (FUNC_1(VAR_5, VAR_11)) continue;
   for (VAR_7 = 1; VAR_7 < VAR_5->width-1; VAR_7++) {
    for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {

     if (VAR_9) VAR_12 = (VAR_14->height-1) * VAR_14->width;
     else VAR_12 = 0;
     if (FUNC_1(VAR_14, VAR_12)) continue;
     for ( VAR_8 = 1; VAR_8 < VAR_14->width-1; VAR_8++) {

      if ( FUNC_2(VAR_5->verts[VAR_7 + VAR_11].xyz[0] - VAR_14->verts[VAR_8 + VAR_12].xyz[0]) > .1) continue;
      if ( FUNC_2(VAR_5->verts[VAR_7 + VAR_11].xyz[1] - VAR_14->verts[VAR_8 + VAR_12].xyz[1]) > .1) continue;
      if ( FUNC_2(VAR_5->verts[VAR_7 + VAR_11].xyz[2] - VAR_14->verts[VAR_8 + VAR_12].xyz[2]) > .1) continue;

      VAR_14->widthLodError[VAR_8] = VAR_5->widthLodError[VAR_7];
      VAR_13 = VAR_2;
     }
    }
    for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {

     if (VAR_9) VAR_12 = VAR_14->width-1;
     else VAR_12 = 0;
     if (FUNC_0(VAR_14, VAR_12)) continue;
     for ( VAR_8 = 1; VAR_8 < VAR_14->height-1; VAR_8++) {

      if ( FUNC_2(VAR_5->verts[VAR_7 + VAR_11].xyz[0] - VAR_14->verts[VAR_14->width * VAR_8 + VAR_12].xyz[0]) > .1) continue;
      if ( FUNC_2(VAR_5->verts[VAR_7 + VAR_11].xyz[1] - VAR_14->verts[VAR_14->width * VAR_8 + VAR_12].xyz[1]) > .1) continue;
      if ( FUNC_2(VAR_5->verts[VAR_7 + VAR_11].xyz[2] - VAR_14->verts[VAR_14->width * VAR_8 + VAR_12].xyz[2]) > .1) continue;

      VAR_14->heightLodError[VAR_8] = VAR_5->widthLodError[VAR_7];
      VAR_13 = VAR_2;
     }
    }
   }
  }
  for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {

   if (VAR_10) VAR_11 = VAR_5->width-1;
   else VAR_11 = 0;
   if (FUNC_0(VAR_5, VAR_11)) continue;
   for (VAR_7 = 1; VAR_7 < VAR_5->height-1; VAR_7++) {
    for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {

     if (VAR_9) VAR_12 = (VAR_14->height-1) * VAR_14->width;
     else VAR_12 = 0;
     if (FUNC_1(VAR_14, VAR_12)) continue;
     for ( VAR_8 = 1; VAR_8 < VAR_14->width-1; VAR_8++) {

      if ( FUNC_2(VAR_5->verts[VAR_5->width * VAR_7 + VAR_11].xyz[0] - VAR_14->verts[VAR_8 + VAR_12].xyz[0]) > .1) continue;
      if ( FUNC_2(VAR_5->verts[VAR_5->width * VAR_7 + VAR_11].xyz[1] - VAR_14->verts[VAR_8 + VAR_12].xyz[1]) > .1) continue;
      if ( FUNC_2(VAR_5->verts[VAR_5->width * VAR_7 + VAR_11].xyz[2] - VAR_14->verts[VAR_8 + VAR_12].xyz[2]) > .1) continue;

      VAR_14->widthLodError[VAR_8] = VAR_5->heightLodError[VAR_7];
      VAR_13 = VAR_2;
     }
    }
    for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {

     if (VAR_9) VAR_12 = VAR_14->width-1;
     else VAR_12 = 0;
     if (FUNC_0(VAR_14, VAR_12)) continue;
     for ( VAR_8 = 1; VAR_8 < VAR_14->height-1; VAR_8++) {

      if ( FUNC_2(VAR_5->verts[VAR_5->width * VAR_7 + VAR_11].xyz[0] - VAR_14->verts[VAR_14->width * VAR_8 + VAR_12].xyz[0]) > .1) continue;
      if ( FUNC_2(VAR_5->verts[VAR_5->width * VAR_7 + VAR_11].xyz[1] - VAR_14->verts[VAR_14->width * VAR_8 + VAR_12].xyz[1]) > .1) continue;
      if ( FUNC_2(VAR_5->verts[VAR_5->width * VAR_7 + VAR_11].xyz[2] - VAR_14->verts[VAR_14->width * VAR_8 + VAR_12].xyz[2]) > .1) continue;

      VAR_14->heightLodError[VAR_8] = VAR_5->heightLodError[VAR_7];
      VAR_13 = VAR_2;
     }
    }
   }
  }
  if (VAR_13) {
   VAR_14->lodFixed = 2;
   FUNC_3 ( VAR_4, VAR_14 );


  }
 }
}
