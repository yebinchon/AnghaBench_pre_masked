
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {scalar_t__ sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int ioctlarg_t ;
typedef int i ;
typedef int address ;
typedef int SOCKET ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,struct sockaddr*,int,int ) ;
 scalar_t__ FUNC_3 (int ,void*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (short) ;
 scalar_t__ FUNC_6 (int ,int ,int*) ;
 scalar_t__ FUNC_7 (int ,int ,int ,char*,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_11 ;

SOCKET FUNC_9( char *VAR_12, int VAR_13, int *VAR_14 ) {
 SOCKET VAR_15;
 struct sockaddr_in VAR_16;
 ioctlarg_t VAR_17 = 1;
 int VAR_18 = 1;

 *VAR_14 = 0;

 if( VAR_12 ) {
  FUNC_0( "Opening IP socket: %s:%i\n", VAR_12, VAR_13 );
 }
 else {
  FUNC_0( "Opening IP socket: 0.0.0.0:%i\n", VAR_13 );
 }

 if( ( VAR_15 = FUNC_8( VAR_5, VAR_8, VAR_4 ) ) == VAR_3 ) {
  *VAR_14 = VAR_11;
  FUNC_0( "WARNING: NET_IPSocket: socket: %s\n", FUNC_1() );
  return VAR_15;
 }

 if( FUNC_6( VAR_15, VAR_1, &VAR_17 ) == VAR_7 ) {
  FUNC_0( "WARNING: NET_IPSocket: ioctl FIONBIO: %s\n", FUNC_1() );
  *VAR_14 = VAR_11;
  FUNC_4(VAR_15);
  return VAR_3;
 }


 if( FUNC_7( VAR_15, VAR_9, VAR_10, (char *) &VAR_18, sizeof(VAR_18) ) == VAR_7 ) {
  FUNC_0( "WARNING: NET_IPSocket: setsockopt SO_BROADCAST: %s\n", FUNC_1() );
 }

 if( !VAR_12 || !VAR_12[0]) {
  VAR_16.sin_family = VAR_0;
  VAR_16.sin_addr.s_addr = VAR_2;
 }
 else
 {
  if(!FUNC_2( VAR_12, (struct sockaddr *)&VAR_16, sizeof(VAR_16), VAR_0))
  {
   FUNC_4(VAR_15);
   return VAR_3;
  }
 }

 if( VAR_13 == VAR_6 ) {
  VAR_16.sin_port = 0;
 }
 else {
  VAR_16.sin_port = FUNC_5( (short)VAR_13 );
 }

 if( FUNC_3( VAR_15, (void *)&VAR_16, sizeof(VAR_16) ) == VAR_7 ) {
  FUNC_0( "WARNING: NET_IPSocket: bind: %s\n", FUNC_1() );
  *VAR_14 = VAR_11;
  FUNC_4( VAR_15 );
  return VAR_3;
 }

 return VAR_15;
}
