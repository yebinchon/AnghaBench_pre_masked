
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct tl_scheme_object* cdr; struct tl_scheme_object* car; } ;
struct TYPE_4__ {int s; TYPE_1__ p; } ;
struct tl_scheme_object {int type; TYPE_2__ u; } ;


 int FUNC_0 (int *) ;
 struct tl_scheme_object VAR_0 ;
 int FUNC_1 (struct tl_scheme_object*,int) ;

void FUNC_2 (struct tl_scheme_object *VAR_1) {
  switch (VAR_1->type) {
    case 132:
      if (VAR_1 != &VAR_0) {
        FUNC_2 (VAR_1->u.p.car);
        if (VAR_1->u.p.cdr != &VAR_0) {
          FUNC_2 (VAR_1->u.p.cdr);
        }
      }
    break;
    case 128:
    case 134:
      FUNC_0 (&VAR_1->u.s);
    break;
    case 130:
    case 129:
      return;
    case 133:
    case 131:
    case 135:
    break;
  }
  FUNC_1 (VAR_1, sizeof (struct tl_scheme_object));
}
