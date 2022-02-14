
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_8__ {scalar_t__ numLines; } ;
struct TYPE_6__ {scalar_t__ realTime; } ;
struct TYPE_5__ {scalar_t__ currentServer; scalar_t__ numDisplayServers; } ;
struct TYPE_7__ {scalar_t__ nextServerStatusRefresh; TYPE_2__ uiDC; int serverStatusAddress; TYPE_4__ serverStatusInfo; TYPE_1__ serverStatus; scalar_t__ nextFindPlayerRefresh; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int *,int *,int ) ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void FUNC_3(qboolean VAR_2) {

 if (VAR_1.nextFindPlayerRefresh) {
  return;
 }
 if (!VAR_2) {
  if (!VAR_1.nextServerStatusRefresh || VAR_1.nextServerStatusRefresh > VAR_1.uiDC.realTime) {
   return;
  }
 }
 else {
  FUNC_0(((void*)0), VAR_0, 0, ((void*)0));
  VAR_1.serverStatusInfo.numLines = 0;

  FUNC_2( ((void*)0), ((void*)0), 0);
 }
 if (VAR_1.serverStatus.currentServer < 0 || VAR_1.serverStatus.currentServer > VAR_1.serverStatus.numDisplayServers || VAR_1.serverStatus.numDisplayServers == 0) {
  return;
 }
 if (FUNC_1( VAR_1.serverStatusAddress, &VAR_1.serverStatusInfo ) ) {
  VAR_1.nextServerStatusRefresh = 0;
  FUNC_1( VAR_1.serverStatusAddress, ((void*)0) );
 }
 else {
  VAR_1.nextServerStatusRefresh = VAR_1.uiDC.realTime + 500;
 }
}
