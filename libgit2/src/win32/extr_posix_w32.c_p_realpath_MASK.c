
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_win32_path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,char const*) ;
 scalar_t__ FUNC_6 (char*,int ) ;

char *FUNC_7(const char *VAR_9, char *VAR_10)
{
 git_win32_path VAR_11, VAR_12;

 if (FUNC_5(VAR_11, VAR_9) < 0)
  return ((void*)0);




 if (!FUNC_1(VAR_11, VAR_5, VAR_12, ((void*)0))) {
  if (FUNC_2() == VAR_4)
   VAR_8 = VAR_1;
  else
   VAR_8 = VAR_0;

  return ((void*)0);
 }


 if (FUNC_0(VAR_12) == VAR_7) {
  VAR_8 = VAR_2;
  return ((void*)0);
 }

 if (!VAR_10 && !(VAR_10 = FUNC_3(VAR_6))) {
  VAR_8 = VAR_3;
  return ((void*)0);
 }




 if (FUNC_6(VAR_10, VAR_12) < 0)
  return ((void*)0);

 FUNC_4(VAR_10);

 return VAR_10;
}
