
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_patch_parse_ctx ;
typedef int git_buf ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_4(char **VAR_1, git_patch_parse_ctx *VAR_2)
{
 git_buf VAR_3 = VAR_0;
 int VAR_4;

 if ((VAR_4 = FUNC_3(&VAR_3, VAR_2, FUNC_2(VAR_2))) < 0)
  goto out;
 *VAR_1 = FUNC_0(&VAR_3);

out:
 FUNC_1(&VAR_3);
 return VAR_4;
}
