
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct merge_index_entry {int oid_str; int path; } ;
struct TYPE_4__ {int workdir; } ;
typedef TYPE_1__ git_repository ;
typedef int git_oid ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ,size_t*) ;

int FUNC_6(git_repository *VAR_2, const struct merge_index_entry VAR_3[], size_t VAR_4)
{
 size_t VAR_5 = 0, VAR_6;
 git_oid VAR_7, VAR_8;
 git_buf VAR_9 = VAR_0;

 FUNC_2(&VAR_9, VAR_2->workdir);
 FUNC_5(&VAR_9, 0, VAR_1, &VAR_5);

 if (VAR_5 != VAR_4)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  FUNC_0(&VAR_7, VAR_2, VAR_3[VAR_6].path);
  FUNC_4(&VAR_8, VAR_3[VAR_6].oid_str);

  if (FUNC_3(&VAR_7, &VAR_8) != 0)
   return 0;
 }

 FUNC_1(&VAR_9);

 return 1;
}
