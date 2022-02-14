
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 long FUNC_2 (char*,int,long,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,int ) ;
 long FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (long) ;

__attribute__((used)) static void FUNC_8(GLFWwindow* VAR_2, int VAR_3, const char* VAR_4[])
{
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
    {
        long VAR_6;
        char* VAR_7;
        FILE* VAR_8 = FUNC_1(VAR_4[VAR_5], "rb");
        if (!VAR_8)
            continue;

        FUNC_4(VAR_8, 0, VAR_0);
        VAR_6 = FUNC_5(VAR_8);
        FUNC_4(VAR_8, 0, VAR_1);

        VAR_7 = FUNC_7(VAR_6 + 1);
        VAR_7[VAR_6] = '\0';
        if (FUNC_2(VAR_7, 1, VAR_6, VAR_8) == VAR_6)
            FUNC_6(VAR_7);

        FUNC_3(VAR_7);
        FUNC_0(VAR_8);
    }
}
