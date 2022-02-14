
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_btree_cursor {int depth; struct cursor_node* nodes; } ;
struct cursor_node {int b; } ;
struct TYPE_2__ {int flags; } ;
struct btree_node {TYPE_1__ header; } ;


 int VAR_0 ;
 struct btree_node* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct dm_btree_cursor *VAR_1)
{
 struct cursor_node *VAR_2 = VAR_1->nodes + VAR_1->depth - 1;
 struct btree_node *VAR_3 = FUNC_0(VAR_2->b);

 return FUNC_1(VAR_3->header.flags) & VAR_0;
}
