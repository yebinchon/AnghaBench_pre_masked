
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct nk_rect {int dummy; } ;
struct nk_font_atlas {int dummy; } ;
struct nk_context {int dummy; } ;
struct TYPE_4__ {int size; void* blue; void* green; void* red; } ;
typedef int GLFWwindow ;
typedef int GLFWmonitor ;
typedef TYPE_1__ GLFWgammaramp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct nk_context*,int ,int,void*) ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int,int,char*,int *,int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int VAR_10 ;
 int FUNC_8 (int *,int*,int*) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,float) ;
 int FUNC_13 (int *,TYPE_1__*) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int) ;
 int FUNC_17 () ;
 int FUNC_18 (double) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int *) ;
 int VAR_11 ;
 void* FUNC_21 (size_t const) ;
 int FUNC_22 (void*,void*,size_t const) ;
 scalar_t__ FUNC_23 (struct nk_context*,char*,struct nk_rect,int ) ;
 scalar_t__ FUNC_24 (struct nk_context*,char*) ;
 int FUNC_25 (struct nk_context*) ;
 int FUNC_26 (struct nk_font_atlas**) ;
 int FUNC_27 () ;
 struct nk_context* FUNC_28 (int *,int ) ;
 int FUNC_29 () ;
 int FUNC_30 (int ) ;
 int FUNC_31 () ;
 int FUNC_32 (struct nk_context*,int ,char*,float) ;
 int FUNC_33 (struct nk_context*,int,int) ;
 struct nk_rect FUNC_34 (float,float,float,float) ;
 int FUNC_35 (int,int,int) ;
 scalar_t__ FUNC_36 (struct nk_context*,float,float*,float,float) ;
 int FUNC_37 (struct nk_context*,char*,struct nk_rect) ;

int FUNC_38(int VAR_12, char** VAR_13)
{
    GLFWmonitor* VAR_14 = ((void*)0);
    GLFWwindow* VAR_15;
    GLFWgammaramp VAR_16;
    struct nk_context* VAR_17;
    struct nk_font_atlas* VAR_18;
    float VAR_19 = 1.f;

    FUNC_11(VAR_9);

    if (!FUNC_9())
        FUNC_1(VAR_0);

    VAR_14 = FUNC_7();

    FUNC_19(VAR_2, VAR_3);
    FUNC_19(VAR_4, VAR_3);

    VAR_15 = FUNC_5(800, 400, "Gamma Test", ((void*)0), ((void*)0));
    if (!VAR_15)
    {
        FUNC_17();
        FUNC_1(VAR_0);
    }

    {
        const GLFWgammaramp* VAR_20 = FUNC_6(VAR_14);
        const size_t VAR_21 = VAR_20->size * sizeof(short);
        VAR_16.size = VAR_20->size;
        VAR_16.red = FUNC_21(VAR_21);
        VAR_16.green = FUNC_21(VAR_21);
        VAR_16.blue = FUNC_21(VAR_21);
        FUNC_22(VAR_16.red, VAR_20->red, VAR_21);
        FUNC_22(VAR_16.green, VAR_20->green, VAR_21);
        FUNC_22(VAR_16.blue, VAR_20->blue, VAR_21);
    }

    FUNC_10(VAR_15);
    FUNC_4(VAR_10);
    FUNC_16(1);

    VAR_17 = FUNC_28(VAR_15, VAR_7);
    FUNC_26(&VAR_18);
    FUNC_27();

    FUNC_14(VAR_15, VAR_11);

    while (!FUNC_20(VAR_15))
    {
        int VAR_22, VAR_23;
        struct nk_rect VAR_24;

        FUNC_8(VAR_15, &VAR_22, &VAR_23);
        VAR_24 = FUNC_34(0.f, 0.f, (float) VAR_22, (float) VAR_23);
        FUNC_37(VAR_17, "", VAR_24);

        FUNC_3(VAR_5);
        FUNC_29();
        if (FUNC_23(VAR_17, "", VAR_24, 0))
        {
            const GLFWgammaramp* VAR_25;

            FUNC_33(VAR_17, 30, 3);
            if (FUNC_36(VAR_17, 0.1f, &VAR_19, 5.f, 0.1f))
                FUNC_12(VAR_14, VAR_19);
            FUNC_32(VAR_17, VAR_8, "%0.1f", VAR_19);
            if (FUNC_24(VAR_17, "Revert"))
                FUNC_13(VAR_14, &VAR_16);

            VAR_25 = FUNC_6(VAR_14);

            FUNC_33(VAR_17, VAR_23 - 60.f, 3);
            FUNC_0(VAR_17, FUNC_35(255, 0, 0), VAR_25->size, VAR_25->red);
            FUNC_0(VAR_17, FUNC_35(0, 255, 0), VAR_25->size, VAR_25->green);
            FUNC_0(VAR_17, FUNC_35(0, 0, 255), VAR_25->size, VAR_25->blue);
        }

        FUNC_25(VAR_17);
        FUNC_30(VAR_6);

        FUNC_15(VAR_15);
        FUNC_18(1.0);
    }

    FUNC_2(VAR_16.red);
    FUNC_2(VAR_16.green);
    FUNC_2(VAR_16.blue);

    FUNC_31();
    FUNC_17();
    FUNC_1(VAR_1);
}
