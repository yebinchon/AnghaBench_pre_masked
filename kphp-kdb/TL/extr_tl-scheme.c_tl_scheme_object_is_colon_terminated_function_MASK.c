
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* s; } ;
struct tl_scheme_object {scalar_t__ type; TYPE_1__ u; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;

int FUNC_1 (struct tl_scheme_object *VAR_1) {
  if (VAR_1->type != VAR_0) {
    return 0;
  }
  int VAR_2 = FUNC_0 (VAR_1->u.s);
  return (VAR_2 > 0 && VAR_1->u.s[VAR_2-1] == ':') ? 1 : 0;
}
