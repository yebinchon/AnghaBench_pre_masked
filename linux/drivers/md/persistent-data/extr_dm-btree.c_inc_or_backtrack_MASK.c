
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_btree_cursor {int depth; struct cursor_node* nodes; } ;
struct cursor_node {scalar_t__ index; int b; } ;
struct TYPE_2__ {int nr_entries; } ;
struct btree_node {TYPE_1__ header; } ;


 int VAR_0 ;
 struct btree_node* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct dm_btree_cursor*) ;

__attribute__((used)) static int FUNC_3(struct dm_btree_cursor *VAR_1)
{
 struct cursor_node *VAR_2;
 struct btree_node *VAR_3;

 for (;;) {
  if (!VAR_1->depth)
   return -VAR_0;

  VAR_2 = VAR_1->nodes + VAR_1->depth - 1;
  VAR_3 = FUNC_0(VAR_2->b);

  VAR_2->index++;
  if (VAR_2->index < FUNC_1(VAR_3->header.nr_entries))
   break;

  FUNC_2(VAR_1);
 }

 return 0;
}
