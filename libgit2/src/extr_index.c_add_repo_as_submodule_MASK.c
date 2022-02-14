
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef int git_repository ;
typedef int git_reference ;
struct TYPE_12__ {int mode; int id; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_13__ {int distrust_filemode; } ;
typedef TYPE_2__ git_index ;
struct TYPE_14__ {int ptr; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,char const*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*,struct stat*,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int *) ;
 int FUNC_10 (int **,int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (TYPE_1__**,int *,char const*,struct stat*,int) ;
 int FUNC_13 (int ,struct stat*) ;

__attribute__((used)) static int FUNC_14(git_index_entry **VAR_3, git_index *VAR_4, const char *VAR_5)
{
 git_repository *VAR_6;
 git_buf VAR_7 = VAR_0;
 git_repository *VAR_8 = FUNC_0(VAR_4);
 git_reference *VAR_9;
 git_index_entry *VAR_10;
 struct stat VAR_11;
 int VAR_12;

 if ((VAR_12 = FUNC_2(&VAR_7, FUNC_11(VAR_8), VAR_5)) < 0)
  return VAR_12;

 if ((VAR_12 = FUNC_13(VAR_7.ptr, &VAR_11)) < 0) {
  FUNC_3(VAR_1, "failed to stat repository dir");
  return -1;
 }

 if (FUNC_12(&VAR_10, FUNC_0(VAR_4), VAR_5, &VAR_11, 1) < 0)
  return -1;

 FUNC_4(VAR_10, &VAR_11, !VAR_4->distrust_filemode);

 if ((VAR_12 = FUNC_10(&VAR_6, VAR_7.ptr)) < 0)
  return VAR_12;

 if ((VAR_12 = FUNC_9(&VAR_9, VAR_6)) < 0)
  return VAR_12;

 FUNC_5(&VAR_10->id, FUNC_7(VAR_9));
 VAR_10->mode = VAR_2;

 FUNC_6(VAR_9);
 FUNC_8(VAR_6);
 FUNC_1(&VAR_7);

 *VAR_3 = VAR_10;
 return 0;
}
