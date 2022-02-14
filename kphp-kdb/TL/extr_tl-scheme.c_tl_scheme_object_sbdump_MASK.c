
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct tl_scheme_object* car; struct tl_scheme_object* cdr; } ;
struct TYPE_4__ {TYPE_1__ p; int s; int d; int l; int i; } ;
struct tl_scheme_object {int type; TYPE_2__ u; } ;
struct tl_buffer {int dummy; } ;


 int FUNC_0 (int) ;
 struct tl_scheme_object VAR_0 ;
 int FUNC_1 (struct tl_scheme_object*) ;
 int FUNC_2 (struct tl_buffer*,int ) ;
 int FUNC_3 (struct tl_buffer*,char) ;
 int FUNC_4 (struct tl_buffer*,char*,...) ;
void FUNC_5 (struct tl_buffer *VAR_1, struct tl_scheme_object *VAR_2) {
  char VAR_3, VAR_4, VAR_5;
  struct tl_scheme_object *VAR_6;
  switch (VAR_2->type) {
    case 133:
      FUNC_4 (VAR_1, "%d", VAR_2->u.i);
    break;
    case 131:
      FUNC_4 (VAR_1, "%lld", VAR_2->u.l);
    break;
    case 135:
      FUNC_4 (VAR_1, "%.15lg", VAR_2->u.d);
    break;
    case 128:
      FUNC_2 (VAR_1, VAR_2->u.s);
    break;
    case 134:
      FUNC_4 (VAR_1, "%s", VAR_2->u.s);
    break;
    case 132:
      VAR_3 = 0;
      if (VAR_2->u.p.cdr != ((void*)0) && VAR_2->u.p.car->type == 129) {
        VAR_4 = '[';
        VAR_5 = ']';
        VAR_2 = VAR_2->u.p.cdr;
      } else {
        VAR_4 = '(';
        VAR_5 = ')';
      }
      FUNC_3 (VAR_1, VAR_4);
      for (VAR_6 = VAR_2; VAR_6 != &VAR_0; VAR_6 = VAR_6->u.p.cdr) {
        FUNC_0 (VAR_6->type == 132);
        if (VAR_3 != 0) {
          FUNC_3 (VAR_1, VAR_3);
        }
        FUNC_5 (VAR_1, VAR_6->u.p.car);
        VAR_3 = FUNC_1 (VAR_6->u.p.car) ? 0 : ' ';
      }
      FUNC_3 (VAR_1, VAR_5);
    break;
    case 130:
      FUNC_4 (VAR_1, "(");
    break;
    case 129:
      FUNC_4 (VAR_1, "[");
    break;
  }
}
