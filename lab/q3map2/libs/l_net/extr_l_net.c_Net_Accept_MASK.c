
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int socket; int addr; } ;
typedef TYPE_1__ socket_t ;
typedef int sockaddr_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;

socket_t *FUNC_4( socket_t *VAR_0 ){
 int VAR_1;
 sockaddr_t VAR_2;
 socket_t *VAR_3;

 VAR_1 = FUNC_1( VAR_0->socket, &VAR_2 );
 if ( VAR_1 == -1 ) {
  return ((void*)0);
 }

 VAR_3 = FUNC_0();
 if ( VAR_3 == ((void*)0) ) {
  FUNC_2( VAR_1 );
  return ((void*)0);
 }
 VAR_3->socket = VAR_1;
 FUNC_3( &VAR_3->addr, &VAR_2, sizeof( sockaddr_t ) );

 return VAR_3;
}
