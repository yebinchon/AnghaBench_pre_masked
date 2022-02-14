
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int table_t ;
typedef int protocol ;
struct TYPE_6__ {int curvalue; } ;
struct TYPE_8__ {int maxservers; TYPE_2__ gametype; scalar_t__ refreshtime; scalar_t__ numqueriedservers; scalar_t__* numservers; scalar_t__ nextpingtime; scalar_t__ currentping; int refreshservers; TYPE_1__* pinglist; int serverlist; } ;
struct TYPE_7__ {scalar_t__ realtime; } ;
struct TYPE_5__ {char* adrstr; } ;


 int FUNC_0 () ;
 int VAR_0 ;





 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_9 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,char*,int) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 TYPE_3__ VAR_10 ;
 char* FUNC_9 (char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_10( void )
{
 int VAR_11;
 char VAR_12[32], VAR_13[32];

 FUNC_1( VAR_5.serverlist, 0, VAR_5.maxservers*sizeof(table_t) );

 for (VAR_11=0; VAR_11<VAR_1; VAR_11++)
 {
  VAR_5.pinglist[VAR_11].adrstr[0] = '\0';
  FUNC_8( VAR_11 );
 }

 VAR_5.refreshservers = VAR_9;
 VAR_5.currentping = 0;
 VAR_5.nextpingtime = 0;
 *VAR_5.numservers = 0;
 VAR_5.numqueriedservers = 0;


 VAR_5.refreshtime = VAR_10.realtime + 5000;


 FUNC_0();

 if( VAR_8 == VAR_4 ) {
  FUNC_5( VAR_0, "localservers\n" );
  return;
 }

 if( VAR_8 >= VAR_2 && VAR_8 <= VAR_3 ) {
  switch( VAR_5.gametype.curvalue ) {
  default:
  case 132:
   VAR_12[0] = 0;
   break;

  case 130:
   FUNC_3( VAR_12, " ffa" );
   break;

  case 129:
   FUNC_3( VAR_12, " team" );
   break;

  case 128:
   FUNC_3( VAR_12, " tourney" );
   break;

  case 131:
   FUNC_3( VAR_12, " ctf" );
   break;
  }


  if (VAR_6) {
   FUNC_2(VAR_12, " empty");
  }

  if (VAR_7) {
   FUNC_2(VAR_12, " full");
  }

  VAR_13[0] = '\0';
  FUNC_6( "debug_protocol", VAR_13, sizeof(VAR_13) );
  if (FUNC_4(VAR_13)) {
   FUNC_5( VAR_0, FUNC_9( "globalservers %d %s%s\n", VAR_8 - VAR_2, VAR_13, VAR_12 ));
  }
  else {
   FUNC_5( VAR_0, FUNC_9( "globalservers %d %d%s\n", VAR_8 - VAR_2, (int)FUNC_7( "protocol" ), VAR_12 ) );
  }
 }
}
