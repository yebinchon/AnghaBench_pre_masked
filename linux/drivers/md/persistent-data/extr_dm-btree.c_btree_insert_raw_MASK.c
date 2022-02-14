
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct shadow_spine {int dummy; } ;
struct dm_btree_value_type {int dummy; } ;
struct TYPE_2__ {scalar_t__ nr_entries; scalar_t__ max_entries; int flags; } ;
struct btree_node {void** keys; TYPE_1__ header; } ;
typedef int dm_block_t ;
typedef void* __le64 ;


 int VAR_0 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (struct shadow_spine*,scalar_t__) ;
 int FUNC_2 (struct shadow_spine*,int,scalar_t__) ;
 void* FUNC_3 (scalar_t__) ;
 struct btree_node* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (void*) ;
 int FUNC_8 (struct btree_node*,scalar_t__) ;
 int FUNC_9 (int ,void**,int) ;
 int FUNC_10 (struct shadow_spine*) ;
 scalar_t__ FUNC_11 (struct shadow_spine*) ;
 int FUNC_12 (struct shadow_spine*) ;
 int FUNC_13 (struct shadow_spine*,int ,struct dm_btree_value_type*) ;
 int FUNC_14 (struct btree_node*,int) ;
 int FUNC_15 (struct btree_node*,int) ;

__attribute__((used)) static int FUNC_16(struct shadow_spine *VAR_1, dm_block_t VAR_2,
       struct dm_btree_value_type *VAR_3,
       uint64_t VAR_4, unsigned *VAR_5)
{
 int VAR_6, VAR_7 = *VAR_5, VAR_8 = 1;
 struct btree_node *VAR_9;

 for (;;) {
  VAR_6 = FUNC_13(VAR_1, VAR_2, VAR_3);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_9 = FUNC_4(FUNC_10(VAR_1));






  if (FUNC_11(VAR_1) && VAR_7 >= 0) {
   __le64 VAR_10 = FUNC_3(FUNC_5(FUNC_10(VAR_1)));

   FUNC_0(&VAR_10);
   FUNC_9(FUNC_15(FUNC_4(FUNC_12(VAR_1)), VAR_7),
        &VAR_10, sizeof(__le64));
  }

  VAR_9 = FUNC_4(FUNC_10(VAR_1));

  if (VAR_9->header.nr_entries == VAR_9->header.max_entries) {
   if (VAR_8)
    VAR_6 = FUNC_1(VAR_1, VAR_4);
   else
    VAR_6 = FUNC_2(VAR_1, VAR_7, VAR_4);

   if (VAR_6 < 0)
    return VAR_6;
  }

  VAR_9 = FUNC_4(FUNC_10(VAR_1));

  VAR_7 = FUNC_8(VAR_9, VAR_4);

  if (FUNC_6(VAR_9->header.flags) & VAR_0)
   break;

  if (VAR_7 < 0) {

   VAR_9->keys[0] = FUNC_3(VAR_4);
   VAR_7 = 0;
  }

  VAR_2 = FUNC_14(VAR_9, VAR_7);
  VAR_8 = 0;
 }

 if (VAR_7 < 0 || FUNC_7(VAR_9->keys[VAR_7]) != VAR_4)
  VAR_7++;

 *VAR_5 = VAR_7;
 return 0;
}
