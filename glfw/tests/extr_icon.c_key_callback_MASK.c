
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(GLFWwindow* VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    if (VAR_6 != VAR_0)
        return;

    switch (VAR_4)
    {
        case 130:
            FUNC_1(VAR_3, VAR_1);
            break;
        case 129:
            VAR_2 = (VAR_2 + 1) % 5;
            FUNC_2(VAR_3, VAR_2);
            break;
        case 128:
            FUNC_0(VAR_3, 0, ((void*)0));
            break;
    }
}
