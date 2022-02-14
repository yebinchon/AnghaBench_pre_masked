
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int socket; int addr; } ;
typedef TYPE_1__ socket_t ;
typedef int sockaddr_t ;
struct TYPE_8__ {int ip; } ;
typedef TYPE_2__ address_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int *,int) ;

socket_t *FUNC_8( address_t *VAR_0, int VAR_1 ){
 int VAR_2;
 socket_t *VAR_3;
 sockaddr_t VAR_4;


 FUNC_5( VAR_0->ip, &VAR_4 );

 VAR_2 = FUNC_4( VAR_1 );
 if ( VAR_2 == -1 ) {
  return ((void*)0);
 }

 VAR_3 = FUNC_0();
 if ( VAR_3 == ((void*)0) ) {
  FUNC_2( VAR_2 );
  return ((void*)0);
 }
 VAR_3->socket = VAR_2;


 if ( FUNC_3( VAR_2, &VAR_4 ) == -1 ) {
  FUNC_1( VAR_3 );
  FUNC_2( VAR_2 );
  FUNC_6( "Net_Connect: error connecting\n" );
  return ((void*)0);
 }

 FUNC_7( &VAR_3->addr, &VAR_4, sizeof( sockaddr_t ) );


 return VAR_3;
}
