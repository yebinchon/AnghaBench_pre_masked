
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_config ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char const*,char const*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,char const*) ;
 int FUNC_7 (int **,int *) ;

__attribute__((used)) static int FUNC_8(git_repository *VAR_1, const char *VAR_2, const char *VAR_3, const char *VAR_4)
{
 git_config *VAR_5;
 git_buf VAR_6 = VAR_0, VAR_7 = VAR_0;
 int VAR_8;

 FUNC_0(VAR_1 && VAR_2);

 if ((VAR_8 = FUNC_2(VAR_2)) < 0)
  return VAR_8;

 if ((VAR_8 = FUNC_7(&VAR_5, VAR_1)) < 0)
  return VAR_8;

 if ((VAR_8 = FUNC_4(&VAR_6, VAR_3, VAR_2)) < 0)
  return VAR_8;

 if (VAR_4) {
  if ((VAR_8 = FUNC_1(&VAR_7, VAR_4)) < 0)
   goto cleanup;

  VAR_8 = FUNC_6(VAR_5, VAR_6.ptr, VAR_4);
 } else {
  VAR_8 = FUNC_5(VAR_5, VAR_6.ptr);
 }

cleanup:
 FUNC_3(&VAR_7);
 FUNC_3(&VAR_6);

 return VAR_8;
}
