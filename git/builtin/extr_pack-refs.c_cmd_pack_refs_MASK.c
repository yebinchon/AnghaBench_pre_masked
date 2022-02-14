
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 (int ,char*,unsigned int*,int ,unsigned int) ;
 struct option FUNC_2 () ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_6 (int ,unsigned int) ;
 int VAR_4 ;
 int FUNC_7 (int ,struct option*) ;

int FUNC_8(int VAR_5, const char **VAR_6, const char *VAR_7)
{
 unsigned int VAR_8 = VAR_1;
 struct option VAR_9[] = {
  FUNC_1(0, "all", &VAR_8, FUNC_0("pack everything"), VAR_0),
  FUNC_1(0, "prune", &VAR_8, FUNC_0("prune loose refs (default)"), VAR_1),
  FUNC_2(),
 };
 FUNC_4(VAR_2, ((void*)0));
 if (FUNC_5(VAR_5, VAR_6, VAR_7, VAR_9, VAR_3, 0))
  FUNC_7(VAR_3, VAR_9);
 return FUNC_6(FUNC_3(VAR_4), VAR_8);
}
