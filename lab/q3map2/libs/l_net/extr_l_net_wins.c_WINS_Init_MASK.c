
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct sockaddr_s {int dummy; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct hostent {scalar_t__* h_addr_list; } ;
typedef int WORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int FUNC_1 (struct sockaddr_s*) ;
 int FUNC_2 (int,struct sockaddr_s*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int VAR_4 ;
 struct hostent* FUNC_7 (char*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (int ,int ) ;
 char* FUNC_11 (int ,char) ;
 int VAR_9 ;

int FUNC_12( void ){
 int VAR_10;
 struct hostent *VAR_11;
 char VAR_12[VAR_3];
 struct sockaddr_s VAR_13;
 char *VAR_14;
 int VAR_15;
 WORD VAR_16;

 VAR_16 = FUNC_0( 1, 1 );

 VAR_15 = FUNC_4( VAR_16, &VAR_9 );

 if ( VAR_15 ) {
  FUNC_6( "Winsock initialization failed.\n" );
  return -1;
 }




 VAR_8 = VAR_1;
 FUNC_8( VAR_12, VAR_3 );
 VAR_11 = FUNC_7( VAR_12 );
 VAR_5 = *(int *)VAR_11->h_addr_list[0];



 {

  for ( VAR_14 = VAR_12; *VAR_14; VAR_14++ )
   if ( ( *VAR_14 < '0' || *VAR_14 > '9' ) && *VAR_14 != '.' ) {
    break;
   }


  if ( *VAR_14 ) {
   for ( VAR_10 = 0; VAR_10 < 15; VAR_10++ )
    if ( VAR_12[VAR_10] == '.' ) {
     break;
    }
   VAR_12[VAR_10] = 0;
  }

 }

 if ( ( VAR_7 = FUNC_3( 0 ) ) == -1 ) {
  FUNC_5( "WINS_Init: Unable to open control socket\n" );
 }

 ( (struct sockaddr_in *)&VAR_4 )->sin_family = VAR_0;
 ( (struct sockaddr_in *)&VAR_4 )->sin_addr.s_addr = VAR_2;
 ( (struct sockaddr_in *)&VAR_4 )->sin_port = FUNC_9( (u_short)VAR_8 );

 FUNC_2( VAR_7, &VAR_13 );
 FUNC_10( VAR_6, FUNC_1( &VAR_13 ) );
 VAR_14 = FUNC_11( VAR_6, ':' );
 if ( VAR_14 ) {
  *VAR_14 = 0;
 }
 FUNC_6( "Winsock Initialized\n" );

 return VAR_7;
}
