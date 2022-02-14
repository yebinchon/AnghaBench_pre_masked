
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * vec4_t ;
struct TYPE_5__ {int * borderColor; int flags; int * foreColor; int * backColor; } ;
struct TYPE_6__ {TYPE_1__ window; int parent; } ;
typedef TYPE_2__ itemDef_t ;


 int FUNC_0 (char**,int **) ;
 TYPE_2__* FUNC_1 (int ,int,char const*) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char**,char const**) ;
 int VAR_0 ;

void FUNC_5(itemDef_t *VAR_1, char **VAR_2) {
  const char *VAR_3;
  const char *VAR_4;
  vec4_t VAR_5;
  int VAR_6;
  vec4_t *VAR_7;

  if (FUNC_4(VAR_2, &VAR_3) && FUNC_4(VAR_2, &VAR_4)) {
    itemDef_t *VAR_8;
    int VAR_9;
    int VAR_10 = FUNC_2(VAR_1->parent, VAR_3);

    if (!FUNC_0(VAR_2, &VAR_5)) {
      return;
    }

    for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
      VAR_8 = FUNC_1(VAR_1->parent, VAR_9, VAR_3);
      if (VAR_8 != ((void*)0)) {
        VAR_7 = ((void*)0);
        if (FUNC_3(VAR_4, "backcolor") == 0) {
          VAR_7 = &VAR_8->window.backColor;
        } else if (FUNC_3(VAR_4, "forecolor") == 0) {
          VAR_7 = &VAR_8->window.foreColor;
          VAR_8->window.flags |= VAR_0;
        } else if (FUNC_3(VAR_4, "bordercolor") == 0) {
          VAR_7 = &VAR_8->window.borderColor;
        }

        if (VAR_7) {
          for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
            (*VAR_7)[VAR_6] = VAR_5[VAR_6];
          }
        }
      }
    }
  }
}
