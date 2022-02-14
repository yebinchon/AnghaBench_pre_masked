
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int cursorItem; int window; int fadeCycle; int fadeClamp; int fadeAmount; } ;
typedef TYPE_2__ menuDef_t ;
struct TYPE_6__ {int fadeCycle; int fadeClamp; int fadeAmount; } ;
struct TYPE_8__ {TYPE_1__ Assets; } ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

void FUNC_2(menuDef_t *VAR_1) {
 FUNC_1(VAR_1, 0, sizeof(menuDef_t));
 VAR_1->cursorItem = -1;
 VAR_1->fadeAmount = VAR_0->Assets.fadeAmount;
 VAR_1->fadeClamp = VAR_0->Assets.fadeClamp;
 VAR_1->fadeCycle = VAR_0->Assets.fadeCycle;
 FUNC_0(&VAR_1->window);
}
