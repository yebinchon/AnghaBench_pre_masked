
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int numLines; char*** lines; } ;
typedef TYPE_4__ serverStatusInfo_t ;
typedef int qboolean ;
typedef int name ;
typedef int infoString ;
struct TYPE_15__ {size_t num; TYPE_1__* server; } ;
struct TYPE_10__ {int realTime; } ;
struct TYPE_11__ {size_t numDisplayServers; int * displayServers; } ;
struct TYPE_14__ {int nextFindPlayerRefresh; int numFoundPlayerServers; char* findPlayerName; char** foundPlayerServerNames; char** foundPlayerServerAddresses; scalar_t__ currentFoundPlayerServer; TYPE_2__ uiDC; TYPE_7__ pendingServerStatus; TYPE_3__ serverStatus; } ;
struct TYPE_13__ {int integer; } ;
struct TYPE_9__ {char* adrstr; char* name; int startTime; void* valid; } ;


 int FUNC_0 (char*,int,char*,...) ;
 int VAR_0 ;
 char* FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (char*,TYPE_4__*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_7__*,int ,int) ;
 void* VAR_5 ;
 void* VAR_6 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (int,int ,char*,int) ;
 int FUNC_13 (int,int ,char*,int) ;
 int FUNC_14 (int *,int *,int ) ;
 TYPE_6__ VAR_7 ;
 TYPE_5__ VAR_8 ;
 int FUNC_15 (char*,int) ;

__attribute__((used)) static void FUNC_16(qboolean VAR_9) {
 static int VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;
 serverStatusInfo_t VAR_15;
 char VAR_16[VAR_2+2];
 char VAR_17[VAR_4];
 int VAR_18;

 if (!VAR_9) {
  if (!VAR_7.nextFindPlayerRefresh || VAR_7.nextFindPlayerRefresh > VAR_7.uiDC.realTime) {
   return;
  }
 }
 else {
  FUNC_7(&VAR_7.pendingServerStatus, 0, sizeof(VAR_7.pendingServerStatus));
  VAR_7.numFoundPlayerServers = 0;
  VAR_7.currentFoundPlayerServer = 0;
  FUNC_11( "ui_findPlayer", VAR_7.findPlayerName, sizeof(VAR_7.findPlayerName));
  FUNC_2(VAR_7.findPlayerName);

  if (!FUNC_9(VAR_7.findPlayerName)) {
   VAR_7.nextFindPlayerRefresh = 0;
   return;
  }

  VAR_14 = VAR_8.integer / 2 - 10;
  if (VAR_14 < 50) {
   VAR_14 = 50;
  }
  FUNC_10("cl_serverStatusResendTime", FUNC_15("%d", VAR_14));

  FUNC_14( ((void*)0), ((void*)0), 0);

  VAR_7.numFoundPlayerServers = 1;
  FUNC_0(VAR_7.foundPlayerServerNames[VAR_7.numFoundPlayerServers-1],
      sizeof(VAR_7.foundPlayerServerNames[VAR_7.numFoundPlayerServers-1]),
       "searching %d...", VAR_7.pendingServerStatus.num);
  VAR_10 = 0;
  VAR_11++;
 }
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {

  if (VAR_7.pendingServerStatus.server[VAR_12].valid) {

   if (FUNC_5( VAR_7.pendingServerStatus.server[VAR_12].adrstr, &VAR_15 ) ) {

    VAR_10++;

    for (VAR_13 = 0; VAR_13 < VAR_15.numLines; VAR_13++) {

     if ( !VAR_15.lines[VAR_13][2] || !VAR_15.lines[VAR_13][2][0] ) {
      continue;
     }

     FUNC_3(VAR_16, VAR_15.lines[VAR_13][3], sizeof(VAR_16));
     FUNC_2(VAR_16);

     if (FUNC_8(VAR_16, VAR_7.findPlayerName)) {

      if (VAR_7.numFoundPlayerServers < VAR_1-1) {

       FUNC_3(VAR_7.foundPlayerServerAddresses[VAR_7.numFoundPlayerServers-1],
          VAR_7.pendingServerStatus.server[VAR_12].adrstr,
           sizeof(VAR_7.foundPlayerServerAddresses[0]));
       FUNC_3(VAR_7.foundPlayerServerNames[VAR_7.numFoundPlayerServers-1],
          VAR_7.pendingServerStatus.server[VAR_12].name,
           sizeof(VAR_7.foundPlayerServerNames[0]));
       VAR_7.numFoundPlayerServers++;
      }
      else {

       VAR_7.pendingServerStatus.num = VAR_7.serverStatus.numDisplayServers;
      }
     }
    }
    FUNC_0(VAR_7.foundPlayerServerNames[VAR_7.numFoundPlayerServers-1],
        sizeof(VAR_7.foundPlayerServerNames[VAR_7.numFoundPlayerServers-1]),
         "searching %d/%d...", VAR_7.pendingServerStatus.num, VAR_10);

    VAR_7.pendingServerStatus.server[VAR_12].valid = VAR_5;
   }
  }

  if (!VAR_7.pendingServerStatus.server[VAR_12].valid ||
   VAR_7.pendingServerStatus.server[VAR_12].startTime < VAR_7.uiDC.realTime - VAR_8.integer) {
   if (VAR_7.pendingServerStatus.server[VAR_12].valid) {
    VAR_11++;
   }

   FUNC_5( VAR_7.pendingServerStatus.server[VAR_12].adrstr, ((void*)0) );

   VAR_7.pendingServerStatus.server[VAR_12].valid = VAR_5;

   if (VAR_7.pendingServerStatus.num < VAR_7.serverStatus.numDisplayServers) {
    VAR_7.pendingServerStatus.server[VAR_12].startTime = VAR_7.uiDC.realTime;
    VAR_18 = FUNC_6();
    FUNC_12(VAR_18, VAR_7.serverStatus.displayServers[VAR_7.pendingServerStatus.num],
       VAR_7.pendingServerStatus.server[VAR_12].adrstr, sizeof(VAR_7.pendingServerStatus.server[VAR_12].adrstr));
    FUNC_13(VAR_18, VAR_7.serverStatus.displayServers[VAR_7.pendingServerStatus.num], VAR_17, sizeof(VAR_17));
    FUNC_3(VAR_7.pendingServerStatus.server[VAR_12].name, FUNC_1(VAR_17, "hostname"), sizeof(VAR_7.pendingServerStatus.server[0].name));
    VAR_7.pendingServerStatus.server[VAR_12].valid = VAR_6;
    VAR_7.pendingServerStatus.num++;
    FUNC_0(VAR_7.foundPlayerServerNames[VAR_7.numFoundPlayerServers-1],
        sizeof(VAR_7.foundPlayerServerNames[VAR_7.numFoundPlayerServers-1]),
         "searching %d/%d...", VAR_7.pendingServerStatus.num, VAR_10);
   }
  }
 }
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  if (VAR_7.pendingServerStatus.server[VAR_12].valid) {
   break;
  }
 }

 if (VAR_12 < VAR_3) {
  VAR_7.nextFindPlayerRefresh = VAR_7.uiDC.realTime + 25;
 }
 else {

  if (!VAR_7.numFoundPlayerServers) {
   FUNC_0(VAR_7.foundPlayerServerNames[0], sizeof(VAR_7.foundPlayerServerNames[0]), "no servers found");
  }
  else {
   FUNC_0(VAR_7.foundPlayerServerNames[VAR_7.numFoundPlayerServers-1], sizeof(VAR_7.foundPlayerServerNames[0]),
      "%d server%s found with player %s", VAR_7.numFoundPlayerServers-1,
      VAR_7.numFoundPlayerServers == 2 ? "":"s", VAR_7.findPlayerName);
  }
  VAR_7.nextFindPlayerRefresh = 0;

  FUNC_4(VAR_0, VAR_7.currentFoundPlayerServer);
 }
}
