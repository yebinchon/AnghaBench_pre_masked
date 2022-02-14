
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_attr_file_source ;
typedef int git_attr_file_entry ;
struct TYPE_7__ {int source; int * entry; int pool; int lock; } ;
typedef TYPE_1__ git_attr_file ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

int FUNC_7(
 git_attr_file **VAR_1,
 git_attr_file_entry *VAR_2,
 git_attr_file_source VAR_3)
{
 git_attr_file *VAR_4 = FUNC_2(1, sizeof(git_attr_file));
 FUNC_0(VAR_4);

 if (FUNC_5(&VAR_4->lock) < 0) {
  FUNC_4(VAR_0, "failed to initialize lock");
  FUNC_3(VAR_4);
  return -1;
 }

 FUNC_6(&VAR_4->pool, 1);
 FUNC_1(VAR_4);
 VAR_4->entry = VAR_2;
 VAR_4->source = VAR_3;
 *VAR_1 = VAR_4;
 return 0;
}
