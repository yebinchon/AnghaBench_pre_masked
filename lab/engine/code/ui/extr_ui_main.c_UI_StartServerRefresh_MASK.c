
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {size_t tm_mon; int tm_min; int tm_hour; scalar_t__ tm_year; int tm_mday; } ;
typedef TYPE_3__ qtime_t ;
typedef int qboolean ;
struct TYPE_8__ {scalar_t__ realTime; } ;
struct TYPE_7__ {scalar_t__ refreshtime; scalar_t__ numPlayersOnServers; scalar_t__ numDisplayServers; scalar_t__ nextDisplayRefresh; int refreshActive; } ;
struct TYPE_11__ {TYPE_2__ uiDC; TYPE_1__ serverStatus; } ;
struct TYPE_10__ {scalar_t__ integer; } ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int,int,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_3__*) ;
 TYPE_5__ VAR_6 ;
 TYPE_4__ VAR_7 ;
 char* FUNC_11 (char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_12(qboolean VAR_8, qboolean VAR_9)
{
 char *VAR_10;
 int VAR_11;
 qtime_t VAR_12;




 if ( !VAR_9 && ( VAR_7.integer >= VAR_2 && VAR_7.integer <= VAR_3 ) ) {
  if ( FUNC_7( FUNC_1() ) > 0 ) {
   return;
  }
 }

 FUNC_10(&VAR_12);
 FUNC_5( FUNC_11("ui_lastServerRefresh_%i", VAR_7.integer), FUNC_11("%s-%i, %i at %i:%02i", VAR_1[VAR_12.tm_mon],VAR_12.tm_mday, 1900+VAR_12.tm_year,VAR_12.tm_hour,VAR_12.tm_min));

 if (!VAR_8) {
  FUNC_2();
  return;
 }

 VAR_6.serverStatus.refreshActive = VAR_5;
 VAR_6.serverStatus.nextDisplayRefresh = VAR_6.uiDC.realTime + 1000;

 VAR_6.serverStatus.numDisplayServers = 0;
 VAR_6.serverStatus.numPlayersOnServers = 0;

 VAR_11 = FUNC_1();

 FUNC_8(VAR_11, -1, VAR_5);

 FUNC_9(VAR_11);

 if( VAR_7.integer == VAR_4 ) {
  FUNC_4( VAR_0, "localservers\n" );
  VAR_6.serverStatus.refreshtime = VAR_6.uiDC.realTime + 5000;
  return;
 }

 VAR_6.serverStatus.refreshtime = VAR_6.uiDC.realTime + 5000;
 if( VAR_7.integer >= VAR_2 && VAR_7.integer <= VAR_3 ) {

  VAR_10 = FUNC_0("debug_protocol");
  if (FUNC_3(VAR_10)) {
   FUNC_4( VAR_0, FUNC_11( "globalservers %d %s full empty\n", VAR_7.integer - VAR_2, VAR_10 ) );
  }
  else {
   FUNC_4( VAR_0, FUNC_11( "globalservers %d %d full empty\n", VAR_7.integer - VAR_2, (int)FUNC_6( "protocol" ) ) );
  }
 }
}
