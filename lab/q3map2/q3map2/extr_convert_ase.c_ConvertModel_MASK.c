
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_4__ {int numBSPSurfaces; int firstBSPSurface; } ;
typedef TYPE_1__ bspModel_t ;
typedef int bspDrawSurface_t ;
typedef int FILE ;


 int FUNC_0 (int *,TYPE_1__*,int,int *,int,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_1( FILE *VAR_1, bspModel_t *VAR_2, int VAR_3, vec3_t VAR_4 ){
 int VAR_5, VAR_6;
 bspDrawSurface_t *VAR_7;



 for ( VAR_5 = 0; VAR_5 < VAR_2->numBSPSurfaces; VAR_5++ )
 {
  VAR_6 = VAR_5 + VAR_2->firstBSPSurface;
  VAR_7 = &VAR_0[ VAR_6 ];
  FUNC_0( VAR_1, VAR_2, VAR_3, VAR_7, VAR_6, VAR_4 );
 }
}
