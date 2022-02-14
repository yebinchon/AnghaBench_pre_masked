
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pos_to; int neg_to; } ;
typedef TYPE_1__ user_mod_header_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1 (user_mod_header_t *VAR_0, int VAR_1) {
  FUNC_0 (VAR_0);
  if (VAR_1 > 0 && VAR_0->pos_to < VAR_1) {
    VAR_0->pos_to = VAR_1;
  }
  if (VAR_1 < 0 && VAR_0->neg_to > VAR_1) {
    VAR_0->neg_to = VAR_1;
  }
}
