
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int readonly; int (* snapshot ) (TYPE_1__**,TYPE_1__*) ;int free; int unlock; int lock; int iterator; int del_multivar; int del; int set_multivar; int set; int get; int open; void* version; } ;
typedef TYPE_1__ git_config_backend ;
struct TYPE_8__ {TYPE_1__ parent; TYPE_1__* source; int values_mutex; } ;
typedef TYPE_2__ config_snapshot_backend ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;

int FUNC_3(git_config_backend **VAR_11, git_config_backend *VAR_12)
{
 config_snapshot_backend *VAR_13;

 VAR_13 = FUNC_1(1, sizeof(config_snapshot_backend));
 FUNC_0(VAR_13);

 VAR_13->parent.version = VAR_0;
 FUNC_2(&VAR_13->values_mutex);

 VAR_13->source = VAR_12;

 VAR_13->parent.readonly = 1;
 VAR_13->parent.version = VAR_0;
 VAR_13->parent.open = VAR_7;
 VAR_13->parent.get = VAR_4;
 VAR_13->parent.set = VAR_8;
 VAR_13->parent.set_multivar = VAR_9;
 VAR_13->parent.snapshot = FUNC_3;
 VAR_13->parent.del = VAR_1;
 VAR_13->parent.del_multivar = VAR_2;
 VAR_13->parent.iterator = VAR_5;
 VAR_13->parent.lock = VAR_6;
 VAR_13->parent.unlock = VAR_10;
 VAR_13->parent.free = VAR_3;

 *VAR_11 = &VAR_13->parent;

 return 0;
}
