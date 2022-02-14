
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct shadow_spine {TYPE_3__* info; } ;
struct dm_block {int dummy; } ;
struct TYPE_6__ {void* value_size; void* max_entries; void* nr_entries; void* flags; } ;
struct btree_node {int * keys; TYPE_2__ header; } ;
typedef int __le64 ;
struct TYPE_5__ {int size; } ;
struct TYPE_7__ {int tm; TYPE_1__ value_type; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 struct btree_node* FUNC_4 (struct dm_block*) ;
 int FUNC_5 (struct dm_block*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 unsigned int FUNC_8 (void*) ;
 int FUNC_9 (int *,int *,unsigned int) ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (TYPE_3__*,struct dm_block**) ;
 struct dm_block* FUNC_12 (struct shadow_spine*) ;
 int FUNC_13 (TYPE_3__*,struct dm_block*) ;
 int * FUNC_14 (struct btree_node*,int) ;

__attribute__((used)) static int FUNC_15(struct shadow_spine *VAR_1, uint64_t VAR_2)
{
 int VAR_3;
 size_t VAR_4;
 unsigned VAR_5, VAR_6;
 struct dm_block *VAR_7, *VAR_8, *VAR_9;
 struct btree_node *VAR_10, *VAR_11, *VAR_12;
 __le64 VAR_13;

 VAR_9 = FUNC_12(VAR_1);

 VAR_10 = FUNC_4(VAR_9);
 VAR_4 = FUNC_8(VAR_10->header.flags) & VAR_0 ?
  sizeof(__le64) : VAR_1->info->value_type.size;


 VAR_3 = FUNC_11(VAR_1->info, &VAR_7);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_11 = FUNC_4(VAR_7);
 VAR_5 = FUNC_8(VAR_10->header.nr_entries) / 2;

 VAR_11->header.flags = VAR_10->header.flags;
 VAR_11->header.nr_entries = FUNC_2(VAR_5);
 VAR_11->header.max_entries = VAR_10->header.max_entries;
 VAR_11->header.value_size = VAR_10->header.value_size;
 FUNC_9(VAR_11->keys, VAR_10->keys, VAR_5 * sizeof(VAR_10->keys[0]));
 FUNC_9(FUNC_14(VAR_11, 0), FUNC_14(VAR_10, 0), VAR_5 * VAR_4);


 VAR_3 = FUNC_11(VAR_1->info, &VAR_8);
 if (VAR_3 < 0) {
  FUNC_13(VAR_1->info, VAR_7);
  return VAR_3;
 }

 VAR_12 = FUNC_4(VAR_8);
 VAR_6 = FUNC_8(VAR_10->header.nr_entries) - VAR_5;

 VAR_12->header.flags = VAR_10->header.flags;
 VAR_12->header.nr_entries = FUNC_2(VAR_6);
 VAR_12->header.max_entries = VAR_10->header.max_entries;
 VAR_12->header.value_size = VAR_10->header.value_size;
 FUNC_9(VAR_12->keys, VAR_10->keys + VAR_5, VAR_6 * sizeof(VAR_10->keys[0]));
 FUNC_9(FUNC_14(VAR_12, 0), FUNC_14(VAR_10, VAR_5),
        VAR_6 * VAR_4);


 VAR_10->header.flags = FUNC_2(VAR_0);
 VAR_10->header.nr_entries = FUNC_2(2);
 VAR_10->header.max_entries = FUNC_2(
  FUNC_1(sizeof(__le64),
     FUNC_6(
      FUNC_7(VAR_1->info->tm))));
 VAR_10->header.value_size = FUNC_2(sizeof(__le64));

 VAR_13 = FUNC_3(FUNC_5(VAR_7));
 FUNC_0(&VAR_13);
 VAR_10->keys[0] = VAR_11->keys[0];
 FUNC_10(FUNC_14(VAR_10, 0), &VAR_13, sizeof(__le64));

 VAR_13 = FUNC_3(FUNC_5(VAR_8));
 FUNC_0(&VAR_13);
 VAR_10->keys[1] = VAR_12->keys[0];
 FUNC_10(FUNC_14(VAR_10, 1), &VAR_13, sizeof(__le64));

 FUNC_13(VAR_1->info, VAR_7);
 FUNC_13(VAR_1->info, VAR_8);
 return 0;
}
