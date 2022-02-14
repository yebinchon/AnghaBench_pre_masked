
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int *,int ,int*) ;
 int FUNC_4 (int **,char*) ;
 int FUNC_5 (int *,char const*,char*,char*) ;

void FUNC_6(void)
{
 const char *VAR_1 = "a.brand.new";
 git_config *VAR_2;
 int VAR_3;

 FUNC_1(FUNC_4(&VAR_2, "config/config11"));

 FUNC_1(FUNC_5(VAR_2, VAR_1, "$^", "variable"));
 VAR_3 = 0;
 FUNC_1(FUNC_3(VAR_2, VAR_1, ((void*)0), VAR_0, &VAR_3));
 FUNC_0(VAR_3, 1);

 FUNC_2(VAR_2);
}
