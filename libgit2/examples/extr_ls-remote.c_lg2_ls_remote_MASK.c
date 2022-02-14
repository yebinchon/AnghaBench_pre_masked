
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;

int FUNC_2(git_repository *VAR_2, int VAR_3, char **VAR_4)
{
 int VAR_5;

 if (VAR_3 < 2) {
  FUNC_0(VAR_1, "usage: %s ls-remote <remote>\n", VAR_4[-1]);
  return VAR_0;
 }

 VAR_5 = FUNC_1(VAR_2, VAR_4[1]);

 return VAR_5;
}
