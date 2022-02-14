
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
struct tl_tree_array {long args_num; int multiplicity; int * args; } ;
struct tl_tree {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* type ) (void*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct tl_tree_array*) ;
 scalar_t__ FUNC_1 (void*) ;

void *FUNC_2 (void **VAR_2, void **VAR_3, zval **VAR_4, struct tl_tree **VAR_5) {
  struct tl_tree_array *VAR_6 = *(--VAR_3);
  if (FUNC_0 (VAR_6)->type ((void *)VAR_6) != VAR_0) { return 0; }
  if (VAR_6->args_num != (long)*(VAR_2 ++)) { return 0; }
  int VAR_7;
  for (VAR_7 = VAR_6->args_num - 1; VAR_7 >= 0; VAR_7--) {
    *(VAR_3 ++) = VAR_6->args[VAR_7];
  }
  *(VAR_3 ++) = VAR_6->multiplicity;
  VAR_1;
}
