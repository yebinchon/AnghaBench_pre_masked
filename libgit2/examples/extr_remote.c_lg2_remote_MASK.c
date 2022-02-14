
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
 int FUNC_4 (int *,struct opts*) ;
 int FUNC_5 (struct opts*,int,char**) ;






int FUNC_6(git_repository *VAR_0, int VAR_1, char *VAR_2[])
{
 int VAR_3 = 0;
 struct opts VAR_4 = {0};

 FUNC_5(&VAR_4, VAR_1, VAR_2);

 switch (VAR_4.cmd)
 {
 case 132:
  VAR_3 = FUNC_0(VAR_0, &VAR_4);
  break;
 case 131:
  VAR_3 = FUNC_1(VAR_0, &VAR_4);
  break;
 case 130:
  VAR_3 = FUNC_2(VAR_0, &VAR_4);
  break;
 case 129:
  VAR_3 = FUNC_3(VAR_0, &VAR_4);
  break;
 case 128:
  VAR_3 = FUNC_4(VAR_0, &VAR_4);
  break;
 }

 return VAR_3;
}
