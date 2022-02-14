
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numDisplayServers; int* displayServers; int currentServer; } ;
struct TYPE_4__ {TYPE_1__ serverStatus; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_1(int VAR_2, int VAR_3) {
 int VAR_4;

 if (VAR_3 < 0 || VAR_3 > VAR_1.serverStatus.numDisplayServers ) {
  return;
 }

 VAR_1.serverStatus.numDisplayServers++;
 for (VAR_4 = VAR_1.serverStatus.numDisplayServers; VAR_4 > VAR_3; VAR_4--) {
  VAR_1.serverStatus.displayServers[VAR_4] = VAR_1.serverStatus.displayServers[VAR_4-1];
 }
 VAR_1.serverStatus.displayServers[VAR_3] = VAR_2;


 if ( VAR_3 == VAR_1.serverStatus.currentServer ) {
  FUNC_0( VAR_0, VAR_1.serverStatus.currentServer );
 }
}
