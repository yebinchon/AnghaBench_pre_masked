
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct dm_btree_info {int tm; } ;
struct child {int block; int index; } ;
struct TYPE_2__ {void* nr_entries; int max_entries; } ;
struct btree_node {int * keys; TYPE_1__ header; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dm_btree_info*,struct btree_node*,struct child*,struct child*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct btree_node*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (struct btree_node*,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 unsigned int FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (struct btree_node*,struct btree_node*,unsigned int) ;
 int FUNC_10 (struct btree_node*,unsigned int) ;

__attribute__((used)) static void FUNC_11(struct dm_btree_info *VAR_0, struct btree_node *VAR_1,
          struct child *VAR_2, struct child *VAR_3, struct child *VAR_4,
          struct btree_node *VAR_5, struct btree_node *VAR_6, struct btree_node *VAR_7,
          uint32_t VAR_8, uint32_t VAR_9, uint32_t VAR_10)
{
 uint32_t VAR_11 = FUNC_7(VAR_5->header.max_entries);
 unsigned VAR_12 = FUNC_8(VAR_11 - VAR_8, VAR_9);

 FUNC_0(VAR_8 + VAR_12 > VAR_11);
 FUNC_9(VAR_5, VAR_6, -VAR_12);
 VAR_5->header.nr_entries = FUNC_2(VAR_8 + VAR_12);

 if (VAR_12 != VAR_9) {
  VAR_12 = VAR_9 - VAR_12;
  FUNC_0((VAR_10 + VAR_12) > VAR_11);
  FUNC_10(VAR_7, VAR_12);
  FUNC_9(VAR_6, VAR_7, VAR_12);
  VAR_7->header.nr_entries = FUNC_2(VAR_10 + VAR_12);
 }
 *FUNC_6(VAR_1, VAR_4->index) = VAR_7->keys[0];

 FUNC_3(VAR_1, VAR_3->index);
 VAR_4->index--;

 FUNC_5(VAR_0->tm, FUNC_4(VAR_3->block));
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4);
}
