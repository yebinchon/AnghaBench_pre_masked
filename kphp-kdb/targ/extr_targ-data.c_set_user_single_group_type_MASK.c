
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* user_group_types; } ;
typedef TYPE_1__ user_t ;
struct lev_generic {int type; int a; } ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1 (struct lev_generic *VAR_0) {
  user_t *VAR_1 = FUNC_0 (VAR_0->a);
  if (!VAR_1) {
    return 0;
  }
  unsigned VAR_2 = VAR_0->type & 0x7f;
  VAR_1->user_group_types[VAR_2 >> 5] |= (1 << (VAR_2 & 31));
  return 1;
}
