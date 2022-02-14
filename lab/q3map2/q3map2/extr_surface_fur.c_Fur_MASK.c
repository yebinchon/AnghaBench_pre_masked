
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int numVerts; TYPE_2__* verts; scalar_t__ fur; TYPE_6__* shaderInfo; } ;
typedef TYPE_1__ mapDrawSurface_t ;
struct TYPE_8__ {int** color; int xyz; int normal; } ;
typedef TYPE_2__ bspDrawVert_t ;
struct TYPE_9__ {int furNumLayers; float furOffset; float furFade; } ;


 TYPE_1__* FUNC_0 (TYPE_1__*,TYPE_6__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,float,int ,int ) ;
 scalar_t__ VAR_1 ;

void FUNC_2( mapDrawSurface_t *VAR_2 ){
 int VAR_3, VAR_4, VAR_5, VAR_6;
 float VAR_7, VAR_8, VAR_9;
 mapDrawSurface_t *VAR_10;
 bspDrawVert_t *VAR_11;



 if ( VAR_2 == ((void*)0) || VAR_2->fur || VAR_2->shaderInfo->furNumLayers < 1 ) {
  return;
 }


 VAR_6 = VAR_2->shaderInfo->furNumLayers;
 VAR_7 = VAR_2->shaderInfo->furOffset;
 VAR_8 = VAR_2->shaderInfo->furFade * 255.0f;






 for ( VAR_4 = 0; VAR_4 < VAR_2->numVerts; VAR_4++ )
 {

  VAR_11 = &VAR_2->verts[ VAR_4 ];


  VAR_9 = (float) VAR_11->color[ 0 ][ 3 ] / 255.0;


  FUNC_1( VAR_11->xyz, ( VAR_7 * VAR_9 ), VAR_11->normal, VAR_11->xyz );
 }


 for ( VAR_3 = 1; VAR_3 < VAR_6; VAR_3++ )
 {

  VAR_10 = FUNC_0( VAR_2, VAR_2->shaderInfo );
  if ( VAR_10 == ((void*)0) ) {
   return;
  }


  VAR_10->fur = VAR_1;


  for ( VAR_4 = 0; VAR_4 < VAR_10->numVerts; VAR_4++ )
  {

   VAR_11 = &VAR_2->verts[ VAR_4 ];


   VAR_9 = (float) VAR_11->color[ 0 ][ 3 ] / 255.0;


   VAR_11 = &VAR_10->verts[ VAR_4 ];


   FUNC_1( VAR_11->xyz, ( VAR_7 * VAR_9 * VAR_3 ), VAR_11->normal, VAR_11->xyz );


   for ( VAR_5 = 0; VAR_5 < VAR_0; VAR_5++ )
   {
    VAR_9 = (float) VAR_11->color[ VAR_5 ][ 3 ] - VAR_8;
    if ( VAR_9 > 255.0f ) {
     VAR_11->color[ VAR_5 ][ 3 ] = 255;
    }
    else if ( VAR_9 < 0 ) {
     VAR_11->color[ VAR_5 ][ 3 ] = 0;
    }
    else{
     VAR_11->color[ VAR_5 ][ 3 ] = VAR_9;
    }
   }
  }
 }
}
