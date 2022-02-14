
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nk_rect {int dummy; } ;
struct nk_font_atlas {int dummy; } ;
struct nk_context {int dummy; } ;
struct nk_command_buffer {int dummy; } ;
typedef int nk_flags ;
struct TYPE_7__ {int x; int y; } ;
struct TYPE_6__ {int x; int y; } ;
struct TYPE_5__ {int width; int height; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_4__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 TYPE_3__ VAR_19 ;
 int FUNC_0 (struct nk_command_buffer*,int,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int,int,char*,int *,int *) ;
 int * FUNC_6 () ;
 int VAR_22 ;
 double FUNC_7 () ;
 TYPE_1__* FUNC_8 (int *) ;
 int FUNC_9 (int *,int*,int*) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int *) ;
 int VAR_23 ;
 scalar_t__ FUNC_19 (struct nk_context*,char*,struct nk_rect,int ) ;
 int FUNC_20 (struct nk_context*,char*,int*) ;
 int FUNC_21 (struct nk_context*) ;
 int FUNC_22 (struct nk_font_atlas**) ;
 int FUNC_23 () ;
 struct nk_context* FUNC_24 (int *,int ) ;
 int FUNC_25 () ;
 int FUNC_26 (int ) ;
 int FUNC_27 (struct nk_context*,char*,int) ;
 int FUNC_28 (struct nk_context*,int,char*,int,int) ;
 int FUNC_29 (struct nk_context*,int ,int,int) ;
 int FUNC_30 (struct nk_context*,int,int) ;
 int FUNC_31 (struct nk_context*) ;
 int FUNC_32 (struct nk_context*,int) ;
 int FUNC_33 (struct nk_context*,int ) ;
 scalar_t__ FUNC_34 (struct nk_context*,char*,int) ;
 struct nk_rect FUNC_35 (float,float,float,float) ;
 int VAR_24 ;
 int FUNC_36 (struct nk_context*,char*,float) ;
 int FUNC_37 (int,int) ;
 struct nk_command_buffer* FUNC_38 (struct nk_context*) ;
 int FUNC_39 (int *) ;
 int FUNC_40 (int *) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_41 () ;
 int FUNC_42 () ;

int FUNC_43(int VAR_29, char** VAR_30)
{
    int VAR_31, VAR_32, VAR_33;
    unsigned long VAR_34 = 0;
    double VAR_35, VAR_36;
    double VAR_37 = 0;
    int VAR_38 = VAR_4;
    GLFWmonitor* VAR_39 = ((void*)0);
    GLFWwindow* VAR_40;
    struct nk_context* VAR_41;
    struct nk_font_atlas* VAR_42;

    int VAR_43 = VAR_24;

    while ((VAR_31 = FUNC_2(VAR_29, VAR_30, "fh")) != -1)
    {
        switch (VAR_31)
        {
            case 'h':
                FUNC_42();
                FUNC_1(VAR_1);

            case 'f':
                VAR_38 = VAR_6;
                break;
        }
    }

    FUNC_14(VAR_21);

    if (!FUNC_10())
        FUNC_1(VAR_0);

    if (VAR_38)
    {
        const GLFWvidmode* VAR_44;

        VAR_39 = FUNC_6();
        VAR_44 = FUNC_8(VAR_39);

        VAR_32 = VAR_44->width;
        VAR_33 = VAR_44->height;
    }
    else
    {
        VAR_32 = 640;
        VAR_33 = 480;
    }

    FUNC_17(VAR_2, 2);
    FUNC_17(VAR_3, 0);

    FUNC_17(VAR_5, VAR_6);
    FUNC_17(VAR_7, VAR_6);

    VAR_40 = FUNC_5(VAR_32, VAR_33, "Input lag test", VAR_39, ((void*)0));
    if (!VAR_40)
    {
        FUNC_16();
        FUNC_1(VAR_0);
    }

    FUNC_11(VAR_40);
    FUNC_4(VAR_22);
    FUNC_41();

    VAR_35 = FUNC_7();

    VAR_41 = FUNC_24(VAR_40, VAR_10);
    FUNC_22(&VAR_42);
    FUNC_23();

    FUNC_15(VAR_40, VAR_23);
    FUNC_13(VAR_40, VAR_17);

    while (!FUNC_18(VAR_40))
    {
        int VAR_45, VAR_46;
        struct nk_rect VAR_47;

        FUNC_12();
        FUNC_39(VAR_40);

        FUNC_9(VAR_40, &VAR_45, &VAR_46);
        VAR_47 = FUNC_35(0.f, 0.f, (float) VAR_45, (float) VAR_46);

        FUNC_3(VAR_8);
        FUNC_25();
        if (FUNC_19(VAR_41, "", VAR_47, 0))
        {
            nk_flags VAR_48 = VAR_12 | VAR_13;
            struct nk_command_buffer *VAR_49 = FUNC_38(VAR_41);
            int VAR_50;

            for (VAR_50 = VAR_43 ? 3 : 0; VAR_50 >= 0; VAR_50--)
                FUNC_0(VAR_49, VAR_50, FUNC_37(VAR_16.x + VAR_19.x * VAR_50,
                                                  VAR_16.y + VAR_19.y * VAR_50));


            FUNC_30(VAR_41, 20, 1);
            FUNC_27(VAR_41, "Move mouse uniformly and check marker under cursor:", VAR_48);
            for (VAR_50 = 0; VAR_50 <= 3; VAR_50++) {
                FUNC_29(VAR_41, VAR_11, 12, 2);
                FUNC_32(VAR_41, 25);
                FUNC_0(VAR_49, VAR_50, FUNC_33(VAR_41, FUNC_37(20, 5)));
                FUNC_27(VAR_41, "", 0);
                FUNC_32(VAR_41, 500);
                if (VAR_50 == 0)
                    FUNC_27(VAR_41, "- current cursor position (no input lag)", VAR_48);
                else
                    FUNC_28(VAR_41, VAR_48, "- %d-frame forecast (input lag is %d frame)", VAR_50, VAR_50);
                FUNC_31(VAR_41);
            }

            FUNC_30(VAR_41, 20, 1);

            FUNC_20(VAR_41, "Show forecasts", &VAR_43);
            FUNC_27(VAR_41, "Input method:", VAR_48);
            if (FUNC_34(VAR_41, "glfwGetCursorPos (sync query)", VAR_15 == VAR_18))
                VAR_15 = VAR_18;
            if (FUNC_34(VAR_41, "glfwSetCursorPosCallback (latest input message)", VAR_15 == VAR_14))
                VAR_15 = VAR_14;

            FUNC_27(VAR_41, "", 0);

            FUNC_36(VAR_41, "FPS", (float) VAR_37);
            if (FUNC_20(VAR_41, "Enable vsync", &VAR_20))
                FUNC_41();

            FUNC_27(VAR_41, "", 0);

            FUNC_27(VAR_41, "After swap:", VAR_48);
            FUNC_20(VAR_41, "glClear", &VAR_25);
            FUNC_20(VAR_41, "glFinish", &VAR_26);
            FUNC_20(VAR_41, "draw with occlusion query", &VAR_27);
            FUNC_20(VAR_41, "glReadPixels", &VAR_28);
        }

        FUNC_21(VAR_41);
        FUNC_26(VAR_9);

        FUNC_40(VAR_40);

        VAR_34++;

        VAR_36 = FUNC_7();
        if (VAR_36 - VAR_35 > 1.0)
        {
            VAR_37 = VAR_34 / (VAR_36 - VAR_35);
            VAR_34 = 0;
            VAR_35 = VAR_36;
        }
    }

    FUNC_16();
    FUNC_1(VAR_1);
}
