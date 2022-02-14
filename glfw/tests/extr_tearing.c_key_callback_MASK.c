
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int refreshRate; } ;
typedef int GLFWwindow ;
typedef TYPE_1__ GLFWvidmode ;
typedef int GLFWmonitor ;







 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*,int*) ;
 int FUNC_4 (int *,int*,int*) ;
 int FUNC_5 (int *,int *,int,int,int,int,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_8(GLFWwindow* VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    if (VAR_7 != VAR_1)
        return;

    switch (VAR_5)
    {
        case 128:
        {
            if (VAR_2 + 1 > VAR_2)
                FUNC_7(VAR_4, VAR_2 + 1);
            break;
        }

        case 132:
        {
            if (VAR_3)
            {
                if (VAR_2 - 1 < VAR_2)
                    FUNC_7(VAR_4, VAR_2 - 1);
            }
            else
            {
                if (VAR_2 - 1 >= 0)
                    FUNC_7(VAR_4, VAR_2 - 1);
            }
            break;
        }

        case 130:
            FUNC_6(VAR_4, 1);
            break;

        case 129:
        case 131:
        {
            static int VAR_9, VAR_10, VAR_11, VAR_12;

            if (VAR_8 != VAR_0)
                return;

            if (FUNC_2(VAR_4))
                FUNC_5(VAR_4, ((void*)0), VAR_9, VAR_10, VAR_11, VAR_12, 0);
            else
            {
                GLFWmonitor* VAR_13 = FUNC_0();
                const GLFWvidmode* VAR_14 = FUNC_1(VAR_13);
                FUNC_3(VAR_4, &VAR_9, &VAR_10);
                FUNC_4(VAR_4, &VAR_11, &VAR_12);
                FUNC_5(VAR_4, VAR_13,
                                     0, 0, VAR_14->width, VAR_14->height,
                                     VAR_14->refreshRate);
            }

            break;
        }
    }
}
