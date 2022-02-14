
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* last; struct TYPE_4__* next; } ;
typedef TYPE_1__ config_entry_list ;



__attribute__((used)) static void FUNC_0(config_entry_list **VAR_0, config_entry_list *VAR_1)
{
 if (*VAR_0)
  (*VAR_0)->last->next = VAR_1;
 else
  *VAR_0 = VAR_1;
 (*VAR_0)->last = VAR_1;
}
