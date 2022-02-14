
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 double VAR_10 ;
 double VAR_11 ;
 int FUNC_0 (int *,double*,double*) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 () ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int*,int*) ;
 int FUNC_6 (int *,int*,int*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,int *,int,int,int,int,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char*,...) ;
 int ** VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_15(GLFWwindow* VAR_17, int VAR_18, int VAR_19, int VAR_20, int VAR_21)
{
    if (VAR_20 != VAR_6)
        return;

    switch (VAR_18)
    {
        case 141:
        {
            VAR_9 = !VAR_9;
            if (!VAR_9)
                FUNC_8(VAR_17, ((void*)0));

            break;
        }

        case 137:
        {
            if (FUNC_1(VAR_17, VAR_0) != VAR_1)
            {
                FUNC_12(VAR_17, VAR_8);
                break;
            }


        }

        case 134:
            FUNC_10(VAR_17, VAR_0, VAR_3);
            FUNC_0(VAR_17, &VAR_10, &VAR_11);
            FUNC_14("(( cursor is normal ))\n");
            break;

        case 140:
            FUNC_10(VAR_17, VAR_0, VAR_1);
            FUNC_14("(( cursor is disabled ))\n");
            break;

        case 135:
            FUNC_10(VAR_17, VAR_0, VAR_2);
            FUNC_14("(( cursor is hidden ))\n");
            break;

        case 132:
            if (!FUNC_7())
                break;

            if (FUNC_1(VAR_17, VAR_7))
            {
                FUNC_10(VAR_17, VAR_7, VAR_4);
                FUNC_14("(( raw input is disabled ))\n");
            }
            else
            {
                FUNC_10(VAR_17, VAR_7, VAR_8);
                FUNC_14("(( raw input is enabled ))\n");
            }
            break;

        case 131:
            VAR_13 = 1 - VAR_13;
            FUNC_14("(( swap interval: %i ))\n", VAR_13);
            FUNC_13(VAR_13);
            break;

        case 128:
            VAR_16 = !VAR_16;
            FUNC_14("(( %sing for events ))\n", VAR_16 ? "wait" : "poll");
            break;

        case 130:
            VAR_14 = !VAR_14;
            if (VAR_14)
                FUNC_8(VAR_17, VAR_15);
            else
                FUNC_8(VAR_17, ((void*)0));

            break;

        case 133:
        {
            double VAR_22, VAR_23;
            FUNC_0(VAR_17, &VAR_22, &VAR_23);

            FUNC_14("Query before set: %f %f (%+f %+f)\n",
                   VAR_22, VAR_23, VAR_22 - VAR_10, VAR_23 - VAR_11);
            VAR_10 = VAR_22;
            VAR_11 = VAR_23;

            FUNC_9(VAR_17, VAR_10, VAR_11);
            FUNC_0(VAR_17, &VAR_22, &VAR_23);

            FUNC_14("Query after set: %f %f (%+f %+f)\n",
                   VAR_22, VAR_23, VAR_22 - VAR_10, VAR_23 - VAR_11);
            VAR_10 = VAR_22;
            VAR_11 = VAR_23;
            break;
        }

        case 129:
            FUNC_9(VAR_17, 0, 0);
            FUNC_0(VAR_17, &VAR_10, &VAR_11);
            break;

        case 139:
        {
            int VAR_24, VAR_25;
            FUNC_6(VAR_17, &VAR_24, &VAR_25);
            FUNC_9(VAR_17, VAR_24 - 1, VAR_25 - 1);
            FUNC_0(VAR_17, &VAR_10, &VAR_11);
            break;
        }

        case 148:
            FUNC_8(VAR_17, ((void*)0));
            break;

        case 147:
            FUNC_8(VAR_17, VAR_12[0]);
            break;

        case 146:
            FUNC_8(VAR_17, VAR_12[1]);
            break;

        case 145:
            FUNC_8(VAR_17, VAR_12[2]);
            break;

        case 144:
            FUNC_8(VAR_17, VAR_12[3]);
            break;

        case 143:
            FUNC_8(VAR_17, VAR_12[4]);
            break;

        case 142:
            FUNC_8(VAR_17, VAR_12[5]);
            break;

        case 136:
        case 138:
        {
            static int VAR_26, VAR_27, VAR_28, VAR_29;

            if (VAR_21 != VAR_5)
                return;

            if (FUNC_4(VAR_17))
                FUNC_11(VAR_17, ((void*)0), VAR_26, VAR_27, VAR_28, VAR_29, 0);
            else
            {
                GLFWmonitor* VAR_30 = FUNC_2();
                const GLFWvidmode* VAR_31 = FUNC_3(VAR_30);
                FUNC_5(VAR_17, &VAR_26, &VAR_27);
                FUNC_6(VAR_17, &VAR_28, &VAR_29);
                FUNC_11(VAR_17, VAR_30,
                                     0, 0, VAR_31->width, VAR_31->height,
                                     VAR_31->refreshRate);
            }

            FUNC_0(VAR_17, &VAR_10, &VAR_11);
            break;
        }
    }
}
