
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numDisplayServers; int * displayServers; int sortDir; int sortKey; } ;
struct TYPE_4__ {TYPE_1__ serverStatus; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int,int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_3(int VAR_1) {
 int VAR_2, VAR_3, VAR_4, VAR_5;


 VAR_5 = VAR_0.serverStatus.numDisplayServers;
 VAR_2 = VAR_5;
 VAR_3 = 0;
 VAR_4 = 0;
 while(VAR_2 > 0) {
  VAR_2 = VAR_5 >> 1;

  VAR_4 = FUNC_2( FUNC_1(), VAR_0.serverStatus.sortKey,
     VAR_0.serverStatus.sortDir, VAR_1, VAR_0.serverStatus.displayServers[VAR_3+VAR_2]);

  if (VAR_4 == 0) {
   FUNC_0(VAR_1, VAR_3+VAR_2);
   return;
  }

  else if (VAR_4 == 1) {
   VAR_3 += VAR_2;
   VAR_5 -= VAR_2;
  }

  else {
   VAR_5 -= VAR_2;
  }
 }
 if (VAR_4 == 1) {
  VAR_3++;
 }
 FUNC_0(VAR_1, VAR_3);
}
