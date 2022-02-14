
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int background; } ;
struct TYPE_6__ {TYPE_1__ window; } ;
typedef TYPE_2__ itemDef_t ;
struct TYPE_7__ {int (* registerShaderNoMip ) (char const*) ;} ;


 TYPE_4__* VAR_0 ;
 scalar_t__ FUNC_0 (char**,char const**) ;
 int FUNC_1 (char const*) ;

void FUNC_2(itemDef_t *VAR_1, char **VAR_2) {
  const char *VAR_3;

  if (FUNC_0(VAR_2, &VAR_3)) {
    VAR_1->window.background = VAR_0->registerShaderNoMip(VAR_3);
  }
}
