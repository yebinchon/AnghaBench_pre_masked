
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cache_mp_write_session_ {scalar_t__ items_size; int items; TYPE_3__* parent_entry; } ;
struct cache_mp_data_item_ {size_t value_size; int * value; } ;
struct TYPE_5__ {scalar_t__ max_elemsize; } ;
struct TYPE_6__ {TYPE_2__ mp_params; TYPE_1__* params; } ;
struct TYPE_4__ {scalar_t__ entry_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct cache_mp_data_item_*,int ) ;
 int FUNC_1 (int (*) (struct cache_mp_write_session_*,char*,size_t)) ;
 int FUNC_2 (int (*) (struct cache_mp_write_session_*,char*,size_t)) ;
 int FUNC_3 (int) ;
 struct cache_mp_data_item_* FUNC_4 (int,int) ;
 int VAR_1 ;
 int * FUNC_5 (size_t) ;
 int FUNC_6 (int *,char*,size_t) ;

int
FUNC_7(struct cache_mp_write_session_ *VAR_2, char *VAR_3,
 size_t VAR_4)
{
 struct cache_mp_data_item_ *VAR_5;

 FUNC_1(FUNC_7);
 FUNC_3(VAR_2 != ((void*)0));
 FUNC_3(VAR_2->parent_entry != ((void*)0));
 FUNC_3(VAR_2->parent_entry->params->entry_type == VAR_0);

 if ((VAR_2->parent_entry->mp_params.max_elemsize > 0) &&
  (VAR_2->parent_entry->mp_params.max_elemsize == VAR_2->items_size)) {
  FUNC_2(FUNC_7);
  return (-1);
 }

 VAR_5 = FUNC_4(1,
  sizeof(*VAR_5));
 FUNC_3(VAR_5 != ((void*)0));

 VAR_5->value = FUNC_5(VAR_4);
 FUNC_3(VAR_5->value != ((void*)0));
 FUNC_6(VAR_5->value, VAR_3, VAR_4);
 VAR_5->value_size = VAR_4;

 FUNC_0(&VAR_2->items, VAR_5, VAR_1);
 ++VAR_2->items_size;

 FUNC_2(FUNC_7);
 return (0);
}
