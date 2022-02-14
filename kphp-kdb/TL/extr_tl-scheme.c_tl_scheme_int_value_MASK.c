
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; scalar_t__ l; } ;
struct tl_scheme_object {int type; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



int FUNC_0 (struct tl_scheme_object *VAR_2, int *VAR_3) {
  switch (VAR_2->type) {
    case 129:
      *VAR_3 = VAR_2->u.i;
      return 0;
    case 128:
      if (VAR_1 <= VAR_2->u.l && VAR_2->u.l <= VAR_0) {
        *VAR_3 = (int) (VAR_2->u.l);
        return 0;
      }
    default:
    break;
  }
  return -1;
}
