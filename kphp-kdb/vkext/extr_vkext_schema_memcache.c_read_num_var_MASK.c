
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int ref_cnt; int * methods; } ;
struct tl_tree_var_num {int var_num; TYPE_1__ self; void* dif; } ;
typedef void tl_tree ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 void* FUNC_2 () ;
 void* FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct tl_tree_var_num* FUNC_4 (int) ;

struct tl_tree *FUNC_5 (int *VAR_6) {
  struct tl_tree_var_num *VAR_7 = FUNC_4 (sizeof (*VAR_7));
  FUNC_0 (sizeof (*VAR_7));
  VAR_7->self.flags = 0;
  VAR_7->self.ref_cnt = 1;
  VAR_4 ++;
  VAR_1 ++;
  VAR_5 ++;
  VAR_7->self.methods = &VAR_3;;
  if (VAR_2 >= 2) {
    VAR_7->dif = FUNC_2 ();
  } else {
    VAR_7->dif = FUNC_3 ();
  }
  VAR_7->var_num = FUNC_2 ();
  if (FUNC_1 ()) {
    return 0;
  }
  if (VAR_7->var_num >= *VAR_6) {
    *VAR_6 = VAR_7->var_num + 1;
  }
  if (VAR_7->self.flags & VAR_0) {
    return 0;
  }
  return (void *)VAR_7;
}
