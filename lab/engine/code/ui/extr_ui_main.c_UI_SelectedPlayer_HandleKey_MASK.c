
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {int myTeamCount; char** teamNames; int teamLeader; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static qboolean FUNC_5(int VAR_2, float *VAR_3, int VAR_4) {
 int VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 != 0) {
  int VAR_6;

  FUNC_0();
  if (!VAR_1.teamLeader) {
   return VAR_0;
  }
  VAR_6 = FUNC_4("cg_selectedPlayer");

  VAR_6 += VAR_5;

  if (VAR_6 > VAR_1.myTeamCount) {
   VAR_6 = 0;
  } else if (VAR_6 < 0) {
   VAR_6 = VAR_1.myTeamCount;
  }

  if (VAR_6 == VAR_1.myTeamCount) {
   FUNC_2( "cg_selectedPlayerName", "Everyone");
  } else {
   FUNC_2( "cg_selectedPlayerName", VAR_1.teamNames[VAR_6]);
  }
  FUNC_3( "cg_selectedPlayer", VAR_6);
 }
 return VAR_0;
}
