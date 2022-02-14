
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_oid ;
typedef int git_odb_stream ;
typedef int git_odb ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int **,int *,size_t,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,void const*,size_t) ;
 int FUNC_5 (int **,int *) ;

int FUNC_6(
 git_oid *VAR_1, git_repository *VAR_2, const void *VAR_3, size_t VAR_4)
{
 int VAR_5;
 git_odb *VAR_6;
 git_odb_stream *VAR_7;

 FUNC_0(VAR_1 && VAR_2);

 if ((VAR_5 = FUNC_5(&VAR_6, VAR_2)) < 0 ||
  (VAR_5 = FUNC_1(&VAR_7, VAR_6, VAR_4, VAR_0)) < 0)
  return VAR_5;

 if ((VAR_5 = FUNC_4(VAR_7, VAR_3, VAR_4)) == 0)
  VAR_5 = FUNC_2(VAR_1, VAR_7);

 FUNC_3(VAR_7);
 return VAR_5;
}
