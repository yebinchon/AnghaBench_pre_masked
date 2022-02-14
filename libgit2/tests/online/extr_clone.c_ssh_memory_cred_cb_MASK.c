
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_cred ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int **,int ,char*,char*,int ) ;
 int FUNC_3 (int **,int ) ;
 int FUNC_4 (int ,char*) ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(git_cred **VAR_7, const char *VAR_8, const char *VAR_9,
     unsigned int VAR_10, void *VAR_11)
{
 FUNC_0(VAR_8); FUNC_0(VAR_9); FUNC_0(VAR_11);

 if (VAR_10 & VAR_1)
  return FUNC_3(VAR_7, VAR_6);

 if (VAR_10 & VAR_0)
 {
  char *VAR_12 = FUNC_5(VAR_5);
  char *VAR_13 = FUNC_5(VAR_4);

  int VAR_14 = FUNC_2(VAR_7, VAR_6, VAR_12, VAR_13, VAR_3);

  if (VAR_13)
   FUNC_1(VAR_13);
  if (VAR_12)
   FUNC_1(VAR_12);
  return VAR_14;
 }

 FUNC_4(VAR_2, "unexpected cred type");
 return -1;
}
