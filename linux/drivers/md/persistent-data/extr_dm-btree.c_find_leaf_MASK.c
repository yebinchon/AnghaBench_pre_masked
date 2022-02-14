
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int value_le ;
struct dm_btree_cursor {int depth; struct cursor_node* nodes; } ;
struct cursor_node {int index; int b; } ;
struct TYPE_2__ {int nr_entries; int flags; } ;
struct btree_node {TYPE_1__ header; } ;
typedef int __le64 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct btree_node* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct dm_btree_cursor*,int ) ;
 int FUNC_6 (struct btree_node*,int ) ;

__attribute__((used)) static int FUNC_7(struct dm_btree_cursor *VAR_2)
{
 int VAR_3 = 0;
 struct cursor_node *VAR_4;
 struct btree_node *VAR_5;
 __le64 VAR_6;

 for (;;) {
  VAR_4 = VAR_2->nodes + VAR_2->depth - 1;
  VAR_5 = FUNC_1(VAR_4->b);

  if (FUNC_2(VAR_5->header.flags) & VAR_1)
   break;

  FUNC_4(&VAR_6, FUNC_6(VAR_5, VAR_4->index), sizeof(VAR_6));
  VAR_3 = FUNC_5(VAR_2, FUNC_3(VAR_6));
  if (VAR_3) {
   FUNC_0("push_node failed");
   break;
  }
 }

 if (!VAR_3 && (FUNC_2(VAR_5->header.nr_entries) == 0))
  return -VAR_0;

 return VAR_3;
}
