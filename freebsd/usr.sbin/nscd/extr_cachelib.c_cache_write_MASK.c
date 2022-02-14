
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct cache_policy_item_ {char const* key; size_t key_size; char const creation_time; struct cache_policy_item_* connected_item; } ;
struct cache_policy_ {int (* add_item_func ) (struct cache_policy_*,struct cache_policy_item_*) ;struct cache_policy_item_* (* create_item_func ) () ;} ;
struct cache_ht_item_data_ {char* key; size_t key_size; int confidence; size_t value_size; char const* value; struct cache_policy_item_* fifo_policy_item; } ;
struct cache_ht_item_ {int dummy; } ;
struct cache_entry_ {TYPE_1__* params; } ;
struct TYPE_4__ {int confidence_threshold; scalar_t__ max_elemsize; } ;
struct cache_common_entry_ {int policies_size; scalar_t__ items_size; struct cache_policy_** policies; TYPE_2__ common_params; int (* get_time_func ) (char const*) ;int items; } ;
typedef scalar_t__ hashtable_index_t ;
struct TYPE_3__ {scalar_t__ entry_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,struct cache_ht_item_data_*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct cache_ht_item_data_* FUNC_2 (int ,struct cache_ht_item_*,struct cache_ht_item_data_*) ;
 int FUNC_3 (int ,struct cache_ht_item_*,struct cache_ht_item_data_*) ;
 struct cache_ht_item_* FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int (*) (struct cache_entry_*,char const*,size_t,char const*,size_t)) ;
 int FUNC_6 (int (*) (struct cache_entry_*,char const*,size_t,char const*,size_t)) ;
 int FUNC_7 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (struct cache_common_entry_*,struct cache_policy_*,struct cache_policy_*,int ) ;
 int FUNC_9 (char const*) ;
 void* FUNC_10 (size_t) ;
 scalar_t__ FUNC_11 (char const*,char const*,size_t) ;
 int FUNC_12 (char const*,char const*,int) ;
 int FUNC_13 (struct cache_ht_item_data_*,int ,int) ;
 struct cache_policy_item_* FUNC_14 () ;
 int FUNC_15 (char const*) ;
 struct cache_policy_item_* FUNC_16 () ;
 int FUNC_17 (struct cache_policy_*,struct cache_policy_item_*) ;
 int FUNC_18 (struct cache_policy_*,struct cache_policy_item_*) ;

int
FUNC_19(struct cache_entry_ *VAR_3, const char *VAR_4, size_t VAR_5,
     char const *VAR_6, size_t VAR_7)
{
 struct cache_common_entry_ *VAR_8;
 struct cache_ht_item_data_ VAR_9, *VAR_10;
 struct cache_ht_item_ *VAR_11;
 hashtable_index_t VAR_12;

 struct cache_policy_ *VAR_13, *VAR_14;
 struct cache_policy_item_ *VAR_15;
 struct cache_policy_item_ *VAR_16;

 FUNC_5(FUNC_19);
 FUNC_7(VAR_3 != ((void*)0));
 FUNC_7(VAR_4 != ((void*)0));
 FUNC_7(VAR_6 != ((void*)0));
 FUNC_7(VAR_3->params->entry_type == VAR_0);

 VAR_8 = (struct cache_common_entry_ *)VAR_3;

 FUNC_13(&VAR_9, 0, sizeof(struct cache_ht_item_data_));

 VAR_9.key = (char *)VAR_4;
 VAR_9.key_size = VAR_5;

 VAR_12 = FUNC_0(VAR_2, &VAR_8->items,
  &VAR_9);
 FUNC_7(VAR_12 < FUNC_1(&VAR_8->items));

 VAR_11 = FUNC_4(&(VAR_8->items), VAR_12);
 VAR_10 = FUNC_2(VAR_2, VAR_11, &VAR_9);
 if (VAR_10 != ((void*)0)) {
  if (VAR_10->confidence < VAR_8->common_params.confidence_threshold) {

   if ((VAR_10->value_size == VAR_7) &&
       (FUNC_11(VAR_10->value, VAR_6, VAR_7) == 0)) {

    VAR_10->confidence++;
   } else {

    FUNC_9(VAR_9.value);
    VAR_9.value = FUNC_10(VAR_7);
    FUNC_7(VAR_9.value != ((void*)0));
    FUNC_12(VAR_9.value, VAR_6, VAR_7);
    VAR_9.value_size = VAR_7;
    VAR_10->confidence = 1;
   }
   FUNC_6(FUNC_19);
   return (0);
  }
  FUNC_6(FUNC_19);
  return (-1);
 }

 VAR_9.key = FUNC_10(VAR_5);
 FUNC_12(VAR_9.key, VAR_4, VAR_5);

 VAR_9.value = FUNC_10(VAR_7);
 FUNC_7(VAR_9.value != ((void*)0));

 FUNC_12(VAR_9.value, VAR_6, VAR_7);
 VAR_9.value_size = VAR_7;

 VAR_9.confidence = 1;

 VAR_15 = VAR_8->policies[0]->create_item_func();
 VAR_15->key = VAR_9.key;
 VAR_15->key_size = VAR_9.key_size;
 VAR_8->get_time_func(&VAR_15->creation_time);

 if (VAR_8->policies_size > 1) {
  VAR_16 =
   VAR_8->policies[1]->create_item_func();
  FUNC_12(&VAR_16->creation_time,
   &VAR_15->creation_time,
   sizeof(struct timeval));
  VAR_16->key = VAR_15->key;
  VAR_16->key_size = VAR_15->key_size;

  VAR_16->connected_item = VAR_15;
  VAR_15->connected_item = VAR_16;
 }

 VAR_9.fifo_policy_item = VAR_15;

 VAR_8->policies[0]->add_item_func(VAR_8->policies[0],
  VAR_15);
 if (VAR_8->policies_size > 1)
  VAR_8->policies[1]->add_item_func(
   VAR_8->policies[1], VAR_16);

 FUNC_3(VAR_2, VAR_11, &VAR_9);
 ++VAR_8->items_size;

 if ((VAR_8->common_params.max_elemsize != 0) &&
  (VAR_8->items_size >
  VAR_8->common_params.max_elemsize)) {
  if (VAR_8->policies_size > 1) {
   VAR_13 = VAR_8->policies[1];
   VAR_14 = VAR_8->policies[0];
  } else {
   VAR_13 = VAR_8->policies[0];
   VAR_14 = ((void*)0);
  }

  FUNC_8(VAR_8, VAR_13, VAR_14,
   VAR_1);
 }

 FUNC_6(FUNC_19);
 return (0);
}
