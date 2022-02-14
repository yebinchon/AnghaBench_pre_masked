
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
 int FUNC_1 (int **,int ,int ,int ,int ) ;
 int FUNC_2 (int **,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(git_cred **VAR_7, const char *VAR_8, const char *VAR_9,
     unsigned int VAR_10, void *VAR_11)
{
 FUNC_0(VAR_8); FUNC_0(VAR_9); FUNC_0(VAR_11);

 if (VAR_10 & VAR_1)
  return FUNC_2(VAR_7, VAR_6);

 if (VAR_10 & VAR_0)
  return FUNC_1(VAR_7,
   VAR_6, VAR_5,
   VAR_4, VAR_3);

 FUNC_3(VAR_2, "unexpected cred type");
 return -1;
}
