
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {int teamCount; TYPE_1__* teamList; } ;
struct TYPE_3__ {int cinematic; int teamName; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int ) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static qboolean FUNC_7(int VAR_5, float *VAR_6, int VAR_7) {
 int VAR_8 = FUNC_3(VAR_7);
 if (VAR_8 != 0) {
  int VAR_9;

  VAR_9 = FUNC_4(FUNC_0("ui_teamName"));

  if (VAR_3.teamList[VAR_9].cinematic >= 0) {
   FUNC_5(VAR_3.teamList[VAR_9].cinematic);
   VAR_3.teamList[VAR_9].cinematic = -1;
  }

  VAR_9 += VAR_8;

  if (VAR_9 >= VAR_3.teamCount) {
   VAR_9 = 0;
  } else if (VAR_9 < 0) {
   VAR_9 = VAR_3.teamCount - 1;
  }

  FUNC_6( "ui_teamName", VAR_3.teamList[VAR_9].teamName);
  FUNC_2();
  FUNC_1(VAR_0, 0);
  VAR_4 = VAR_2;
  return VAR_2;
 }
 return VAR_1;
}
