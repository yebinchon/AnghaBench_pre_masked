
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct dm_btree_info {int dummy; } ;
struct child {struct btree_node* n; } ;
struct TYPE_2__ {scalar_t__ max_entries; int nr_entries; } ;
struct btree_node {TYPE_1__ header; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dm_btree_info*,struct btree_node*,struct child*,struct child*,struct child*,struct btree_node*,struct btree_node*,struct btree_node*,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct btree_node*) ;
 int FUNC_4 (struct dm_btree_info*,struct btree_node*,struct child*,struct child*,struct child*,struct btree_node*,struct btree_node*,struct btree_node*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct dm_btree_info *VAR_0, struct btree_node *VAR_1,
    struct child *VAR_2, struct child *VAR_3, struct child *VAR_4)
{
 struct btree_node *VAR_5 = VAR_2->n;
 struct btree_node *VAR_6 = VAR_3->n;
 struct btree_node *VAR_7 = VAR_4->n;

 uint32_t VAR_8 = FUNC_2(VAR_5->header.nr_entries);
 uint32_t VAR_9 = FUNC_2(VAR_6->header.nr_entries);
 uint32_t VAR_10 = FUNC_2(VAR_7->header.nr_entries);

 unsigned VAR_11 = FUNC_3(VAR_5) * 4 + 1;

 FUNC_0(VAR_5->header.max_entries != VAR_6->header.max_entries);
 FUNC_0(VAR_6->header.max_entries != VAR_7->header.max_entries);

 if ((VAR_8 + VAR_9 + VAR_10) < VAR_11)
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
       VAR_8, VAR_9, VAR_10);
 else
  FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
         VAR_8, VAR_9, VAR_10);
}
