
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float textscale; int window; } ;
typedef TYPE_1__ itemDef_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(itemDef_t *VAR_0) {
 if (VAR_0 == ((void*)0)) {
  return;
 }

 FUNC_1(VAR_0, 0, sizeof(itemDef_t));
 VAR_0->textscale = 0.55f;
 FUNC_0(&VAR_0->window);
}
