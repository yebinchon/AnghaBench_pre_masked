
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct tl_scheme_object* cdr; struct tl_scheme_object* car; } ;
struct TYPE_4__ {TYPE_1__ p; } ;
struct tl_scheme_object {scalar_t__ type; TYPE_2__ u; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct tl_scheme_object*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct tl_scheme_object* FUNC_2 (int) ;

struct tl_scheme_object *FUNC_3 (struct tl_scheme_object *VAR_3, struct tl_scheme_object *VAR_4) {
  if (VAR_2 >= 3) {
    FUNC_0 (VAR_0, "(cons ");
    FUNC_1 (VAR_0, VAR_3);
    FUNC_0 (VAR_0, " ");
    FUNC_1 (VAR_0, VAR_4);
    FUNC_0 (VAR_0, ")\n");
  }
  if (VAR_4->type != VAR_1) {
    return ((void*)0);
  }
  struct tl_scheme_object *VAR_5 = FUNC_2 (sizeof (struct tl_scheme_object));
  VAR_5->type = VAR_1;
  VAR_5->u.p.car = VAR_3;
  VAR_5->u.p.cdr = VAR_4;
  return VAR_5;
}
