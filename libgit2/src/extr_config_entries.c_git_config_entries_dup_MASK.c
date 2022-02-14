
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* list; } ;
typedef TYPE_1__ git_config_entries ;
struct TYPE_9__ {int entry; struct TYPE_9__* next; } ;
typedef TYPE_2__ config_entry_list ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**) ;

int FUNC_3(git_config_entries **VAR_0, git_config_entries *VAR_1)
{
 git_config_entries *VAR_2 = ((void*)0);
 config_entry_list *VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_2(&VAR_2)) < 0)
  goto out;

 for (VAR_3 = VAR_1->list; VAR_3; VAR_3 = VAR_3->next)
  if ((FUNC_0(VAR_2, VAR_3->entry)) < 0)
   goto out;

 *VAR_0 = VAR_2;
 VAR_2 = ((void*)0);

out:
 FUNC_1(VAR_2);
 return VAR_4;
}
