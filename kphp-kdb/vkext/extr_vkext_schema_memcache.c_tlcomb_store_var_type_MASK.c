
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
struct tl_type {int dummy; } ;
struct TYPE_2__ {int ref_cnt; int flags; int * methods; } ;
struct tl_tree_type {scalar_t__ children; struct tl_type* type; scalar_t__ children_num; TYPE_1__ self; } ;
struct tl_tree {int dummy; } ;


 int FUNC_0 (struct tl_tree*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int **,int*) ;
 struct tl_type* FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tl_tree_type* FUNC_3 (int) ;

void *FUNC_4 (void **VAR_5, void **VAR_6, zval **VAR_7, struct tl_tree **VAR_8) {
  int VAR_9 = (long)*(VAR_5 ++);
  int VAR_10 = (long)*(VAR_5 ++);
  int VAR_11;
  char *VAR_12 = FUNC_1 (VAR_7, &VAR_11);
  if (!VAR_12) { return 0; }
  if (VAR_8[VAR_9]) {
    FUNC_0 (VAR_8[VAR_9]);
    VAR_8[VAR_9] = 0;
  }
  struct tl_type *VAR_13 = FUNC_2 (VAR_12);
  if (!VAR_13) { return 0; }

  struct tl_tree_type *VAR_14 = FUNC_3 (sizeof (*VAR_14));
  VAR_1 ++;
  VAR_4 ++;
  VAR_14->self.ref_cnt = 1;
  VAR_3 ++;
  VAR_14->self.flags = VAR_10;
  VAR_14->self.methods = &VAR_2;
  VAR_14->children_num = 0;
  VAR_14->type = VAR_13;
  VAR_14->children = 0;
  VAR_8[VAR_9] = (void *)VAR_14;
  VAR_0;
}
