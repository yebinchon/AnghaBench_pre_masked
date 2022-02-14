
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (char*,int *) ;

void FUNC_5(void)
{
 const char *VAR_1 = "16a0123456789abcdef4b775213c23a8bd74f5e0";
 const char *VAR_2 = "16/a0123456789abcdef4b775213c23a8bd74f5e0";
 git_oid VAR_3;
 char VAR_4[VAR_0 + 2];

 FUNC_2(FUNC_3(&VAR_3, VAR_1));


 VAR_4[VAR_0 + 1] = 'Z';
 FUNC_4(VAR_4, &VAR_3);
 FUNC_0(VAR_4[VAR_0 + 1] == 'Z');


 VAR_4[VAR_0 + 1] = '\0';
 FUNC_1(VAR_2, VAR_4);
}
