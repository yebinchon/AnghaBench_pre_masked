
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (int *,int ,int ,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_8(void)
{
 git_index *VAR_6;

 FUNC_6(&VAR_6, VAR_3);

 FUNC_2(FUNC_4(VAR_6, "who"));
 FUNC_2(FUNC_5(VAR_6));

 FUNC_1(VAR_3, "who", VAR_2 | VAR_1);

 FUNC_2(FUNC_7(&VAR_5, VAR_3, VAR_4, ((void*)0), VAR_0));

 FUNC_0("stash@{0}^0:who", "a0400d4954659306a976567af43125a0b1aa8595");
 FUNC_0("stash@{0}^2:who", ((void*)0));

 FUNC_3(VAR_6);
}
