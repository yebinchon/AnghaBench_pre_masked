
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_9__ {char* path; int id; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_10__ {int id; scalar_t__ path; } ;
typedef TYPE_2__ git_diff_file ;
typedef int entry ;
struct TYPE_11__ {int index; } ;
typedef TYPE_3__ checkout_data ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,struct stat*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_4(
 checkout_data *VAR_0,
 const git_diff_file *VAR_1,
 struct stat *VAR_2)
{
 git_index_entry VAR_3;

 if (!VAR_0->index)
  return 0;

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.path = (char *)VAR_1->path;
 FUNC_1(&VAR_3, VAR_2, 1);
 FUNC_2(&VAR_3.id, &VAR_1->id);

 return FUNC_0(VAR_0->index, &VAR_3);
}
