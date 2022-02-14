
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ window; } ;
typedef TYPE_2__ itemDef_t ;


 int VAR_0 ;

void FUNC_0(itemDef_t *VAR_1, qboolean VAR_2) {
  if (VAR_1) {
    if (VAR_2) {
      VAR_1->window.flags |= VAR_0;
    } else {
      VAR_1->window.flags &= ~VAR_0;
    }
  }
}
