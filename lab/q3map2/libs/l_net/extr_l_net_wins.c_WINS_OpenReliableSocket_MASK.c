
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
typedef int address ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,void*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,int) ;
 scalar_t__ FUNC_8 (int,int ,int ,void*,int) ;
 int FUNC_9 (int ,int ,int ) ;

int FUNC_10( int VAR_6 ){
 int VAR_7;
 struct sockaddr_in VAR_8;
 BOOL VAR_9 = 0xFFFFFFFF;



 if ( ( VAR_7 = FUNC_9( VAR_0, VAR_4, 0 ) ) == -1 ) {
  FUNC_2( "WINS_OpenReliableSocket: %s\n", FUNC_0( FUNC_1() ) );
  return -1;
 }

 FUNC_7( (char *) &VAR_8, 0, sizeof( VAR_8 ) );
 VAR_8.sin_family = VAR_0;
 VAR_8.sin_addr.s_addr = FUNC_5( VAR_1 );
 VAR_8.sin_port = FUNC_6( (u_short)VAR_6 );
 if ( FUNC_3( VAR_7, (void *)&VAR_8, sizeof( VAR_8 ) ) == -1 ) {
  FUNC_2( "WINS_OpenReliableSocket: %s\n", FUNC_0( FUNC_1() ) );
  FUNC_4( VAR_7 );
  return -1;
 }


 if ( FUNC_8( VAR_7, VAR_2, VAR_5, (void *) &VAR_9, sizeof( int ) ) == VAR_3 ) {
  FUNC_2( "WINS_OpenReliableSocket: %s\n", FUNC_0( FUNC_1() ) );
  FUNC_2( "setsockopt error\n" );
 }

 return VAR_7;
}
