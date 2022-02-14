
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; struct TYPE_7__* list; int map; } ;
typedef TYPE_1__ git_config_entries ;
typedef TYPE_1__ config_entry_list ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(git_config_entries *VAR_0)
{
 config_entry_list *VAR_1 = ((void*)0), *VAR_2;

 FUNC_2(VAR_0->map, VAR_1, FUNC_0(VAR_1));
 FUNC_3(VAR_0->map);

 VAR_1 = VAR_0->list;
 while (VAR_1 != ((void*)0)) {
  VAR_2 = VAR_1->next;
  FUNC_1(VAR_1);
  VAR_1 = VAR_2;
 }

 FUNC_1(VAR_0);
}
