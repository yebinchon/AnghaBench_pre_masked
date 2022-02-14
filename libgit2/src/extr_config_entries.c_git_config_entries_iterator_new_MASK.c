
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int free; int next; } ;
typedef TYPE_1__ git_config_iterator ;
struct TYPE_10__ {int list; } ;
typedef TYPE_2__ git_config_entries ;
struct TYPE_11__ {TYPE_1__ parent; TYPE_2__* entries; int head; } ;
typedef TYPE_3__ config_entries_iterator ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(git_config_iterator **VAR_2, git_config_entries *VAR_3)
{
 config_entries_iterator *VAR_4;

 VAR_4 = FUNC_1(1, sizeof(config_entries_iterator));
 FUNC_0(VAR_4);
 VAR_4->parent.next = VAR_1;
 VAR_4->parent.free = VAR_0;
 VAR_4->head = VAR_3->list;
 VAR_4->entries = VAR_3;

 FUNC_2(VAR_3);
 *VAR_2 = &VAR_4->parent;

 return 0;
}
