
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ref_cnt; } ;
struct tl_tree_type {int children_num; struct tl_tree_type* children; TYPE_2__ self; TYPE_1__* type; } ;
struct tl_tree {int dummy; } ;
struct TYPE_3__ {char* id; } ;


 int FUNC_0 (struct tl_tree_type) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct tl_tree_type*,int) ;

void FUNC_3 (struct tl_tree *VAR_3) {
  VAR_2 --;
  struct tl_tree_type *VAR_4 = (void *)VAR_3;



  VAR_4->self.ref_cnt --;
  if (VAR_4->self.ref_cnt > 0) { return; }
  VAR_0 --;
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_4->children_num; VAR_5++) {
    FUNC_0 (VAR_4->children[VAR_5]);
  }
  FUNC_2 (VAR_4->children, sizeof (void *) * VAR_4->children_num);
  FUNC_2 (VAR_4, sizeof (*VAR_4));
}
