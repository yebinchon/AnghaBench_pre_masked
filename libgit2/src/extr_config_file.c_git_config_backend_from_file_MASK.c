
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_config_backend ;
struct TYPE_8__ {int free; int unlock; int lock; int snapshot; int iterator; int del_multivar; int del; int set_multivar; int set; int get; int open; int version; } ;
struct TYPE_7__ {int includes; TYPE_3__* path; } ;
struct TYPE_9__ {TYPE_2__ parent; TYPE_1__ file; int values_mutex; } ;
typedef TYPE_3__ config_file_backend ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
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
 int VAR_11 ;
 TYPE_3__* FUNC_1 (int,int) ;
 TYPE_3__* FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(git_config_backend **VAR_12, const char *VAR_13)
{
 config_file_backend *VAR_14;

 VAR_14 = FUNC_1(1, sizeof(config_file_backend));
 FUNC_0(VAR_14);

 VAR_14->parent.version = VAR_0;
 FUNC_4(&VAR_14->values_mutex);

 VAR_14->file.path = FUNC_2(VAR_13);
 FUNC_0(VAR_14->file.path);
 FUNC_3(VAR_14->file.includes);

 VAR_14->parent.open = VAR_7;
 VAR_14->parent.get = VAR_4;
 VAR_14->parent.set = VAR_8;
 VAR_14->parent.set_multivar = VAR_9;
 VAR_14->parent.del = VAR_1;
 VAR_14->parent.del_multivar = VAR_2;
 VAR_14->parent.iterator = VAR_5;
 VAR_14->parent.snapshot = VAR_10;
 VAR_14->parent.lock = VAR_6;
 VAR_14->parent.unlock = VAR_11;
 VAR_14->parent.free = VAR_3;

 *VAR_12 = (git_config_backend *)VAR_14;

 return 0;
}
