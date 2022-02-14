
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int *,char const*) ;

void FUNC_5(void)
{
 const char *VAR_1 = "16a0123456789abcdef4b775213c23a8bd74f5e0";
 git_oid VAR_2;
 char VAR_3[VAR_0 + 1];

 FUNC_2(FUNC_4(&VAR_2, VAR_1));


 VAR_3[VAR_0] = 'Z';
 FUNC_3(VAR_3, &VAR_2);
 FUNC_0(VAR_3[VAR_0] == 'Z');


 VAR_3[VAR_0] = '\0';
 FUNC_1(VAR_1, VAR_3);
}
