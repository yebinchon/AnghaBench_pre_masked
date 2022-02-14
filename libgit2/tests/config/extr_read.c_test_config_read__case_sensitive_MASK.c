
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int*,int *,char*) ;
 int FUNC_9 (int *,int *,char*) ;
 int FUNC_10 (int **,int ) ;

void FUNC_11(void)
{
 git_config *VAR_1;
 int VAR_2;

 FUNC_3(FUNC_10(&VAR_1, FUNC_2("config/config1")));

 FUNC_3(FUNC_9(&VAR_0, VAR_1, "this.that.other"));
 FUNC_1("true", FUNC_6(&VAR_0));
 FUNC_5(&VAR_0);

 FUNC_3(FUNC_9(&VAR_0, VAR_1, "this.That.other"));
 FUNC_1("yes", FUNC_6(&VAR_0));

 FUNC_3(FUNC_8(&VAR_2, VAR_1, "this.that.other"));
 FUNC_0(VAR_2 == 1);
 FUNC_3(FUNC_8(&VAR_2, VAR_1, "this.That.other"));
 FUNC_0(VAR_2 == 1);


 FUNC_4(FUNC_8(&VAR_2, VAR_1, "this.thaT.other"));

 FUNC_7(VAR_1);
}
