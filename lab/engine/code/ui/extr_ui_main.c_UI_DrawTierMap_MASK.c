
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int h; int w; int y; int x; } ;
typedef TYPE_2__ rectDef_t ;
struct TYPE_7__ {int tierCount; TYPE_1__* tierList; } ;
struct TYPE_5__ {int* mapHandles; int * maps; } ;


 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 TYPE_3__ VAR_0 ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(rectDef_t *VAR_1, int VAR_2) {
  int VAR_3;
 VAR_3 = FUNC_1( "ui_currentTier" );
  if (VAR_3 < 0 || VAR_3 >= VAR_0.tierCount) {
    VAR_3 = 0;
  }

 if (VAR_0.tierList[VAR_3].mapHandles[VAR_2] == -1) {
  VAR_0.tierList[VAR_3].mapHandles[VAR_2] = FUNC_2(FUNC_3("levelshots/%s", VAR_0.tierList[VAR_3].maps[VAR_2]));
 }

 FUNC_0( VAR_1->x, VAR_1->y, VAR_1->w, VAR_1->h, VAR_0.tierList[VAR_3].mapHandles[VAR_2]);
}
