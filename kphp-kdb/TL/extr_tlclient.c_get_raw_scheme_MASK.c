
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct tl_scheme_object* car; struct tl_scheme_object* cdr; } ;
struct TYPE_4__ {char* s; TYPE_1__ p; } ;
struct tl_scheme_object {scalar_t__ type; TYPE_2__ u; } ;


 int FUNC_0 (int) ;
 struct tl_scheme_object VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static char *FUNC_2 (struct tl_scheme_object *VAR_3) {
  if (VAR_3->type != VAR_1) {
    return ((void*)0);
  }
  struct tl_scheme_object *VAR_4 = VAR_3->u.p.cdr;
  if (VAR_4 == &VAR_0) {
    return ((void*)0);
  }
  FUNC_0 (VAR_4->type == VAR_1);
  struct tl_scheme_object *VAR_5 = VAR_4->u.p.car;

  if (VAR_5->type == VAR_2 && FUNC_1 (VAR_5->u.s, "raw_scheme:")) {
    return ((void*)0);
  }
  struct tl_scheme_object *VAR_6 = VAR_4->u.p.cdr;
  if (VAR_6->type != VAR_1) {
    return ((void*)0);
  }
  struct tl_scheme_object *VAR_7 = VAR_6->u.p.car;
  if (VAR_7->type != VAR_2) {
    return ((void*)0);
  }
  return VAR_7->u.s;
}
