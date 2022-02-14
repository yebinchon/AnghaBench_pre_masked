
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char const*) ;
 char* FUNC_4 (int *) ;

void FUNC_5(void)
{
 const char *VAR_0 = "16a0123456789abcdef4b775213c23a8bd74f5e0";
 git_oid VAR_1;
 char *VAR_2;

 FUNC_2(FUNC_3(&VAR_1, VAR_0));

 VAR_2 = FUNC_4(&VAR_1);
 FUNC_0(VAR_2);
 FUNC_1(VAR_0, VAR_2);
}
