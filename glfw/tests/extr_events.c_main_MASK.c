
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int title ;
struct TYPE_8__ {int width; int height; int blueBits; int greenBits; int redBits; int refreshRate; } ;
struct TYPE_7__ {int number; int window; int closeable; } ;
typedef TYPE_1__ Slot ;
typedef TYPE_2__ GLFWvidmode ;
typedef int GLFWmonitor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int,char*,int *,int *) ;
 char* FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int VAR_13 ;
 TYPE_2__* FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (int ,int ) ;
 int FUNC_31 (int ,TYPE_1__*) ;
 int FUNC_32 (int) ;
 int FUNC_33 () ;
 int FUNC_34 () ;
 int FUNC_35 (int ,int ) ;
 scalar_t__ FUNC_36 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_37 (char*,...) ;
 int VAR_19 ;
 int FUNC_38 (char*,int,char*,int) ;
 int VAR_20 ;
 scalar_t__ FUNC_39 (int ,int *,int) ;
 int FUNC_40 () ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

int FUNC_41(int VAR_29, char** VAR_30)
{
    Slot* VAR_31;
    GLFWmonitor* VAR_32 = ((void*)0);
    int VAR_33, VAR_34, VAR_35, VAR_36, VAR_37 = 1;

    FUNC_16(VAR_11);

    if (!FUNC_10())
        FUNC_1(VAR_0);

    FUNC_37("Library initialized\n");

    FUNC_20(VAR_16);
    FUNC_18(VAR_14);

    while ((VAR_33 = FUNC_4(VAR_29, VAR_30, "hfn:")) != -1)
    {
        switch (VAR_33)
        {
            case 'h':
                FUNC_40();
                FUNC_1(VAR_1);

            case 'f':
                VAR_32 = FUNC_8();
                break;

            case 'n':
                VAR_37 = (int) FUNC_39(VAR_18, ((void*)0), 10);
                break;

            default:
                FUNC_40();
                FUNC_1(VAR_0);
        }
    }

    if (VAR_32)
    {
        const GLFWvidmode* VAR_38 = FUNC_9(VAR_32);

        FUNC_35(VAR_5, VAR_38->refreshRate);
        FUNC_35(VAR_4, VAR_38->redBits);
        FUNC_35(VAR_3, VAR_38->greenBits);
        FUNC_35(VAR_2, VAR_38->blueBits);

        VAR_35 = VAR_38->width;
        VAR_36 = VAR_38->height;
    }
    else
    {
        VAR_35 = 640;
        VAR_36 = 480;
    }

    VAR_31 = FUNC_0(VAR_37, sizeof(Slot));

    for (VAR_34 = 0; VAR_34 < VAR_37; VAR_34++)
    {
        char VAR_39[128];

        VAR_31[VAR_34].closeable = VAR_6;
        VAR_31[VAR_34].number = VAR_34 + 1;

        FUNC_38(VAR_39, sizeof(VAR_39), "Event Linter (Window %i)", VAR_31[VAR_34].number);

        if (VAR_32)
        {
            FUNC_37("Creating full screen window %i (%ix%i on %s)\n",
                   VAR_31[VAR_34].number,
                   VAR_35, VAR_36,
                   FUNC_7(VAR_32));
        }
        else
        {
            FUNC_37("Creating windowed mode window %i (%ix%i)\n",
                   VAR_31[VAR_34].number,
                   VAR_35, VAR_36);
        }

        VAR_31[VAR_34].window = FUNC_6(VAR_35, VAR_36, VAR_39, VAR_32, ((void*)0));
        if (!VAR_31[VAR_34].window)
        {
            FUNC_3(VAR_31);
            FUNC_33();
            FUNC_1(VAR_0);
        }

        FUNC_31(VAR_31[VAR_34].window, VAR_31 + VAR_34);

        FUNC_28(VAR_31[VAR_34].window, VAR_26);
        FUNC_30(VAR_31[VAR_34].window, VAR_28);
        FUNC_17(VAR_31[VAR_34].window, VAR_12);
        FUNC_24(VAR_31[VAR_34].window, VAR_22);
        FUNC_23(VAR_31[VAR_34].window, VAR_21);
        FUNC_29(VAR_31[VAR_34].window, VAR_27);
        FUNC_25(VAR_31[VAR_34].window, VAR_23);
        FUNC_26(VAR_31[VAR_34].window, VAR_24);
        FUNC_27(VAR_31[VAR_34].window, VAR_25);
        FUNC_21(VAR_31[VAR_34].window, VAR_17);
        FUNC_14(VAR_31[VAR_34].window, VAR_9);
        FUNC_13(VAR_31[VAR_34].window, VAR_8);
        FUNC_22(VAR_31[VAR_34].window, VAR_19);
        FUNC_19(VAR_31[VAR_34].window, VAR_15);
        FUNC_12(VAR_31[VAR_34].window, VAR_7);
        FUNC_15(VAR_31[VAR_34].window, VAR_10);

        FUNC_11(VAR_31[VAR_34].window);
        FUNC_5(VAR_13);
        FUNC_32(1);
    }

    FUNC_37("Main loop starting\n");

    for (;;)
    {
        for (VAR_34 = 0; VAR_34 < VAR_37; VAR_34++)
        {
            if (FUNC_36(VAR_31[VAR_34].window))
                break;
        }

        if (VAR_34 < VAR_37)
            break;

        FUNC_34();


        FUNC_2(VAR_20);
    }

    FUNC_3(VAR_31);
    FUNC_33();
    FUNC_1(VAR_1);
}
