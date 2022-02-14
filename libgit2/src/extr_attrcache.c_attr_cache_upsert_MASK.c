
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int * file; } ;
typedef TYPE_2__ git_attr_file_entry ;
struct TYPE_14__ {size_t source; TYPE_1__* entry; } ;
typedef TYPE_3__ git_attr_file ;
typedef int git_attr_cache ;
struct TYPE_12__ {int path; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_7(git_attr_cache *VAR_0, git_attr_file *VAR_1)
{
 git_attr_file_entry *VAR_2;
 git_attr_file *VAR_3;

 if (FUNC_2(VAR_0) < 0)
  return -1;

 VAR_2 = FUNC_3(VAR_0, VAR_1->entry->path);

 FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_1);





 VAR_3 = FUNC_5(VAR_2->file[VAR_1->source], VAR_1);

 if (VAR_3) {
  FUNC_1(VAR_3, ((void*)0));
  FUNC_6(VAR_3);
 }

 FUNC_4(VAR_0);
 return 0;
}
