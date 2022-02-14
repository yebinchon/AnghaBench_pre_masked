
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_tree_nat_const {int dummy; } ;
struct tl_tree {scalar_t__ ref_cnt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct tl_tree*,int) ;

void FUNC_2 (struct tl_tree *VAR_2) {
  VAR_2->ref_cnt --;
  VAR_1 --;
  if (VAR_2->ref_cnt > 0) { return; }
  VAR_0 --;
  FUNC_1 (VAR_2, sizeof (struct tl_tree_nat_const));
  FUNC_0 (sizeof (struct tl_tree_nat_const));
  return;
}
