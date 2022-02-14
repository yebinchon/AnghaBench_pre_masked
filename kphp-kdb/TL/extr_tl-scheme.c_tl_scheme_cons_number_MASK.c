
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; long long l; } ;
struct tl_scheme_object {TYPE_1__ u; } ;


 long long VAR_0 ;
 long long VAR_1 ;
 int FUNC_0 (struct tl_scheme_object*) ;
 struct tl_scheme_object* FUNC_1 (struct tl_scheme_object*,struct tl_scheme_object*) ;
 struct tl_scheme_object* FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct tl_scheme_object *FUNC_3 (long long VAR_4, struct tl_scheme_object *VAR_5) {
  struct tl_scheme_object *VAR_6;
  if (VAR_1 <= VAR_4 && VAR_4 <= VAR_0) {
    VAR_6 = FUNC_2 (VAR_2);
    VAR_6->u.i = (int) VAR_4;
  } else {
    VAR_6 = FUNC_2 (VAR_3);
    VAR_6->u.l = VAR_4;
  }
  VAR_5 = FUNC_1 (VAR_6, VAR_5);
  FUNC_0 (VAR_5);
  return VAR_5;
}
