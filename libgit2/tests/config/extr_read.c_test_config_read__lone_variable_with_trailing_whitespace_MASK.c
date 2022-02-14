
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int*,int *,char*) ;
 int FUNC_6 (int **,char*) ;

void FUNC_7(void)
{
 git_config *VAR_1;
 int VAR_2;

 FUNC_3(&VAR_0, ((void*)0));
 FUNC_1("./testconfig", "[foo]\n    lonevariable   \n");
 FUNC_2(FUNC_6(&VAR_1, "./testconfig"));

 FUNC_2(FUNC_5(&VAR_2, VAR_1, "foo.lonevariable"));
 FUNC_0(1, VAR_2);

 FUNC_4(VAR_1);
}
