
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ window; } ;
typedef TYPE_2__ menuDef_t ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

menuDef_t *FUNC_0(void) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    if (VAR_0[VAR_4].window.flags & VAR_1 && VAR_0[VAR_4].window.flags & VAR_2) {
      return &VAR_0[VAR_4];
    }
  }
  return ((void*)0);
}
