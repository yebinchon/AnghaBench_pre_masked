
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
typedef int u_long ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
typedef int address ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,void*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ,int*) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (int ,int ,int ) ;

int FUNC_9( int VAR_6 ){
 int VAR_7;
 struct sockaddr_in VAR_8;
 u_long VAR_9 = 1;

 if ( ( VAR_7 = FUNC_8( VAR_4, VAR_5, VAR_3 ) ) == -1 ) {
  FUNC_2( "WINS_OpenSocket: %s\n", FUNC_0( FUNC_1() ) );
  return -1;
 }

 if ( FUNC_6( VAR_7, VAR_1, &VAR_9 ) == -1 ) {
  FUNC_2( "WINS_OpenSocket: %s\n", FUNC_0( FUNC_1() ) );
  FUNC_4( VAR_7 );
  return -1;
 }

 FUNC_7( (char *) &VAR_8, 0, sizeof( VAR_8 ) );
 VAR_8.sin_family = VAR_0;
 VAR_8.sin_addr.s_addr = VAR_2;
 VAR_8.sin_port = FUNC_5( (u_short)VAR_6 );
 if ( FUNC_3( VAR_7, (void *)&VAR_8, sizeof( VAR_8 ) ) == -1 ) {
  FUNC_2( "WINS_OpenSocket: %s\n", FUNC_0( FUNC_1() ) );
  FUNC_4( VAR_7 );
  return -1;
 }

 return VAR_7;
}
