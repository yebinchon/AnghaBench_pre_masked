
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 () ;
 struct option FUNC_2 (int*,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_0 ;
 int FUNC_4 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int FUNC_6 (int ,struct option*) ;

int FUNC_7(int VAR_2, const char **VAR_3, const char *VAR_4)
{
 int VAR_5 = 0;
 struct option VAR_6[] = {
  FUNC_2(&VAR_5, FUNC_0("update the info files from scratch"), 0),
  FUNC_1()
 };

 FUNC_3(VAR_0, ((void*)0));
 VAR_2 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_6,
        VAR_1, 0);
 if (VAR_2 > 0)
  FUNC_6(VAR_1, VAR_6);

 return !!FUNC_5(VAR_5);
}
