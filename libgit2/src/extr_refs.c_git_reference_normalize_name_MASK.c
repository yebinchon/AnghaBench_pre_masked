
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,size_t,int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (int *,char const*,unsigned int) ;

int FUNC_5(
 char *VAR_3,
 size_t VAR_4,
 const char *VAR_5,
 unsigned int VAR_6)
{
 git_buf VAR_7 = VAR_0;
 int VAR_8;

 if ((VAR_8 = FUNC_4(&VAR_7, VAR_5, VAR_6)) < 0)
  goto cleanup;

 if (FUNC_2(&VAR_7) > VAR_4 - 1) {
  FUNC_3(
  VAR_2,
  "the provided buffer is too short to hold the normalization of '%s'", VAR_5);
  VAR_8 = VAR_1;
  goto cleanup;
 }

 FUNC_0(VAR_3, VAR_4, &VAR_7);

 VAR_8 = 0;

cleanup:
 FUNC_1(&VAR_7);
 return VAR_8;
}
