
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int refreshRate; int height; int width; } ;
typedef int GLFWwindow ;
typedef TYPE_1__ GLFWvidmode ;
typedef int GLFWmonitor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 () ;
 double FUNC_1 () ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,int *,int ,int ,int ,int ,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (char*,double,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_14(GLFWwindow* VAR_11, int VAR_12, int VAR_13, int VAR_14, int VAR_15)
{
    FUNC_13("%0.2f Key %s\n",
           FUNC_1(),
           VAR_14 == VAR_4 ? "pressed" : "released");

    if (VAR_14 != VAR_4)
        return;

    switch (VAR_12)
    {
        case 130:
            FUNC_7(VAR_11);
            break;
        case 129:
            FUNC_8(VAR_11);
            break;
        case 128:
            FUNC_9(VAR_11);
            break;
        case 133:
            FUNC_12(VAR_11, VAR_6);
            break;
        case 137:
            FUNC_10(VAR_11, VAR_0, !FUNC_3(VAR_11, VAR_0));
            break;
        case 136:
            FUNC_10(VAR_11, VAR_5, !FUNC_3(VAR_11, VAR_5));
            break;
        case 135:
            FUNC_10(VAR_11, VAR_1, !FUNC_3(VAR_11, VAR_1));
            break;
        case 132:
            FUNC_10(VAR_11, VAR_2, !FUNC_3(VAR_11, VAR_2));
            break;
        case 131:
        case 134:
        {
            if (VAR_15 != VAR_3)
                return;

            if (FUNC_4(VAR_11))
            {
                FUNC_11(VAR_11, ((void*)0),
                                     VAR_9, VAR_10,
                                     VAR_8, VAR_7,
                                     0);
            }
            else
            {
                GLFWmonitor* VAR_16 = FUNC_0();
                if (VAR_16)
                {
                    const GLFWvidmode* VAR_17 = FUNC_2(VAR_16);
                    FUNC_5(VAR_11, &VAR_9, &VAR_10);
                    FUNC_6(VAR_11, &VAR_8, &VAR_7);
                    FUNC_11(VAR_11, VAR_16,
                                         0, 0, VAR_17->width, VAR_17->height,
                                         VAR_17->refreshRate);
                }
            }

            break;
        }
    }
}
