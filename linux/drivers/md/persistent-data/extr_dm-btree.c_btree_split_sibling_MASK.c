
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct shadow_spine {struct dm_block** nodes; TYPE_3__* info; } ;
struct dm_block {int dummy; } ;
struct TYPE_5__ {void* flags; int value_size; int max_entries; void* nr_entries; } ;
struct btree_node {int * keys; TYPE_1__ header; } ;
typedef int __le64 ;
struct TYPE_6__ {int size; } ;
struct TYPE_7__ {TYPE_2__ value_type; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 struct btree_node* FUNC_3 (struct dm_block*) ;
 int FUNC_4 (struct dm_block*) ;
 int FUNC_5 (int,struct btree_node*,unsigned int,scalar_t__,int *) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int *,size_t) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (TYPE_3__*,struct dm_block**) ;
 struct dm_block* FUNC_11 (struct shadow_spine*) ;
 struct dm_block* FUNC_12 (struct shadow_spine*) ;
 int FUNC_13 (TYPE_3__*,struct dm_block*) ;
 int * FUNC_14 (struct btree_node*,unsigned int) ;

__attribute__((used)) static int FUNC_15(struct shadow_spine *VAR_1, unsigned VAR_2,
          uint64_t VAR_3)
{
 int VAR_4;
 size_t VAR_5;
 unsigned VAR_6, VAR_7;
 struct dm_block *VAR_8, *VAR_9, *VAR_10;
 struct btree_node *VAR_11, *VAR_12, *VAR_13;
 __le64 VAR_14;

 VAR_8 = FUNC_11(VAR_1);

 VAR_4 = FUNC_10(VAR_1->info, &VAR_9);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_11 = FUNC_3(VAR_8);
 VAR_12 = FUNC_3(VAR_9);

 VAR_6 = FUNC_6(VAR_11->header.nr_entries) / 2;
 VAR_7 = FUNC_6(VAR_11->header.nr_entries) - VAR_6;

 VAR_11->header.nr_entries = FUNC_1(VAR_6);

 VAR_12->header.flags = VAR_11->header.flags;
 VAR_12->header.nr_entries = FUNC_1(VAR_7);
 VAR_12->header.max_entries = VAR_11->header.max_entries;
 VAR_12->header.value_size = VAR_11->header.value_size;
 FUNC_8(VAR_12->keys, VAR_11->keys + VAR_6, VAR_7 * sizeof(VAR_12->keys[0]));

 VAR_5 = FUNC_6(VAR_11->header.flags) & VAR_0 ?
  sizeof(uint64_t) : VAR_1->info->value_type.size;
 FUNC_8(FUNC_14(VAR_12, 0), FUNC_14(VAR_11, VAR_6),
        VAR_5 * VAR_7);




 VAR_10 = FUNC_12(VAR_1);

 VAR_13 = FUNC_3(VAR_10);
 VAR_14 = FUNC_2(FUNC_4(VAR_8));
 FUNC_0(&VAR_14);
 FUNC_9(FUNC_14(VAR_13, VAR_2),
      &VAR_14, sizeof(__le64));

 VAR_14 = FUNC_2(FUNC_4(VAR_9));
 FUNC_0(&VAR_14);

 VAR_4 = FUNC_5(sizeof(__le64), VAR_13, VAR_2 + 1,
        FUNC_7(VAR_12->keys[0]), &VAR_14);
 if (VAR_4) {
  FUNC_13(VAR_1->info, VAR_9);
  return VAR_4;
 }

 if (VAR_3 < FUNC_7(VAR_12->keys[0])) {
  FUNC_13(VAR_1->info, VAR_9);
  VAR_1->nodes[1] = VAR_8;
 } else {
  FUNC_13(VAR_1->info, VAR_8);
  VAR_1->nodes[1] = VAR_9;
 }

 return 0;
}
