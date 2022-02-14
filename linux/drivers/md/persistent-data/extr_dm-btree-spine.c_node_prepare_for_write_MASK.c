
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_header {int flags; int csum; int blocknr; } ;
struct dm_block_validator {int dummy; } ;
struct dm_block {int dummy; } ;
struct btree_node {struct node_header header; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct btree_node* FUNC_3 (struct dm_block*) ;
 int FUNC_4 (struct dm_block*) ;
 int FUNC_5 (int *,size_t,int ) ;
 int FUNC_6 (struct dm_block_validator*,struct dm_block*,int) ;

__attribute__((used)) static void FUNC_7(struct dm_block_validator *VAR_1,
       struct dm_block *VAR_2,
       size_t VAR_3)
{
 struct btree_node *VAR_4 = FUNC_3(VAR_2);
 struct node_header *VAR_5 = &VAR_4->header;

 VAR_5->blocknr = FUNC_2(FUNC_4(VAR_2));
 VAR_5->csum = FUNC_1(FUNC_5(&VAR_5->flags,
          VAR_3 - sizeof(__le32),
          VAR_0));

 FUNC_0(FUNC_6(VAR_1, VAR_2, 4096));
}
