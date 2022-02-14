
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* s; } ;
struct tl_scheme_object {int type; TYPE_1__ u; } ;




int FUNC_0 (struct tl_scheme_object *VAR_0, char **VAR_1) {
  switch (VAR_0->type) {
    case 128:
      *VAR_1 = VAR_0->u.s;
       return 0;
    default:
    break;
  }
  return -1;
}
