
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_type {int flags; int params_num; long long params_types; char* id; } ;


 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;

int FUNC_1 (struct tl_type *VAR_1, int VAR_2, long long VAR_3) {
  if (VAR_1->flags & 4) {
    VAR_1->params_num = VAR_2;
    VAR_1->params_types = VAR_3;
    VAR_1->flags &= ~4;
  } else {
    if (VAR_1->params_num != VAR_2 || VAR_1->params_types != VAR_3) {
      FUNC_0 (VAR_0, "Wrong num of params (type %s)\n", VAR_1->id);
      return 0;
    }
  }
  return 1;
}
