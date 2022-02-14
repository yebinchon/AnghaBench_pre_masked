
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *) ;
 int FUNC_9 (unsigned int*,int *,char*) ;

void FUNC_10(void)
{
    git_repository *VAR_1 = FUNC_2("status");
    unsigned int VAR_2;
    git_index *VAR_3;

    FUNC_4(VAR_1, "core.ignorecase", 0);

 VAR_1 = FUNC_3();


    FUNC_0(FUNC_9(&VAR_2, VAR_1, "NEW_FILE"), VAR_0);

    FUNC_1(FUNC_8(&VAR_3, VAR_1));

    FUNC_1(FUNC_5(VAR_3, "new_file"));
    FUNC_1(FUNC_7(VAR_3));
    FUNC_6(VAR_3);


    FUNC_0(FUNC_9(&VAR_2, VAR_1, "NEW_FILE"), VAR_0);
}
