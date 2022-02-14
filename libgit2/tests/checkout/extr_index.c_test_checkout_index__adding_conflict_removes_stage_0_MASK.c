
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_index ;
typedef int git_checkout_options ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int **,int ) ;

void FUNC_8(void)
{
 git_index *VAR_2, *VAR_3;
 git_checkout_options VAR_4 = VAR_0;

 FUNC_2(FUNC_6(&VAR_2));

 FUNC_0(VAR_2, "new.txt");
 FUNC_2(FUNC_3(VAR_1, VAR_2, &VAR_4));

 FUNC_2(FUNC_7(&VAR_3, VAR_1));

 FUNC_1(FUNC_5(VAR_3, "new.txt", 0) == ((void*)0));
 FUNC_1(FUNC_5(VAR_3, "new.txt", 1) != ((void*)0));
 FUNC_1(FUNC_5(VAR_3, "new.txt", 2) != ((void*)0));
 FUNC_1(FUNC_5(VAR_3, "new.txt", 3) != ((void*)0));

 FUNC_4(VAR_3);
 FUNC_4(VAR_2);
}
