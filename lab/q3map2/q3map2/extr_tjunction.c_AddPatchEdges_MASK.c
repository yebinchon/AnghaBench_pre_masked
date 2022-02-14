
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int patchWidth; int patchHeight; TYPE_1__* verts; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_4__ {float* xyz; } ;


 int FUNC_0 (float*,float*,int ) ;
 scalar_t__ FUNC_1 (float*,float*,float*) ;
 int VAR_0 ;

void FUNC_2( mapDrawSurface_t *VAR_1 ) {
 int VAR_2;
 float *VAR_3, *VAR_4, *VAR_5;

 for ( VAR_2 = 0 ; VAR_2 < VAR_1->patchWidth - 2; VAR_2 += 2 ) {
  VAR_3 = VAR_1->verts[ VAR_2 ].xyz;
  VAR_4 = VAR_1->verts[ VAR_2 + 1 ].xyz;
  VAR_5 = VAR_1->verts[ VAR_2 + 2 ].xyz;


  if ( FUNC_1( VAR_3, VAR_4, VAR_5 ) ) {
   FUNC_0( VAR_3, VAR_5, VAR_0 );
  }

  VAR_3 = VAR_1->verts[ ( VAR_1->patchHeight - 1 ) * VAR_1->patchWidth + VAR_2 ].xyz;
  VAR_4 = VAR_1->verts[ ( VAR_1->patchHeight - 1 ) * VAR_1->patchWidth + VAR_2 + 1 ].xyz;
  VAR_5 = VAR_1->verts[ ( VAR_1->patchHeight - 1 ) * VAR_1->patchWidth + VAR_2 + 2 ].xyz;


  if ( FUNC_1( VAR_3, VAR_4, VAR_5 ) ) {
   FUNC_0( VAR_3, VAR_5, VAR_0 );
  }
 }

 for ( VAR_2 = 0 ; VAR_2 < VAR_1->patchHeight - 2 ; VAR_2 += 2 ) {
  VAR_3 = VAR_1->verts[ VAR_2 * VAR_1->patchWidth ].xyz;
  VAR_4 = VAR_1->verts[ ( VAR_2 + 1 ) * VAR_1->patchWidth ].xyz;
  VAR_5 = VAR_1->verts[ ( VAR_2 + 2 ) * VAR_1->patchWidth ].xyz;


  if ( FUNC_1( VAR_3, VAR_4, VAR_5 ) ) {
   FUNC_0( VAR_3, VAR_5, VAR_0 );
  }

  VAR_3 = VAR_1->verts[ ( VAR_1->patchWidth - 1 ) + VAR_2 * VAR_1->patchWidth ].xyz;
  VAR_4 = VAR_1->verts[ ( VAR_1->patchWidth - 1 ) + ( VAR_2 + 1 ) * VAR_1->patchWidth ].xyz;
  VAR_5 = VAR_1->verts[ ( VAR_1->patchWidth - 1 ) + ( VAR_2 + 2 ) * VAR_1->patchWidth ].xyz;


  if ( FUNC_1( VAR_3, VAR_4, VAR_5 ) ) {
   FUNC_0( VAR_3, VAR_5, VAR_0 );
  }
 }


}
