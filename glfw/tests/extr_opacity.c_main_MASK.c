
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nk_rect {int dummy; } ;
struct nk_font_atlas {int dummy; } ;
struct nk_context {int dummy; } ;
typedef int GLFWwindow ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int,int,char*,int *,int *) ;
 int VAR_10 ;
 float FUNC_4 (int *) ;
 int FUNC_5 (int *,int*,int*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,float) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 (double) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (struct nk_context*,char*,struct nk_rect,int ) ;
 int FUNC_17 (struct nk_context*) ;
 int FUNC_18 (struct nk_font_atlas**) ;
 int FUNC_19 () ;
 struct nk_context* FUNC_20 (int *,int ) ;
 int FUNC_21 () ;
 int FUNC_22 (int ) ;
 int FUNC_23 () ;
 int FUNC_24 (struct nk_context*,int ,char*,float) ;
 int FUNC_25 (struct nk_context*,int,int) ;
 struct nk_rect FUNC_26 (float,float,float,float) ;
 scalar_t__ FUNC_27 (struct nk_context*,float,float*,float,float) ;

int FUNC_28(int VAR_11, char** VAR_12)
{
    GLFWwindow* VAR_13;
    struct nk_context* VAR_14;
    struct nk_font_atlas* VAR_15;

    FUNC_8(VAR_9);

    if (!FUNC_6())
        FUNC_0(VAR_0);

    FUNC_14(VAR_2, VAR_3);
    FUNC_14(VAR_4, VAR_3);

    VAR_13 = FUNC_3(400, 400, "Opacity", ((void*)0), ((void*)0));
    if (!VAR_13)
    {
        FUNC_12();
        FUNC_0(VAR_0);
    }

    FUNC_7(VAR_13);
    FUNC_2(VAR_10);
    FUNC_11(1);

    VAR_14 = FUNC_20(VAR_13, VAR_7);
    FUNC_18(&VAR_15);
    FUNC_19();

    while (!FUNC_15(VAR_13))
    {
        int VAR_16, VAR_17;
        struct nk_rect VAR_18;

        FUNC_5(VAR_13, &VAR_16, &VAR_17);
        VAR_18 = FUNC_26(0.f, 0.f, (float) VAR_16, (float) VAR_17);

        FUNC_1(VAR_5);
        FUNC_21();
        if (FUNC_16(VAR_14, "", VAR_18, 0))
        {
            float VAR_19 = FUNC_4(VAR_13);
            FUNC_25(VAR_14, 30, 2);
            if (FUNC_27(VAR_14, 0.f, &VAR_19, 1.f, 0.001f))
                FUNC_9(VAR_13, VAR_19);
            FUNC_24(VAR_14, VAR_8, "%0.3f", VAR_19);
        }

        FUNC_17(VAR_14);
        FUNC_22(VAR_6);

        FUNC_10(VAR_13);
        FUNC_13(1.0);
    }

    FUNC_23();
    FUNC_12();
    FUNC_0(VAR_1);
}
