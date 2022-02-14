
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ping; int adr; scalar_t__ visible; } ;
typedef TYPE_1__ serverInfo_t ;
typedef int qboolean ;
typedef int netadr_t ;
struct TYPE_9__ {int port; } ;
struct TYPE_11__ {TYPE_2__ adr; scalar_t__ time; int start; } ;
struct TYPE_10__ {int pingUpdateSource; int numlocalservers; int numglobalservers; int numfavoriteservers; size_t numGlobalServerAddresses; int * globalServerAddresses; TYPE_1__* favoriteServers; TYPE_1__* globalServers; TYPE_1__* localServers; } ;





 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int,int*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_2__,int ) ;
 int FUNC_5 (int ,TYPE_2__,char*) ;
 int VAR_2 ;
 int FUNC_6 () ;
 TYPE_4__* VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_7 (TYPE_2__*,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;

qboolean FUNC_8(int VAR_7) {
 int VAR_8, VAR_9;
 char VAR_10[VAR_1];
 int VAR_11;
 int VAR_12;
 qboolean VAR_13 = VAR_5;

 if (VAR_7 < 0 || VAR_7 > 130) {
  return VAR_5;
 }

 VAR_4.pingUpdateSource = VAR_7;

 VAR_8 = FUNC_2();
 if (VAR_8 < VAR_0) {
  serverInfo_t *VAR_14 = ((void*)0);

  switch (VAR_7) {
   case 128 :
    VAR_14 = &VAR_4.localServers[0];
    VAR_12 = VAR_4.numlocalservers;
   break;
   case 129 :
    VAR_14 = &VAR_4.globalServers[0];
    VAR_12 = VAR_4.numglobalservers;
   break;
   case 130 :
    VAR_14 = &VAR_4.favoriteServers[0];
    VAR_12 = VAR_4.numfavoriteservers;
   break;
   default:
    return VAR_5;
  }
  for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
   if (VAR_14[VAR_9].visible) {
    if (VAR_14[VAR_9].ping == -1) {
     int VAR_15;

     if (VAR_8 >= VAR_0) {
      break;
     }
     for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
      if (!VAR_3[VAR_15].adr.port) {
       continue;
      }
      if (FUNC_4( VAR_3[VAR_15].adr, VAR_14[VAR_9].adr)) {

       break;
      }
     }
     if (VAR_15 >= VAR_0) {
      VAR_13 = VAR_6;
      for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
       if (!VAR_3[VAR_15].adr.port) {
        break;
       }
      }
      FUNC_7(&VAR_3[VAR_15].adr, &VAR_14[VAR_9].adr, sizeof(netadr_t));
      VAR_3[VAR_15].start = FUNC_6();
      VAR_3[VAR_15].time = 0;
      FUNC_5( VAR_2, VAR_3[VAR_15].adr, "getinfo xxx" );
      VAR_8++;
     }
    }


    else if (VAR_14[VAR_9].ping == 0) {

     if (VAR_7 == 129) {

      if ( VAR_4.numGlobalServerAddresses > 0 ) {

       VAR_4.numGlobalServerAddresses--;
       FUNC_3(&VAR_14[VAR_9], &VAR_4.globalServerAddresses[VAR_4.numGlobalServerAddresses]);

      }
     }
    }
   }
  }
 }

 if (VAR_8) {
  VAR_13 = VAR_6;
 }
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if (!VAR_3[VAR_9].adr.port) {
   continue;
  }
  FUNC_1( VAR_9, VAR_10, VAR_1, &VAR_11 );
  if (VAR_11 != 0) {
   FUNC_0(VAR_9);
   VAR_13 = VAR_6;
  }
 }

 return VAR_13;
}
