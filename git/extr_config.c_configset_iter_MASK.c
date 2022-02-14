
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct string_list {TYPE_2__* items; } ;
struct configset_list {int nr; TYPE_1__* items; } ;
struct config_set_element {int key; struct string_list value_list; } ;
struct config_set {struct configset_list list; } ;
typedef scalar_t__ (* config_fn_t ) (int ,int ,void*) ;
struct TYPE_6__ {int linenr; int filename; } ;
struct TYPE_5__ {int string; TYPE_3__* util; } ;
struct TYPE_4__ {int value_index; struct config_set_element* e; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct config_set *VAR_1, config_fn_t VAR_2, void *VAR_3)
{
 int VAR_4, VAR_5;
 struct string_list *VAR_6;
 struct config_set_element *VAR_7;
 struct configset_list *VAR_8 = &VAR_1->list;

 for (VAR_4 = 0; VAR_4 < VAR_8->nr; VAR_4++) {
  VAR_7 = VAR_8->items[VAR_4].e;
  VAR_5 = VAR_8->items[VAR_4].value_index;
  VAR_6 = &VAR_7->value_list;

  VAR_0 = VAR_6->items[VAR_5].util;

  if (VAR_2(VAR_7->key, VAR_6->items[VAR_5].string, VAR_3) < 0)
   FUNC_0(VAR_7->key,
           VAR_0->filename,
           VAR_0->linenr);

  VAR_0 = ((void*)0);
 }
}
