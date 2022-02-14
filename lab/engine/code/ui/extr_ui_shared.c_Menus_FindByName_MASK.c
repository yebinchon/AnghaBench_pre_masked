
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct TYPE_6__ {TYPE_1__ window; } ;
typedef TYPE_2__ menuDef_t ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*) ;
 int VAR_1 ;

menuDef_t *FUNC_1(const char *VAR_2) {
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
    if (FUNC_0(VAR_0[VAR_3].window.name, VAR_2) == 0) {
      return &VAR_0[VAR_3];
    }
  }
  return ((void*)0);
}
