
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long i; long long l; } ;
struct tl_scheme_object {int type; TYPE_1__ u; } ;





int FUNC_0 (struct tl_scheme_object *VAR_0, long long *VAR_1) {
  switch (VAR_0->type) {
    case 129:
      *VAR_1 = VAR_0->u.i;
      return 0;
    case 128:
      *VAR_1 = VAR_0->u.l;
      return 0;
    default:
    break;
  }
  return -1;
}
