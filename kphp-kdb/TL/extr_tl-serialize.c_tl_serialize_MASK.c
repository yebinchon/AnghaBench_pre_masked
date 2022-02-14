
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int car; struct tl_scheme_object* cdr; } ;
struct TYPE_4__ {TYPE_1__ p; } ;
struct tl_scheme_object {TYPE_2__ u; } ;
struct tl_int_array {int pos; } ;
struct tl_compiler {int dummy; } ;


 struct tl_scheme_object VAR_0 ;
 int FUNC_0 (struct tl_compiler*) ;
 int FUNC_1 (struct tl_compiler*,int ,struct tl_int_array*) ;
 int FUNC_2 (struct tl_int_array*,int*,int) ;

int FUNC_3 (struct tl_compiler *VAR_1, struct tl_scheme_object *VAR_2, int *VAR_3, int VAR_4) {
  struct tl_int_array VAR_5;
  FUNC_0 (VAR_1);
  FUNC_2 (&VAR_5, VAR_3, VAR_4);
  struct tl_scheme_object *VAR_6 = VAR_2, *VAR_7;
  for (VAR_7 = VAR_6; VAR_7 != &VAR_0; VAR_7 = VAR_7->u.p.cdr) {
    int VAR_8 = FUNC_1 (VAR_1, VAR_7->u.p.car, &VAR_5);
    if (VAR_8 < 0) {
      return VAR_8;
    }
  }
  return VAR_5.pos;
}
