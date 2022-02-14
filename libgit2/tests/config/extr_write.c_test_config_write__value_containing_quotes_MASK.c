
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,char*) ;
 int FUNC_7 (int **,char*) ;
 int FUNC_8 (int *,char*,char*) ;

void FUNC_9(void)
{
 git_config *VAR_1;
 git_buf VAR_2 = VAR_0;

 FUNC_1(FUNC_7(&VAR_1, "config9"));
 FUNC_1(FUNC_8(VAR_1, "core.somevar", "this \"has\" quotes"));
 FUNC_1(FUNC_6(&VAR_2, VAR_1, "core.somevar"));
 FUNC_0("this \"has\" quotes", FUNC_3(&VAR_2));
 FUNC_2(&VAR_2);
 FUNC_5(VAR_1);

 FUNC_1(FUNC_7(&VAR_1, "config9"));
 FUNC_1(FUNC_6(&VAR_2, VAR_1, "core.somevar"));
 FUNC_0("this \"has\" quotes", FUNC_3(&VAR_2));
 FUNC_2(&VAR_2);
 FUNC_5(VAR_1);


 FUNC_1(FUNC_7(&VAR_1, "config9"));
 FUNC_1(FUNC_8(VAR_1, "core.somevar", "this also \"has\" quotes"));
 FUNC_1(FUNC_6(&VAR_2, VAR_1, "core.somevar"));
 FUNC_0("this also \"has\" quotes", FUNC_3(&VAR_2));
 FUNC_2(&VAR_2);
 FUNC_5(VAR_1);

 FUNC_1(FUNC_7(&VAR_1, "config9"));
 FUNC_1(FUNC_6(&VAR_2, VAR_1, "core.somevar"));
 FUNC_0("this also \"has\" quotes", FUNC_3(&VAR_2));
 FUNC_4(&VAR_2);
 FUNC_5(VAR_1);
}
