
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_tree_nat_const {int dummy; } ;
struct tl_tree {scalar_t__ ref_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tl_tree*,int) ;

void FUNC_1 (struct tl_tree *VAR_2) {
  VAR_1 --;
  VAR_2->ref_cnt --;
  if (VAR_2->ref_cnt > 0) { return; }
  VAR_0 --;
  FUNC_0 (VAR_2, sizeof (struct tl_tree_nat_const));
  return;
}
