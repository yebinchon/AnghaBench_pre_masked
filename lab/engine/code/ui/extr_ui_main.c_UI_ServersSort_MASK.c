
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {int sortKey; int currentServer; int numDisplayServers; int * displayServers; } ;
struct TYPE_4__ {TYPE_1__ serverStatus; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int,int ) ;
 TYPE_2__ VAR_2 ;

void FUNC_2(int VAR_3, qboolean VAR_4) {

 if ( !VAR_4 ) {
  if ( VAR_2.serverStatus.sortKey == VAR_3 ) {
   return;
  }
 }

 VAR_2.serverStatus.sortKey = VAR_3;
 FUNC_1( &VAR_2.serverStatus.displayServers[0], VAR_2.serverStatus.numDisplayServers, sizeof(int), VAR_1);


 FUNC_0( VAR_0, VAR_2.serverStatus.currentServer );
}
