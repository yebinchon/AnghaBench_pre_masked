
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_7__ {int path; } ;
typedef TYPE_1__ git_attr_file_entry ;
struct TYPE_8__ {int files; int pool; } ;
typedef TYPE_2__ git_attr_cache ;


 int FUNC_0 (TYPE_1__**,int ,char const*,int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(
 git_attr_file_entry **VAR_0, git_repository *VAR_1, const char *VAR_2)
{
 git_attr_cache *VAR_3 = FUNC_1(VAR_1);
 git_attr_file_entry *VAR_4 = ((void*)0);
 int VAR_5;

 if ((VAR_5 = FUNC_0(&VAR_4, FUNC_2(VAR_1),
            VAR_2, &VAR_3->pool)) < 0)
  return VAR_5;

 if ((VAR_5 = FUNC_3(VAR_3->files, VAR_4->path, VAR_4)) < 0)
  return VAR_5;

 *VAR_0 = VAR_4;
 return VAR_5;
}
