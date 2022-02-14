
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,char*) ;
 int FUNC_7 (int **,char*) ;

void FUNC_8(void)
{
 git_config *VAR_2;

 FUNC_3(&VAR_1, ((void*)0));
 FUNC_1("./testconfig", "[header]\n  key1 = foo\\\n");
 FUNC_2(FUNC_7(&VAR_2, "./testconfig"));

 FUNC_2(FUNC_6(&VAR_0, VAR_2, "header.key1"));
 FUNC_0("foo", FUNC_4(&VAR_0));

 FUNC_5(VAR_2);
}
