
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {short sin_port; int sin_zero; TYPE_1__ sin_addr; scalar_t__ sin_family; } ;
struct sockaddr {int dummy; } ;
struct hostent {scalar_t__ h_addrtype; scalar_t__* h_addr_list; } ;
typedef void* qboolean ;
typedef int address ;
struct TYPE_10__ {scalar_t__* string; } ;
struct TYPE_9__ {scalar_t__ integer; } ;
struct TYPE_8__ {int string; } ;
struct TYPE_7__ {scalar_t__* string; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,struct sockaddr*,int) ;
 struct hostent* FUNC_3 (int ) ;
 void* FUNC_4 (short) ;
 int FUNC_5 (unsigned char*,scalar_t__*,int) ;
 int FUNC_6 (int ,int ,int) ;
 TYPE_5__* VAR_6 ;
 TYPE_4__* VAR_7 ;
 TYPE_3__* VAR_8 ;
 TYPE_2__* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_7 (int ,void*,int,int ) ;
 int FUNC_8 (int ,void*,int,int ) ;
 int FUNC_9 (scalar_t__,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (scalar_t__*) ;
 void* VAR_14 ;

void FUNC_11( int VAR_15 ) {
 struct sockaddr_in VAR_16;
 struct hostent *VAR_17;
 int VAR_18;
 qboolean VAR_19;
 unsigned char VAR_20[64];

 VAR_14 = VAR_10;

 FUNC_0( "Opening connection to SOCKS server.\n" );

 if ( ( VAR_13 = FUNC_9( VAR_0, VAR_5, VAR_3 ) ) == VAR_2 ) {
  FUNC_0( "WARNING: NET_OpenSocks: socket: %s\n", FUNC_1() );
  return;
 }

 VAR_17 = FUNC_3( VAR_8->string );
 if ( VAR_17 == ((void*)0) ) {
  FUNC_0( "WARNING: NET_OpenSocks: gethostbyname: %s\n", FUNC_1() );
  return;
 }
 if ( VAR_17->h_addrtype != VAR_0 ) {
  FUNC_0( "WARNING: NET_OpenSocks: gethostbyname: address type was not AF_INET\n" );
  return;
 }
 VAR_16.sin_family = VAR_0;
 VAR_16.sin_addr.s_addr = *(int *)VAR_17->h_addr_list[0];
 VAR_16.sin_port = FUNC_4( (short)VAR_7->integer );

 if ( FUNC_2( VAR_13, (struct sockaddr *)&VAR_16, sizeof( VAR_16 ) ) == VAR_4 ) {
  FUNC_0( "NET_OpenSocks: connect: %s\n", FUNC_1() );
  return;
 }


 if ( *VAR_9->string || *VAR_6->string ) {
  VAR_19 = VAR_11;
 }
 else {
  VAR_19 = VAR_10;
 }

 VAR_20[0] = 5;

 if ( VAR_19 ) {
  VAR_20[1] = 2;
  VAR_18 = 4;
 }
 else {
  VAR_20[1] = 1;
  VAR_18 = 3;
 }
 VAR_20[2] = 0;
 if ( VAR_19 ) {
  VAR_20[2] = 2;
 }
 if ( FUNC_8( VAR_13, (void *)VAR_20, VAR_18, 0 ) == VAR_4 ) {
  FUNC_0( "NET_OpenSocks: send: %s\n", FUNC_1() );
  return;
 }


 VAR_18 = FUNC_7( VAR_13, (void *)VAR_20, 64, 0 );
 if ( VAR_18 == VAR_4 ) {
  FUNC_0( "NET_OpenSocks: recv: %s\n", FUNC_1() );
  return;
 }
 if ( VAR_18 != 2 || VAR_20[0] != 5 ) {
  FUNC_0( "NET_OpenSocks: bad response\n" );
  return;
 }
 switch( VAR_20[1] ) {
 case 0:
  break;
 case 2:
  break;
 default:
  FUNC_0( "NET_OpenSocks: request denied\n" );
  return;
 }


 if ( VAR_20[1] == 2 ) {
  int VAR_21;
  int VAR_22;


  VAR_21 = FUNC_10( VAR_9->string );
  VAR_22 = FUNC_10( VAR_6->string );

  VAR_20[0] = 1;
  VAR_20[1] = VAR_21;
  if ( VAR_21 ) {
   FUNC_5( &VAR_20[2], VAR_9->string, VAR_21 );
  }
  VAR_20[2 + VAR_21] = VAR_22;
  if ( VAR_22 ) {
   FUNC_5( &VAR_20[3 + VAR_21], VAR_6->string, VAR_22 );
  }


  if ( FUNC_8( VAR_13, (void *)VAR_20, 3 + VAR_21 + VAR_22, 0 ) == VAR_4 ) {
   FUNC_0( "NET_OpenSocks: send: %s\n", FUNC_1() );
   return;
  }


  VAR_18 = FUNC_7( VAR_13, (void *)VAR_20, 64, 0 );
  if ( VAR_18 == VAR_4 ) {
   FUNC_0( "NET_OpenSocks: recv: %s\n", FUNC_1() );
   return;
  }
  if ( VAR_18 != 2 || VAR_20[0] != 1 ) {
   FUNC_0( "NET_OpenSocks: bad response\n" );
   return;
  }
  if ( VAR_20[1] != 0 ) {
   FUNC_0( "NET_OpenSocks: authentication failed\n" );
   return;
  }
 }


 VAR_20[0] = 5;
 VAR_20[1] = 3;
 VAR_20[2] = 0;
 VAR_20[3] = 1;
 *(int *)&VAR_20[4] = VAR_1;
 *(short *)&VAR_20[8] = FUNC_4( (short)VAR_15 );
 if ( FUNC_8( VAR_13, (void *)VAR_20, 10, 0 ) == VAR_4 ) {
  FUNC_0( "NET_OpenSocks: send: %s\n", FUNC_1() );
  return;
 }


 VAR_18 = FUNC_7( VAR_13, (void *)VAR_20, 64, 0 );
 if( VAR_18 == VAR_4 ) {
  FUNC_0( "NET_OpenSocks: recv: %s\n", FUNC_1() );
  return;
 }
 if( VAR_18 < 2 || VAR_20[0] != 5 ) {
  FUNC_0( "NET_OpenSocks: bad response\n" );
  return;
 }

 if( VAR_20[1] != 0 ) {
  FUNC_0( "NET_OpenSocks: request denied: %i\n", VAR_20[1] );
  return;
 }
 if( VAR_20[3] != 1 ) {
  FUNC_0( "NET_OpenSocks: relay address is not IPV4: %i\n", VAR_20[3] );
  return;
 }
 ((struct sockaddr_in *)&VAR_12)->sin_family = VAR_0;
 ((struct sockaddr_in *)&VAR_12)->sin_addr.s_addr = *(int *)&VAR_20[4];
 ((struct sockaddr_in *)&VAR_12)->sin_port = *(short *)&VAR_20[8];
 FUNC_6( ((struct sockaddr_in *)&VAR_12)->sin_zero, 0, 8 );

 VAR_14 = VAR_11;
}
