
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_state {int member_0; } ;
typedef int git_repository ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (struct parse_state*,int,char**) ;
 int FUNC_2 (int *,struct parse_state*) ;

int FUNC_3(git_repository *VAR_0, int VAR_1, char *VAR_2[])
{
 struct parse_state VAR_3 = {0};

 FUNC_1(&VAR_3, VAR_1, VAR_2);

 FUNC_0(FUNC_2(VAR_0, &VAR_3), "Parsing", ((void*)0));

 return 0;
}
