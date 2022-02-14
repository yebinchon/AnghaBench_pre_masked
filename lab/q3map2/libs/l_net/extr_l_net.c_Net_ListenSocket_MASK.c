
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int socket; int addr; } ;
typedef TYPE_1__ socket_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int ) ;

socket_t *FUNC_7( int VAR_0 ){
 int VAR_1;
 socket_t *VAR_2;

 VAR_1 = FUNC_5( VAR_0 );
 if ( VAR_1 == -1 ) {
  return ((void*)0);
 }

 if ( FUNC_4( VAR_1 ) == -1 ) {
  FUNC_2( VAR_1 );
  return ((void*)0);
 }
 VAR_2 = FUNC_0();
 if ( VAR_2 == ((void*)0) ) {
  FUNC_2( VAR_1 );
  return ((void*)0);
 }
 VAR_2->socket = VAR_1;
 FUNC_3( VAR_1, &VAR_2->addr );
 FUNC_6( "listen socket opened at %s\n", FUNC_1( &VAR_2->addr ) );

 return VAR_2;
}
