
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_config_backend ;
struct TYPE_6__ {int readonly; int free; int snapshot; int unlock; int lock; int iterator; int del_multivar; int del; int set_multivar; int set; int get; int open; int version; } ;
struct TYPE_7__ {TYPE_1__ parent; int entries; int cfg; } ;
typedef TYPE_2__ config_memory_backend ;


 int VAR_0 ;
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
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,char const*,size_t) ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;

int FUNC_6(git_config_backend **VAR_12, const char *VAR_13, size_t VAR_14)
{
 config_memory_backend *VAR_15;

 VAR_15 = FUNC_1(1, sizeof(config_memory_backend));
 FUNC_0(VAR_15);

 if (FUNC_5(&VAR_15->entries) < 0) {
  FUNC_2(VAR_15);
  return -1;
 }

 if (FUNC_3(&VAR_15->cfg, VAR_13, VAR_14) < 0) {
  FUNC_4(VAR_15->entries);
  FUNC_2(VAR_15);
  return -1;
 }

 VAR_15->parent.version = VAR_0;
 VAR_15->parent.readonly = 1;
 VAR_15->parent.open = VAR_7;
 VAR_15->parent.get = VAR_4;
 VAR_15->parent.set = VAR_8;
 VAR_15->parent.set_multivar = VAR_9;
 VAR_15->parent.del = VAR_1;
 VAR_15->parent.del_multivar = VAR_2;
 VAR_15->parent.iterator = VAR_5;
 VAR_15->parent.lock = VAR_6;
 VAR_15->parent.unlock = VAR_10;
 VAR_15->parent.snapshot = VAR_11;
 VAR_15->parent.free = VAR_3;

 *VAR_12 = (git_config_backend *)VAR_15;

 return 0;
}
