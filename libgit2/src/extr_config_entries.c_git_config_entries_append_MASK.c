
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int name; } ;
typedef TYPE_1__ git_config_entry ;
struct TYPE_13__ {TYPE_3__* list; int map; } ;
typedef TYPE_2__ git_config_entries ;
struct TYPE_14__ {TYPE_1__* entry; struct TYPE_14__* last; } ;
typedef TYPE_3__ config_entry_list ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__**,TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int,int) ;
 TYPE_3__* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;

int FUNC_5(git_config_entries *VAR_0, git_config_entry *VAR_1)
{
 config_entry_list *VAR_2, *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_2(1, sizeof(config_entry_list));
 FUNC_0(VAR_3);
 VAR_3->entry = VAR_1;

 if ((VAR_2 = FUNC_3(VAR_0->map, VAR_1->name)) == ((void*)0)) {
  VAR_3->last = VAR_3;

  VAR_4 = FUNC_4(VAR_0->map, VAR_1->name, VAR_3);
 } else {
  FUNC_1(&VAR_2, VAR_3);
 }

 VAR_3 = FUNC_2(1, sizeof(config_entry_list));
 FUNC_0(VAR_3);
 VAR_3->entry = VAR_1;
 FUNC_1(&VAR_0->list, VAR_3);

 return VAR_4;
}
