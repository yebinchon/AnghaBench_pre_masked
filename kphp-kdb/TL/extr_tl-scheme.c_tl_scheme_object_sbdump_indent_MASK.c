
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct tl_scheme_object* car; struct tl_scheme_object* cdr; } ;
struct TYPE_4__ {TYPE_1__ p; } ;
struct tl_scheme_object {scalar_t__ type; TYPE_2__ u; } ;
struct tl_buffer {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tl_buffer*,int) ;
 struct tl_scheme_object VAR_0 ;
 int FUNC_2 (struct tl_scheme_object*) ;
 scalar_t__ FUNC_3 (struct tl_scheme_object*) ;
 int FUNC_4 (struct tl_buffer*,struct tl_scheme_object*) ;
 int FUNC_5 (struct tl_buffer*,char) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_6 (struct tl_buffer *VAR_3, struct tl_scheme_object *VAR_4, int VAR_5) {
  char VAR_6, VAR_7, VAR_8;
  struct tl_scheme_object *VAR_9;
  if (!FUNC_2 (VAR_4)) {
    FUNC_4 (VAR_3, VAR_4);
    return;
  }
  if (VAR_4->u.p.cdr != ((void*)0) && VAR_4->u.p.car->type == VAR_2) {
    VAR_7 = '[';
    VAR_8 = ']';
    VAR_4 = VAR_4->u.p.cdr;
    VAR_6 = ' ';
  } else {
    VAR_7 = '(';
    VAR_8 = ')';
    VAR_6 = 0;
  }
  FUNC_5 (VAR_3, VAR_7);
  for (VAR_9 = VAR_4; VAR_9 != &VAR_0; VAR_9 = VAR_9->u.p.cdr) {
    FUNC_0 (VAR_9->type == VAR_1);
    if (VAR_6 != 0) {
      FUNC_5 (VAR_3, '\n');
      FUNC_1 (VAR_3, VAR_5+1);
    }
    FUNC_6 (VAR_3, VAR_9->u.p.car, VAR_5 + 1);
    VAR_6 = FUNC_3 (VAR_9->u.p.car) ? 0 : ' ';
  }
  FUNC_5 (VAR_3, '\n');
  FUNC_1 (VAR_3, VAR_5);
  FUNC_5 (VAR_3, VAR_8);
}
