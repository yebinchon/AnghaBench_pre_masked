
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_cred ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char**,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int **,char*,char*,char*,char*) ;
 int FUNC_4 (int **,char*) ;
 int FUNC_5 (int **,char*,char*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*,int,char*,char*) ;
 char* FUNC_8 (char const*) ;

int FUNC_9(git_cred **VAR_3,
  const char *VAR_4,
  const char *VAR_5,
  unsigned int VAR_6,
  void *VAR_7)
{
 char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 int VAR_12 = 1;

 FUNC_0(VAR_4);
 FUNC_0(VAR_7);

 if (VAR_5) {
  if ((VAR_8 = FUNC_8(VAR_5)) == ((void*)0))
   goto out;
 } else if ((VAR_12 = FUNC_1(&VAR_8, "Username:", 0)) < 0) {
  goto out;
 }

 if (VAR_6 & VAR_0) {
  int VAR_13;

  if ((VAR_12 = FUNC_1(&VAR_10, "SSH Key:", 0)) < 0 ||
      (VAR_12 = FUNC_1(&VAR_9, "Password:", 1)) < 0)
   goto out;

  if ((VAR_13 = FUNC_7(((void*)0), 0, "%s.pub", VAR_10)) < 0 ||
      (VAR_11 = FUNC_6(VAR_13 + 1)) == ((void*)0) ||
      (VAR_13 = FUNC_7(VAR_11, VAR_13 + 1, "%s.pub", VAR_10)) < 0)
   goto out;

  VAR_12 = FUNC_3(VAR_3, VAR_8, VAR_11, VAR_10, VAR_9);
 } else if (VAR_6 & VAR_2) {
  if ((VAR_12 = FUNC_1(&VAR_9, "Password:", 1)) < 0)
   goto out;

  VAR_12 = FUNC_5(VAR_3, VAR_8, VAR_9);
 } else if (VAR_6 & VAR_1) {
  VAR_12 = FUNC_4(VAR_3, VAR_8);
 }

out:
 FUNC_2(VAR_8);
 FUNC_2(VAR_9);
 FUNC_2(VAR_10);
 FUNC_2(VAR_11);
 return VAR_12;
}
