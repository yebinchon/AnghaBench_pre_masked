
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; int name; } ;
struct TYPE_9__ {TYPE_1__ window; } ;
typedef TYPE_2__ menuDef_t ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_1 () ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__** VAR_4 ;
 scalar_t__ VAR_5 ;

menuDef_t *FUNC_4(const char *VAR_6) {
  int VAR_7;
  menuDef_t *VAR_8 = ((void*)0);
 menuDef_t *VAR_9 = FUNC_1();
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
    if (FUNC_3(VAR_1[VAR_7].window.name, VAR_6) == 0) {
     VAR_8 = &VAR_1[VAR_7];
   FUNC_2(VAR_8);
   if (VAR_5 < VAR_0 && VAR_9 != ((void*)0)) {
    VAR_4[VAR_5++] = VAR_9;
   }
    } else {
      VAR_1[VAR_7].window.flags &= ~VAR_2;
    }
  }
 FUNC_0();
  return VAR_8;
}
