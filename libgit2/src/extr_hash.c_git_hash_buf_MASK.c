
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_hash_ctx ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,void const*,size_t) ;

int FUNC_4(git_oid *VAR_0, const void *VAR_1, size_t VAR_2)
{
 git_hash_ctx VAR_3;
 int VAR_4 = 0;

 if (FUNC_1(&VAR_3) < 0)
  return -1;

 if ((VAR_4 = FUNC_3(&VAR_3, VAR_1, VAR_2)) >= 0)
  VAR_4 = FUNC_2(VAR_0, &VAR_3);

 FUNC_0(&VAR_3);

 return VAR_4;
}
