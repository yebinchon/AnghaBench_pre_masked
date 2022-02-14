
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ref_cnt; } ;
struct tl_tree_var_type {TYPE_1__ self; } ;
struct tl_tree {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct tl_tree_var_type*,int) ;

void FUNC_3 (struct tl_tree *VAR_3) {
  VAR_2 --;
  struct tl_tree_var_type *VAR_4 = (void *)VAR_3;



  VAR_4->self.ref_cnt --;
  if (VAR_4->self.ref_cnt > 0) { return; }
  VAR_0 --;
  FUNC_2 (VAR_4, sizeof (*VAR_4));
  FUNC_0 (sizeof (*VAR_4));
}
