
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ privacy; } ;
typedef TYPE_1__ user_t ;
struct lev_generic {scalar_t__ b; int a; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

int FUNC_1 (struct lev_generic *VAR_1) {
  user_t *VAR_2 = FUNC_0 (VAR_1->a);
  if (!VAR_2 || VAR_1->b < 0 || VAR_1->b > VAR_0) { return 0; }
  VAR_2->privacy = VAR_1->b;
  return 1;
}
