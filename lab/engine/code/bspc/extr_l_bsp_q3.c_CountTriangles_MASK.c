
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numIndexes; int patchWidth; int patchHeight; } ;
typedef TYPE_1__ q3_dsurface_t ;


 int FUNC_0 (char*,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

void FUNC_1( void ) {
 int VAR_2, VAR_3, VAR_4;
 q3_dsurface_t *VAR_5;

 VAR_3 = VAR_4 = 0;
 for ( VAR_2 = 0; VAR_2 < VAR_1; VAR_2++ ) {
  VAR_5 = &VAR_0[VAR_2];

  VAR_3 += VAR_5->numIndexes / 3;

  if ( VAR_5->patchWidth ) {
   VAR_4 += VAR_5->patchWidth * VAR_5->patchHeight * 2;
  }
 }

 FUNC_0( "%6d triangles\n", VAR_3 );
 FUNC_0( "%6d patch tris\n", VAR_4 );
}
