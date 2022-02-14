
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int repo; int index; } ;
typedef TYPE_1__ index_reader ;
typedef int git_reader ;
typedef int git_oid ;
struct TYPE_5__ {int mode; int id; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_filemode_t ;
typedef int git_buf ;
typedef int git_blob ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int *) ;
 TYPE_2__* FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(
 git_buf *VAR_1,
 git_oid *VAR_2,
 git_filemode_t *VAR_3,
 git_reader *VAR_4,
 const char *VAR_5)
{
 index_reader *VAR_6 = (index_reader *)VAR_4;
 const git_index_entry *VAR_7;
 git_blob *VAR_8;
 int VAR_9;

 if ((VAR_7 = FUNC_3(VAR_6->index, VAR_5, 0)) == ((void*)0))
  return VAR_0;

 if ((VAR_9 = FUNC_2(&VAR_8, VAR_6->repo, &VAR_7->id)) < 0)
  goto done;

 if (VAR_2)
  FUNC_4(VAR_2, &VAR_7->id);

 if (VAR_3)
  *VAR_3 = VAR_7->mode;

 VAR_9 = FUNC_0(VAR_1, VAR_8);

done:
 FUNC_1(VAR_8);
 return VAR_9;
}
