
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* hostName; char* mapName; int ping; char* game; scalar_t__ g_needpass; scalar_t__ g_humanplayers; scalar_t__ punkbuster; scalar_t__ netType; scalar_t__ gameType; scalar_t__ minPing; scalar_t__ maxPing; scalar_t__ maxClients; scalar_t__ clients; int adr; } ;
typedef TYPE_1__ serverInfo_t ;
typedef int netadr_t ;



void FUNC_0( serverInfo_t *VAR_0, netadr_t *VAR_1 ) {
 VAR_0->adr = *VAR_1;
 VAR_0->clients = 0;
 VAR_0->hostName[0] = '\0';
 VAR_0->mapName[0] = '\0';
 VAR_0->maxClients = 0;
 VAR_0->maxPing = 0;
 VAR_0->minPing = 0;
 VAR_0->ping = -1;
 VAR_0->game[0] = '\0';
 VAR_0->gameType = 0;
 VAR_0->netType = 0;
 VAR_0->punkbuster = 0;
 VAR_0->g_humanplayers = 0;
 VAR_0->g_needpass = 0;
}
