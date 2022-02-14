
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ wait; scalar_t__ random; int use; int touch; } ;
typedef TYPE_1__ gentity_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,scalar_t__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4( gentity_t *VAR_3 ) {
 FUNC_1( "wait", "0.5", &VAR_3->wait );
 FUNC_1( "random", "0", &VAR_3->random );

 if ( VAR_3->random >= VAR_3->wait && VAR_3->wait >= 0 ) {
  VAR_3->random = VAR_3->wait - VAR_0;
  FUNC_0( "trigger_multiple has random >= wait\n" );
 }

 VAR_3->touch = VAR_1;
 VAR_3->use = VAR_2;

 FUNC_2( VAR_3 );
 FUNC_3 (VAR_3);
}
