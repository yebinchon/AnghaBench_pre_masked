
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int side_t ;
struct TYPE_5__ {struct TYPE_5__* next; int * side; } ;
typedef TYPE_1__ sideRef_t ;


 TYPE_1__* FUNC_0 (int) ;

sideRef_t *FUNC_1( side_t *VAR_0, sideRef_t *VAR_1 ){
 sideRef_t *VAR_2;



 if ( VAR_0 == ((void*)0) ) {
  return VAR_1;
 }


 VAR_2 = FUNC_0( sizeof( *VAR_2 ) );
 VAR_2->side = VAR_0;
 VAR_2->next = VAR_1;
 return VAR_2;
}
