
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ deferred; scalar_t__ infoValid; } ;
typedef TYPE_1__ clientInfo_t ;
struct TYPE_5__ {int maxclients; TYPE_1__* clientinfo; } ;


 int FUNC_0 (int,TYPE_1__*) ;
 int FUNC_1 (char*) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;

void FUNC_3( void ) {
 int VAR_2;
 clientInfo_t *VAR_3;


 for ( VAR_2 = 0, VAR_3 = VAR_0.clientinfo ; VAR_2 < VAR_0.maxclients ; VAR_2++, VAR_3++ ) {
  if ( VAR_3->infoValid && VAR_3->deferred ) {

   if ( FUNC_2() < 4000000 ) {
    FUNC_1( "Memory is low. Using deferred model.\n" );
    VAR_3->deferred = VAR_1;
    continue;
   }
   FUNC_0( VAR_2, VAR_3 );

  }
 }
}
