
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct shadow_spine {int dummy; } ;
struct dm_btree_value_type {int dummy; } ;
struct dm_btree_info {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct btree_node {TYPE_1__ header; } ;
typedef int dm_block_t ;
typedef int __le64 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct btree_node* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct btree_node*,int ) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (struct shadow_spine*,struct dm_btree_info*,struct dm_btree_value_type*,int ) ;
 int FUNC_7 (struct shadow_spine*) ;
 scalar_t__ FUNC_8 (struct shadow_spine*) ;
 int FUNC_9 (struct shadow_spine*) ;
 int FUNC_10 (struct shadow_spine*,int ,struct dm_btree_value_type*) ;
 int FUNC_11 (struct btree_node*,int) ;
 int FUNC_12 (struct btree_node*,int) ;

__attribute__((used)) static int FUNC_13(struct shadow_spine *VAR_1, struct dm_btree_info *VAR_2,
     struct dm_btree_value_type *VAR_3, dm_block_t VAR_4,
     uint64_t VAR_5, int *VAR_6)
{
 int VAR_7 = *VAR_6, VAR_8;
 struct btree_node *VAR_9;

 for (;;) {
  VAR_8 = FUNC_10(VAR_1, VAR_4, VAR_3);
  if (VAR_8 < 0)
   break;






  if (FUNC_8(VAR_1)) {
   __le64 VAR_10 = FUNC_0(FUNC_2(FUNC_7(VAR_1)));
   FUNC_5(FUNC_12(FUNC_1(FUNC_9(VAR_1)), VAR_7),
          &VAR_10, sizeof(__le64));
  }

  VAR_9 = FUNC_1(FUNC_7(VAR_1));

  if (FUNC_3(VAR_9->header.flags) & VAR_0) {
   *VAR_6 = FUNC_4(VAR_9, VAR_5);
   return 0;
  }

  VAR_8 = FUNC_6(VAR_1, VAR_2, VAR_3, VAR_5);
  if (VAR_8)
   break;

  VAR_9 = FUNC_1(FUNC_7(VAR_1));
  if (FUNC_3(VAR_9->header.flags) & VAR_0) {
   *VAR_6 = FUNC_4(VAR_9, VAR_5);
   return 0;
  }

  VAR_7 = FUNC_4(VAR_9, VAR_5);






  VAR_4 = FUNC_11(VAR_9, VAR_7);
 }

 return VAR_8;
}
