
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct string_list_item {struct key_value_info* util; } ;
struct key_value_info {int linenr; int scope; int origin_type; int * filename; } ;
struct configset_list_item {scalar_t__ value_index; struct config_set_element* e; } ;
struct TYPE_6__ {scalar_t__ nr; } ;
struct config_set_element {TYPE_2__ value_list; int ent; int key; } ;
struct TYPE_5__ {scalar_t__ nr; struct configset_list_item* items; int alloc; } ;
struct config_set {TYPE_1__ list; int config_hash; } ;
struct TYPE_7__ {int linenr; int origin_type; scalar_t__ name; } ;


 int FUNC_0 (struct configset_list_item*,scalar_t__,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 struct config_set_element* FUNC_2 (struct config_set*,char const*) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char const*) ;
 struct string_list_item* FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int * FUNC_8 (scalar_t__) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static int FUNC_12(struct config_set *VAR_3, const char *VAR_4, const char *VAR_5)
{
 struct config_set_element *VAR_6;
 struct string_list_item *VAR_7;
 struct configset_list_item *VAR_8;
 struct key_value_info *VAR_9 = FUNC_9(sizeof(*VAR_9));

 VAR_6 = FUNC_2(VAR_3, VAR_4);




 if (!VAR_6) {
  VAR_6 = FUNC_9(sizeof(*VAR_6));
  FUNC_4(&VAR_6->ent, FUNC_5(VAR_4));
  VAR_6->key = FUNC_10(VAR_4);
  FUNC_7(&VAR_6->value_list, 1);
  FUNC_3(&VAR_3->config_hash, &VAR_6->ent);
 }
 VAR_7 = FUNC_6(&VAR_6->value_list, FUNC_11(VAR_5));

 FUNC_0(VAR_3->list.items, VAR_3->list.nr + 1, VAR_3->list.alloc);
 VAR_8 = &VAR_3->list.items[VAR_3->list.nr++];
 VAR_8->e = VAR_6;
 VAR_8->value_index = VAR_6->value_list.nr - 1;

 if (!VAR_1)
  FUNC_1("configset_add_value has no source");
 if (VAR_1->name) {
  VAR_9->filename = FUNC_8(VAR_1->name);
  VAR_9->linenr = VAR_1->linenr;
  VAR_9->origin_type = VAR_1->origin_type;
 } else {

  VAR_9->filename = ((void*)0);
  VAR_9->linenr = -1;
  VAR_9->origin_type = VAR_0;
 }
 VAR_9->scope = VAR_2;
 VAR_7->util = VAR_9;

 return 0;
}
