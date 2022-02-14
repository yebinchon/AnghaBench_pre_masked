
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int git_vector ;
typedef int git_path_diriter ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 char* FUNC_2 (char const*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const**,size_t*,int *) ;
 int FUNC_5 (int *,char const*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;

int FUNC_8(
 git_vector *VAR_2,
 const char *VAR_3,
 size_t VAR_4,
 uint32_t VAR_5)
{
 git_path_diriter VAR_6 = VAR_1;
 const char *VAR_7;
 size_t VAR_8;
 char *VAR_9;
 int VAR_10;

 FUNC_1(VAR_2 && VAR_3);

 if ((VAR_10 = FUNC_5(&VAR_6, VAR_3, VAR_5)) < 0)
  return VAR_10;

 while ((VAR_10 = FUNC_6(&VAR_6)) == 0) {
  if ((VAR_10 = FUNC_4(&VAR_7, &VAR_8, &VAR_6)) < 0)
   break;

  FUNC_1(VAR_8 > VAR_4);

  VAR_9 = FUNC_2(VAR_7 + VAR_4, VAR_8 - VAR_4);
  FUNC_0(VAR_9);

  if ((VAR_10 = FUNC_7(VAR_2, VAR_9)) < 0)
   break;
 }

 if (VAR_10 == VAR_0)
  VAR_10 = 0;

 FUNC_3(&VAR_6);
 return VAR_10;
}
