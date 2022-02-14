
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * name; } ;
typedef TYPE_1__ picoModel_t ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

void FUNC_2( picoModel_t *VAR_0, char *VAR_1 ){
 if ( VAR_0 == ((void*)0) || VAR_1 == ((void*)0) ) {
  return;
 }
 if ( VAR_0->name != ((void*)0) ) {
  FUNC_1( VAR_0->name );
 }

 VAR_0->name = FUNC_0( VAR_1 );
}
