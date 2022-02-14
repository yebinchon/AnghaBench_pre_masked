
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct tl_scheme_object* cdr; struct tl_scheme_object* car; } ;
struct TYPE_4__ {TYPE_1__ p; } ;
struct tl_scheme_object {scalar_t__ type; TYPE_2__ u; } ;


 int FUNC_0 (int) ;
 struct tl_scheme_object VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1 (struct tl_scheme_object *VAR_2) {
  if (VAR_2->type != VAR_1) {
    return 0;
  }
  while (VAR_2 != &VAR_0) {
    FUNC_0 (VAR_2->type == VAR_1);
    struct tl_scheme_object *VAR_3 = VAR_2->u.p.car;
    if (VAR_3->type == VAR_1) {
      return 1;
    }
    VAR_2 = VAR_2->u.p.cdr;
  }
  return 0;
}
