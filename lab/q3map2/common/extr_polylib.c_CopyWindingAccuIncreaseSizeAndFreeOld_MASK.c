
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_accu_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;

winding_accu_t *FUNC_4( winding_accu_t *VAR_0 ){
 int VAR_1;
 winding_accu_t *VAR_2;

 if ( !VAR_0 ) {
  FUNC_1( "CopyWindingAccuIncreaseSizeAndFreeOld: winding is NULL" );
 }

 VAR_2 = FUNC_0( VAR_0->numpoints + 1 );
 VAR_2->numpoints = VAR_0->numpoints;
 for ( VAR_1 = 0; VAR_1 < VAR_2->numpoints; VAR_1++ )
 {
  FUNC_3( VAR_0->p[VAR_1], VAR_2->p[VAR_1] );
 }
 FUNC_2( VAR_0 );
 return VAR_2;
}
