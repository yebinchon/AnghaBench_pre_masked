
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int numVerts; TYPE_3__* verts; TYPE_1__* shaderInfo; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_8__ {scalar_t__* st; scalar_t__** color; int normal; int xyz; } ;
typedef TYPE_3__ bspDrawVert_t ;
struct TYPE_6__ {int compileFlags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_1( mapDrawSurface_t *VAR_6, bspDrawVert_t *VAR_7, int *VAR_8 ){
 int VAR_9;
 bspDrawVert_t *VAR_10;



 for ( VAR_9 = 0; VAR_9 < VAR_6->numVerts; VAR_9++ )
 {

  VAR_10 = &VAR_6->verts[ VAR_9 ];


  if ( FUNC_0( VAR_7->xyz, VAR_10->xyz ) == VAR_5 ) {
   continue;
  }
  if ( FUNC_0( VAR_7->normal, VAR_10->normal ) == VAR_5 ) {
   continue;
  }


  ( *VAR_8 )++;


  if ( VAR_7->st[ 0 ] != VAR_10->st[ 0 ] || VAR_7->st[ 1 ] != VAR_10->st[ 1 ] ) {
   continue;
  }
  if ( VAR_7->color[ 0 ][ 3 ] != VAR_10->color[ 0 ][ 3 ] ) {
   continue;
  }


  VAR_4++;
  return VAR_9;
 }


 if ( VAR_6->numVerts >= ( ( VAR_6->shaderInfo->compileFlags & VAR_0 ) ? VAR_3 : VAR_2 ) ) {
  return VAR_1;
 }


 VAR_10 = &VAR_6->verts[ VAR_6->numVerts++ ];
 *VAR_10 = *VAR_7;
 return ( VAR_6->numVerts - 1 );
}
