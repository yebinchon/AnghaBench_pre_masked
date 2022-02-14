
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int firstDrawSurf; } ;
typedef TYPE_1__ entity_t ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2( entity_t *VAR_4 ){
 int VAR_5;



 FUNC_1( VAR_0, "--- AddEntitySurfaceModels ---\n" );


 for ( VAR_5 = VAR_4->firstDrawSurf; VAR_5 < VAR_2; VAR_5++ )
  VAR_3 += FUNC_0( &VAR_1[ VAR_5 ] );
}
