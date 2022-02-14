
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int taglist; int surf; int clip; int env; int layer; } ;
typedef TYPE_1__ lwObject ;
typedef int ListFreeFunc ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3( lwObject *VAR_4 ){
 if ( VAR_4 ) {
  FUNC_2( VAR_4->layer, (ListFreeFunc) VAR_2 );
  FUNC_2( VAR_4->env, (ListFreeFunc) VAR_1 );
  FUNC_2( VAR_4->clip, (ListFreeFunc) VAR_0 );
  FUNC_2( VAR_4->surf, (ListFreeFunc) VAR_3 );
  FUNC_1( &VAR_4->taglist );
  FUNC_0( VAR_4 );
 }
}
