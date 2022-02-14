
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct targ_extra {int op; int mode; int limit; int ad_id; } ;
struct gather {struct targ_extra* extra; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;

int FUNC_3 (struct gather *VAR_1, int VAR_2) {
  struct targ_extra *VAR_3 = VAR_1->extra;
  switch (VAR_3->op) {
  case 128:
    FUNC_2 (VAR_3->op);
    FUNC_2 (VAR_3->mode & (~1));
    FUNC_2 (VAR_3->limit + 100);
    break;
  case 129:
    FUNC_2 (VAR_3->op);
    FUNC_2 (VAR_3->ad_id);
    FUNC_2 (VAR_3->mode & (~1));
    FUNC_2 (VAR_3->limit);
    break;
  default:
    FUNC_1 (VAR_0, "op = 0x%08x\n", VAR_3->op);
    FUNC_0 (0);
  }
  return 0;
}
