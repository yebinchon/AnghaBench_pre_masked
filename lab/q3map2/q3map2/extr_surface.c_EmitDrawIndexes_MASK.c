
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int numIndexes; scalar_t__* indexes; scalar_t__ type; scalar_t__ numVerts; TYPE_1__* shaderInfo; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_8__ {size_t firstIndex; int numIndexes; } ;
typedef TYPE_3__ bspDrawSurface_t ;
struct TYPE_6__ {int shader; } ;


 int FUNC_0 (char*) ;
 size_t FUNC_1 (int,scalar_t__*) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int ,int ,scalar_t__,int) ;
 scalar_t__* VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;

void FUNC_3( mapDrawSurface_t *VAR_6, bspDrawSurface_t *VAR_7 ){
 int VAR_8;



 VAR_7->firstIndex = FUNC_1( VAR_6->numIndexes, VAR_6->indexes );
 VAR_7->numIndexes = VAR_6->numIndexes;
 if ( VAR_7->firstIndex == VAR_4 ) {

  for ( VAR_8 = 0; VAR_8 < VAR_6->numIndexes; VAR_8++ )
  {
   if ( VAR_4 == VAR_0 ) {
    FUNC_0( "MAX_MAP_DRAW_INDEXES" );
   }
   VAR_3[ VAR_4 ] = VAR_6->indexes[ VAR_8 ];


   if ( VAR_6->type != VAR_1 ) {
    if ( VAR_3[ VAR_4 ] < 0 || VAR_3[ VAR_4 ] >= VAR_6->numVerts ) {
     FUNC_2( VAR_2, "WARNING: %d %s has invalid index %d (%d)\n",
        VAR_5,
        VAR_6->shaderInfo->shader,
        VAR_3[ VAR_4 ],
        VAR_8 );
     VAR_3[ VAR_4 ] = 0;
    }
   }


   VAR_4++;
  }
 }
}
