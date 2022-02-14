
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct string_list_item {struct branch_info* util; int string; } ;
struct show_info {int width; int any_rebase; int list; struct ref_states* states; } ;
struct ref_states {TYPE_2__* remote; } ;
struct TYPE_3__ {int nr; } ;
struct branch_info {scalar_t__ rebase; int remote_name; TYPE_1__ merge; } ;
struct TYPE_4__ {int name; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 struct string_list_item* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct string_list_item *VAR_0, void *VAR_1)
{
 struct show_info *VAR_2 = VAR_1;
 struct ref_states *VAR_3 = VAR_2->states;
 struct branch_info *VAR_4 = VAR_0->util;
 struct string_list_item *VAR_5;
 int VAR_6;

 if (!VAR_4->merge.nr || !VAR_4->remote_name ||
     FUNC_0(VAR_3->remote->name, VAR_4->remote_name))
  return 0;
 if ((VAR_6 = FUNC_2(VAR_0->string)) > VAR_2->width)
  VAR_2->width = VAR_6;
 if (VAR_4->rebase)
  VAR_2->any_rebase = 1;

 VAR_5 = FUNC_1(VAR_2->list, VAR_0->string);
 VAR_5->util = VAR_4;

 return 0;
}
