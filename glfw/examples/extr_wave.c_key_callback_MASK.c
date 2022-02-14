
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 float VAR_4 ;

void FUNC_2(GLFWwindow* VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    if (VAR_8 != VAR_0)
        return;

    switch (VAR_6)
    {
        case 134:
            FUNC_0(VAR_5, VAR_1);
            break;
        case 129:
            FUNC_1();
            break;
        case 133:
            VAR_2 += 5;
            break;
        case 130:
            VAR_2 -= 5;
            break;
        case 128:
            VAR_3 -= 5;
            break;
        case 135:
            VAR_3 += 5;
            break;
        case 131:
            VAR_4 -= 0.25f;
            if (VAR_4 < 0.f)
                VAR_4 = 0.f;
            break;
        case 132:
            VAR_4 += 0.25f;
            break;
        default:
            break;
    }
}
