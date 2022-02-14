
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_node {int node; } ;
struct dm_integrity_c {int journal_tree_root; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct journal_node*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct dm_integrity_c *VAR_0, struct journal_node *VAR_1)
{
 FUNC_0(FUNC_1(&VAR_1->node));
 FUNC_3(&VAR_1->node, &VAR_0->journal_tree_root);
 FUNC_2(VAR_1);
}
