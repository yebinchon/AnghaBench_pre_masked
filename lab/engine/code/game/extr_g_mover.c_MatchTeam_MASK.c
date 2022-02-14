
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* teamchain; } ;
typedef TYPE_1__ gentity_t ;


 int FUNC_0 (TYPE_1__*,int,int) ;

void FUNC_1( gentity_t *VAR_0, int VAR_1, int VAR_2 ) {
 gentity_t *VAR_3;

 for ( VAR_3 = VAR_0 ; VAR_3 ; VAR_3 = VAR_3->teamchain ) {
  FUNC_0( VAR_3, VAR_1, VAR_2 );
 }
}
