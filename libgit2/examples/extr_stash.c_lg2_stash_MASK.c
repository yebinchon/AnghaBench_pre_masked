
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opts {int cmd; int member_0; } ;
typedef int git_repository ;






 int FUNC_0 (int *,struct opts*) ;
 int FUNC_1 (int *,struct opts*) ;
 int FUNC_2 (int *,struct opts*) ;
 int FUNC_3 (int *,struct opts*) ;
 int FUNC_4 (struct opts*,int,char**) ;

int FUNC_5(git_repository *VAR_0, int VAR_1, char *VAR_2[])
{
 struct opts VAR_3 = { 0 };

 FUNC_4(&VAR_3, VAR_1, VAR_2);

 switch (VAR_3.cmd) {
  case 131:
   return FUNC_0(VAR_0, &VAR_3);
  case 130:
   return FUNC_1(VAR_0, &VAR_3);
  case 128:
   return FUNC_3(VAR_0, &VAR_3);
  case 129:
   return FUNC_2(VAR_0, &VAR_3);
 }

 return -1;
}
