
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct tl_scheme_object* cdr; } ;
struct TYPE_4__ {TYPE_1__ p; } ;
struct tl_scheme_object {scalar_t__ type; TYPE_2__ u; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 struct tl_scheme_object VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,struct tl_scheme_object*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

struct tl_scheme_object *FUNC_3 (struct tl_scheme_object *VAR_4) {
  if (VAR_3 >= 3) {
    FUNC_1 (VAR_1, "(reverse ");
    FUNC_2 (VAR_1, VAR_4);
    FUNC_1 (VAR_1, ")\n");
  }
  if (VAR_4->type != VAR_2) {
    return ((void*)0);
  }
  struct tl_scheme_object *VAR_5 = &VAR_0, *VAR_6, *VAR_7;
  for (VAR_6 = VAR_4; VAR_6 != &VAR_0; VAR_6 = VAR_7) {
    FUNC_0 (VAR_6->type == VAR_2);
    VAR_7 = VAR_6->u.p.cdr;
    VAR_6->u.p.cdr = VAR_5;
    VAR_5 = VAR_6;
  }
  return VAR_5;
}
