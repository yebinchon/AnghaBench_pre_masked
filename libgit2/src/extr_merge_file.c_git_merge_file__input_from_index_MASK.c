
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_odb_object ;
typedef int git_odb ;
struct TYPE_5__ {char* ptr; int size; int mode; int path; } ;
typedef TYPE_1__ git_merge_file_input ;
struct TYPE_6__ {int mode; int path; int id; } ;
typedef TYPE_2__ git_index_entry ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int *) ;

int FUNC_4(
 git_merge_file_input *VAR_0,
 git_odb_object **VAR_1,
 git_odb *VAR_2,
 const git_index_entry *VAR_3)
{
 int VAR_4 = 0;

 FUNC_0(VAR_0 && VAR_1 && VAR_2 && VAR_3);

 if ((VAR_4 = FUNC_3(VAR_1, VAR_2, &VAR_3->id)) < 0)
  goto done;

 VAR_0->path = VAR_3->path;
 VAR_0->mode = VAR_3->mode;
 VAR_0->ptr = (char *)FUNC_1(*VAR_1);
 VAR_0->size = FUNC_2(*VAR_1);

done:
 return VAR_4;
}
