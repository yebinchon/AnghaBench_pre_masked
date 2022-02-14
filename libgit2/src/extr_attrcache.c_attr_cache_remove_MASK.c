
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int * file; } ;
typedef TYPE_2__ git_attr_file_entry ;
struct TYPE_12__ {size_t source; TYPE_1__* entry; } ;
typedef TYPE_3__ git_attr_file ;
typedef int git_attr_cache ;
struct TYPE_10__ {int path; } ;


 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int *,TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(git_attr_cache *VAR_0, git_attr_file *VAR_1)
{
 int VAR_2 = 0;
 git_attr_file_entry *VAR_3;
 git_attr_file *VAR_4 = ((void*)0);

 if (!VAR_1)
  return 0;

 if ((VAR_2 = FUNC_1(VAR_0)) < 0)
  return VAR_2;

 if ((VAR_3 = FUNC_2(VAR_0, VAR_1->entry->path)) != ((void*)0))
  VAR_4 = FUNC_4(&VAR_3->file[VAR_1->source], VAR_1, ((void*)0));

 FUNC_3(VAR_0);

 if (VAR_4) {
  FUNC_0(VAR_4, ((void*)0));
  FUNC_5(VAR_4);
 }

 return VAR_2;
}
