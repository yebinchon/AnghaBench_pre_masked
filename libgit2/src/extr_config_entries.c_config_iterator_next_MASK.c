
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_config_iterator ;
typedef int git_config_entry ;
struct TYPE_4__ {TYPE_1__* head; } ;
typedef TYPE_2__ config_entries_iterator ;
struct TYPE_3__ {struct TYPE_3__* next; int * entry; } ;


 int VAR_0 ;

int FUNC_0(
 git_config_entry **VAR_1,
 git_config_iterator *VAR_2)
{
 config_entries_iterator *VAR_3 = (config_entries_iterator *) VAR_2;

 if (!VAR_3->head)
  return VAR_0;

 *VAR_1 = VAR_3->head->entry;
 VAR_3->head = VAR_3->head->next;

 return 0;
}
