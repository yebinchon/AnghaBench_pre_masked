
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ref_cnt; int flags; int * methods; } ;
struct tl_tree_array {int args_num; TYPE_1__ self; TYPE_2__** args; int multiplicity; } ;
typedef void tl_tree ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__**,int,int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_6 (int) ;

struct tl_tree *FUNC_7 (int *VAR_6) {
  struct tl_tree_array *VAR_7 = FUNC_6 (sizeof (*VAR_7));
  FUNC_0 (sizeof (*VAR_7));
  VAR_7->self.ref_cnt = 1;
  VAR_4 ++;
  VAR_1 ++;
  VAR_5 ++;
  VAR_7->self.methods = &VAR_3;
  VAR_7->self.flags = 0;
  if (VAR_2 >= 2) {
    VAR_7->multiplicity = FUNC_2 (VAR_6);
  } else {
    VAR_7->multiplicity = FUNC_3 (VAR_6);
  }
  if (!VAR_7->multiplicity) {
    return 0;
  }
  VAR_7->args_num = FUNC_5 ();
  if (VAR_7->args_num <= 0 || VAR_7->args_num > 1000 || FUNC_4 ()) {
    return 0;
  }
  VAR_7->args = FUNC_6 (sizeof (void *) * VAR_7->args_num);
  FUNC_0 (sizeof (void *) * VAR_7->args_num);
  if (FUNC_1 (VAR_7->args, VAR_7->args_num, VAR_6) < 0) {
    return 0;
  }
  VAR_7->self.flags |= VAR_0;
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_7->args_num; VAR_8++) {
    if (!(VAR_7->args[VAR_8]->flags & VAR_0)) {
      VAR_7->self.flags &= ~VAR_0;
    }
  }
  return (void *)VAR_7;
}
