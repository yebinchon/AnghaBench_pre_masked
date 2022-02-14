
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_oid ;
typedef int git_odb ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int *,int const*,size_t) ;
 int FUNC_1 (int **,int *) ;

__attribute__((used)) static int FUNC_2(
 int *VAR_2,
 git_repository *VAR_3,
 const git_oid *VAR_4,
 unsigned int VAR_5)
{
 size_t VAR_6 = VAR_5;
 git_odb *VAR_7;
 git_oid VAR_8;
 int VAR_9;

 if ((VAR_9 = FUNC_1(&VAR_7, VAR_3)) < 0)
  return VAR_9;

 while (VAR_6 < VAR_1) {
  if ((VAR_9 = FUNC_0(&VAR_8, VAR_7, VAR_4, VAR_6)) == 0) {
   *VAR_2 = (int) VAR_6;
   return 0;
  }


  if (VAR_9 != VAR_0)
   return VAR_9;


  VAR_6++;
 }


 *VAR_2 = VAR_1;

 return 0;
}
