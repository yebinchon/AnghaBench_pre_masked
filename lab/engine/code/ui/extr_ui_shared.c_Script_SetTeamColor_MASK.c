
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * vec4_t ;
struct TYPE_5__ {int * backColor; } ;
struct TYPE_6__ {TYPE_1__ window; } ;
typedef TYPE_2__ itemDef_t ;
struct TYPE_7__ {int (* getTeamColor ) (int **) ;} ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (int **) ;

void FUNC_1(itemDef_t *VAR_1, char **VAR_2) {
  if (VAR_0->getTeamColor) {
    int VAR_3;
    vec4_t VAR_4;
    VAR_0->getTeamColor(&VAR_4);
    for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
      VAR_1->window.backColor[VAR_3] = VAR_4[VAR_3];
    }
  }
}
