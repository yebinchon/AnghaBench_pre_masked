
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int value_le ;
struct dm_btree_cursor {int depth; TYPE_2__* info; struct cursor_node* nodes; } ;
struct dm_block_manager {int dummy; } ;
struct cursor_node {int b; } ;
struct TYPE_6__ {int nr_entries; } ;
struct btree_node {TYPE_3__ header; } ;
typedef int __le64 ;
struct TYPE_4__ {int size; } ;
struct TYPE_5__ {TYPE_1__ value_type; int tm; } ;


 int FUNC_0 (int) ;
 struct btree_node* FUNC_1 (int ) ;
 int FUNC_2 (struct dm_block_manager*,int ) ;
 struct dm_block_manager* FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (struct btree_node*,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct dm_btree_cursor *VAR_0)
{
 unsigned VAR_1, VAR_2;
 __le64 VAR_3;
 struct cursor_node *VAR_4 = VAR_0->nodes + VAR_0->depth - 1;
 struct btree_node *VAR_5 = FUNC_1(VAR_4->b);
 struct dm_block_manager *VAR_6 = FUNC_3(VAR_0->info->tm);

 FUNC_0(VAR_0->info->value_type.size != sizeof(VAR_3));

 VAR_2 = FUNC_4(VAR_5->header.nr_entries);
 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {
  FUNC_6(&VAR_3, FUNC_7(VAR_5, VAR_1), sizeof(VAR_3));
  FUNC_2(VAR_6, FUNC_5(VAR_3));
 }
}
