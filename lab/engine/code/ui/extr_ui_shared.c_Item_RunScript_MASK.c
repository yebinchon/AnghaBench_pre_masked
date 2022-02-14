
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int script ;
typedef int qboolean ;
typedef int itemDef_t ;
struct TYPE_4__ {int (* runScript ) (char**) ;} ;
struct TYPE_3__ {int (* handler ) (int *,char**) ;int name; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*,int,char const*) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (char**,char const**) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (char*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,char**) ;
 int FUNC_5 (char**) ;

void FUNC_6(itemDef_t *VAR_5, const char *VAR_6) {
  char VAR_7[1024], *VAR_8;
  int VAR_9;
  qboolean VAR_10;
  FUNC_3(VAR_7, 0, sizeof(VAR_7));
  if (VAR_5 && VAR_6 && VAR_6[0]) {
    FUNC_0(VAR_7, 1024, VAR_6);
    VAR_8 = VAR_7;
    while (1) {
      const char *VAR_11;

      if (!FUNC_2(&VAR_8, &VAR_11)) {
        return;
      }

      if (VAR_11[0] == ';' && VAR_11[1] == '\0') {
        continue;
      }

      VAR_10 = VAR_2;
      for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
        if (FUNC_1(VAR_11, VAR_1[VAR_9].name) == 0) {
          (VAR_1[VAR_9].handler(VAR_5, &VAR_8));
          VAR_10 = VAR_3;
          break;
        }
      }

      if (!VAR_10) {
        VAR_0->runScript(&VAR_8);
      }
    }
  }
}
