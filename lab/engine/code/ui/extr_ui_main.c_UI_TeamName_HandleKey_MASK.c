
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_4__ {int teamCount; TYPE_1__* teamList; } ;
struct TYPE_3__ {int teamName; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,int ) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static qboolean FUNC_4(int VAR_3, float *VAR_4, int VAR_5, qboolean VAR_6) {
 int VAR_7 = FUNC_1(VAR_5);
 if (VAR_7 != 0) {
  int VAR_8;

  VAR_8 = FUNC_2(FUNC_0((VAR_6) ? "ui_blueTeam" : "ui_redTeam"));
  VAR_8 += VAR_7;

  if (VAR_8 >= VAR_2.teamCount) {
   VAR_8 = 0;
  } else if (VAR_8 < 0) {
   VAR_8 = VAR_2.teamCount - 1;
  }

  FUNC_3( (VAR_6) ? "ui_blueTeam" : "ui_redTeam", VAR_2.teamList[VAR_8].teamName);
  return VAR_1;
 }
 return VAR_0;
}
