
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int remaining ;
typedef int qboolean ;
typedef int netadr_t ;
typedef int msg_t ;
typedef int leakyBucket_t ;
struct TYPE_4__ {int string; } ;
struct TYPE_3__ {int redirectAddress; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char* FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int,char*) ;
 scalar_t__ FUNC_10 (int *,int,int) ;
 scalar_t__ FUNC_11 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void FUNC_14( netadr_t VAR_6, msg_t *VAR_7 ) {
 qboolean VAR_8;
 char VAR_9[1024];



 char VAR_10[(1024 - 16)];
 char *VAR_11;


 if ( FUNC_11( VAR_6, 10, 1000 ) ) {
  FUNC_5( "SVC_RemoteCommand: rate limit from %s exceeded, dropping request\n",
   FUNC_8( VAR_6 ) );
  return;
 }

 if ( !FUNC_13( VAR_4->string ) ||
  FUNC_12 (FUNC_1(1), VAR_4->string) ) {
  static leakyBucket_t VAR_12;


  if ( FUNC_10( &VAR_12, 10, 1000 ) ) {
   FUNC_5( "SVC_RemoteCommand: rate limit exceeded, dropping request\n" );
   return;
  }

  VAR_8 = VAR_2;
  FUNC_7 ("Bad rcon from %s: %s\n", FUNC_8 (VAR_6), FUNC_0(2) );
 } else {
  VAR_8 = VAR_3;
  FUNC_7 ("Rcon from %s: %s\n", FUNC_8 (VAR_6), FUNC_0(2) );
 }


 VAR_5.redirectAddress = VAR_6;
 FUNC_4 (VAR_10, (1024 - 16), VAR_0);

 if ( !FUNC_13( VAR_4->string ) ) {
  FUNC_7 ("No rconpassword set on the server.\n");
 } else if ( !VAR_8 ) {
  FUNC_7 ("Bad rconpassword.\n");
 } else {
  VAR_9[0] = 0;





  VAR_11 = FUNC_2();
  VAR_11+=4;
  while(VAR_11[0]==' ')
   VAR_11++;
  while(VAR_11[0] && VAR_11[0]!=' ')
   VAR_11++;
  while(VAR_11[0]==' ')
   VAR_11++;

  FUNC_9( VAR_9, sizeof(VAR_9), VAR_11);

  FUNC_3 (VAR_9);

 }

 FUNC_6 ();
}
