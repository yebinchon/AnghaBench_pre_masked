
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ro_spine {int count; struct dm_block** nodes; } ;
struct dm_block {int dummy; } ;
struct btree_node {int dummy; } ;


 int FUNC_0 (int) ;
 struct btree_node* FUNC_1 (struct dm_block*) ;

struct btree_node *FUNC_2(struct ro_spine *VAR_0)
{
 struct dm_block *VAR_1;

 FUNC_0(!VAR_0->count);
 VAR_1 = VAR_0->nodes[VAR_0->count - 1];

 return FUNC_1(VAR_1);
}
