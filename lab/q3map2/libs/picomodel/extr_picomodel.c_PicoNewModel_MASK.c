
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numFrames; int maxs; int mins; } ;
typedef TYPE_1__ picoModel_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

picoModel_t *FUNC_3( void ){
 picoModel_t *VAR_0;


 VAR_0 = FUNC_0( sizeof( picoModel_t ) );
 if ( VAR_0 == ((void*)0) ) {
  return ((void*)0);
 }


 FUNC_2( VAR_0, 0, sizeof( picoModel_t ) );


 FUNC_1( VAR_0->mins, VAR_0->maxs );


 VAR_0->numFrames = 1;


 return VAR_0;
}
