
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
 int VAR_4 ;
 int FUNC_1 (struct sockaddr_s*) ;
 int FUNC_2 (int,struct sockaddr_s*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int VAR_5 ;
 struct hostent* FUNC_7 (char*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (int ,int ) ;
 char* FUNC_11 (int ,char) ;
 int VAR_10 ;

int FUNC_12( void ){
 int VAR_11;
 struct hostent *VAR_12;
 char VAR_13[VAR_3];
 struct sockaddr_s VAR_14;
 char *VAR_15;
 VAR_9 = VAR_1;
 FUNC_8( VAR_13, VAR_3 );
 VAR_12 = FUNC_7( VAR_13 );


 if ( VAR_12 == 0 ) {
  FUNC_5( "WINS_Init: Unable to resolve hostname\n" );
  return 0;
 }

 VAR_6 = *(int *)VAR_12->h_addr_list[0];



 {

  for ( VAR_15 = VAR_13; *VAR_15; VAR_15++ )
   if ( ( *VAR_15 < '0' || *VAR_15 > '9' ) && *VAR_15 != '.' ) {
    break;
   }


  if ( *VAR_15 ) {
   for ( VAR_11 = 0; VAR_11 < 15; VAR_11++ )
    if ( VAR_13[VAR_11] == '.' ) {
     break;
    }
   VAR_13[VAR_11] = 0;
  }

 }


 if ( ( VAR_8 = FUNC_3( 0 ) ) == VAR_4 ) {
  FUNC_5( "WINS_Init: Unable to open control socket\n" );
 }

 ( (struct sockaddr_in *)&VAR_5 )->sin_family = VAR_0;
 ( (struct sockaddr_in *)&VAR_5 )->sin_addr.s_addr = VAR_2;
 ( (struct sockaddr_in *)&VAR_5 )->sin_port = FUNC_9( (u_short)VAR_9 );

 FUNC_2( VAR_8, &VAR_14 );
 FUNC_10( VAR_7, FUNC_1( &VAR_14 ) );
 VAR_15 = FUNC_11( VAR_7, ':' );
 if ( VAR_15 ) {
  *VAR_15 = 0;
 }
 FUNC_6( "Winsock Initialized\n" );

 return VAR_8;
}
