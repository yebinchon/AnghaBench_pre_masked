
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct dm_btree_cursor {int depth; TYPE_3__* info; struct cursor_node* nodes; } ;
struct cursor_node {int index; int b; } ;
struct TYPE_4__ {int flags; } ;
struct btree_node {TYPE_1__ header; } ;
struct TYPE_5__ {int size; } ;
struct TYPE_6__ {TYPE_2__ value_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct btree_node* FUNC_0 (int ) ;
 int * FUNC_1 (struct btree_node*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*,int ,int ) ;
 int FUNC_5 (struct btree_node*,int ) ;

int FUNC_6(struct dm_btree_cursor *VAR_3, uint64_t *VAR_4, void *VAR_5)
{
 if (VAR_3->depth) {
  struct cursor_node *VAR_6 = VAR_3->nodes + VAR_3->depth - 1;
  struct btree_node *VAR_7 = FUNC_0(VAR_6->b);

  if (FUNC_2(VAR_7->header.flags) & VAR_2)
   return -VAR_0;

  *VAR_4 = FUNC_3(*FUNC_1(VAR_7, VAR_6->index));
  FUNC_4(VAR_5, FUNC_5(VAR_7, VAR_6->index), VAR_3->info->value_type.size);
  return 0;

 } else
  return -VAR_1;
}
