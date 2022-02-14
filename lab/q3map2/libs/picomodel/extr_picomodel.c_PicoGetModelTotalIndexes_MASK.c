
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numSurfaces; int * surface; } ;
typedef TYPE_1__ picoModel_t ;


 scalar_t__ FUNC_0 (int ) ;

int FUNC_1( picoModel_t *VAR_0 ){
 int VAR_1, VAR_2;


 if ( VAR_0 == ((void*)0) ) {
  return 0;
 }
 if ( VAR_0->surface == ((void*)0) ) {
  return 0;
 }

 VAR_2 = 0;
 for ( VAR_1 = 0; VAR_1 < VAR_0->numSurfaces; VAR_1++ )
  VAR_2 += FUNC_0( VAR_0->surface[ VAR_1 ] );

 return VAR_2;
}
