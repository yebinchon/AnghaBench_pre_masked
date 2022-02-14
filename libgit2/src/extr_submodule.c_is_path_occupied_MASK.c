
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_index ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (int *,int *,char const*) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int **,int *) ;

__attribute__((used)) static int FUNC_7(bool *VAR_3, git_repository *VAR_4, const char *VAR_5)
{
 int VAR_6 = 0;
 git_index *VAR_7;
 git_buf VAR_8 = VAR_0;
 *VAR_3 = 0;

 if ((VAR_6 = FUNC_6(&VAR_7, VAR_4)) < 0)
  goto out;

 if ((VAR_6 = FUNC_3(((void*)0), VAR_7, VAR_5)) != VAR_1) {
  if (!VAR_6) {
   FUNC_2(VAR_2,
    "File '%s' already exists in the index", VAR_5);
   *VAR_3 = 1;
  }
  goto out;
 }

 if ((VAR_6 = FUNC_1(&VAR_8, VAR_5)) < 0)
  goto out;

 if ((VAR_6 = FUNC_5(&VAR_8)) < 0)
  goto out;

 if ((VAR_6 = FUNC_4(((void*)0), VAR_7, VAR_8.ptr)) != VAR_1) {
  if (!VAR_6) {
   FUNC_2(VAR_2,
    "Directory '%s' already exists in the index", VAR_5);
   *VAR_3 = 1;
  }
  goto out;
 }

 VAR_6 = 0;

out:
 FUNC_0(&VAR_8);
 return VAR_6;
}
