
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numDisplayServers; int numPlayersOnServers; scalar_t__ refreshActive; } ;
struct TYPE_4__ {TYPE_1__ serverStatus; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_4( void )
{
 int VAR_2;

 if (!VAR_1.serverStatus.refreshActive) {

  return;
 }
 VAR_1.serverStatus.refreshActive = VAR_0;
 FUNC_0("%d servers listed in browser with %d players.\n",
     VAR_1.serverStatus.numDisplayServers,
     VAR_1.serverStatus.numPlayersOnServers);
 VAR_2 = FUNC_3(FUNC_1());
 if (VAR_2 - VAR_1.serverStatus.numDisplayServers > 0) {
  FUNC_0("%d servers not listed due to packet loss or pings higher than %d\n",
      VAR_2 - VAR_1.serverStatus.numDisplayServers,
      (int) FUNC_2("cl_maxPing"));
 }

}
