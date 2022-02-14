
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int thrd_t ;
struct TYPE_5__ {double t; float dt; int d_done; int p_done; int particles_lock; scalar_t__ d_frame; scalar_t__ p_frame; } ;
struct TYPE_4__ {int width; int height; int refreshRate; int blueBits; int greenBits; int redBits; } ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (int,int,char*,int *,int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (char*) ;
 int FUNC_16 (int *,int*,int*) ;
 int * FUNC_17 () ;
 int VAR_29 ;
 int FUNC_18 () ;
 TYPE_1__* FUNC_19 (int *) ;
 int FUNC_20 () ;
 int FUNC_21 (int *) ;
 int FUNC_22 () ;
 int FUNC_23 (int *,int (*) (int *,int,int)) ;
 int FUNC_24 (int *,int ,int ) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 (double) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int) ;
 int FUNC_29 () ;
 int FUNC_30 (int ,int ) ;
 int FUNC_31 (int *) ;
 int VAR_30 ;
 int FUNC_32 (int *,int ) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_33 (int *,int,int) ;
 int VAR_35 ;
 scalar_t__ FUNC_34 (int *,int ,int *) ;
 int FUNC_35 (int ,int *) ;
 scalar_t__ VAR_36 ;
 TYPE_2__ VAR_37 ;
 int FUNC_36 () ;
 scalar_t__ VAR_38 ;

int FUNC_37(int VAR_39, char** VAR_40)
{
    int VAR_41, VAR_42, VAR_43;
    thrd_t VAR_44 = 0;
    GLFWwindow* VAR_45;
    GLFWmonitor* VAR_46 = ((void*)0);

    if (!FUNC_20())
    {
        FUNC_3(VAR_35, "Failed to initialize GLFW\n");
        FUNC_2(VAR_0);
    }

    while ((VAR_41 = FUNC_4(VAR_39, VAR_40, "fh")) != -1)
    {
        switch (VAR_41)
        {
            case 'f':
                VAR_46 = FUNC_17();
                break;
            case 'h':
                FUNC_36();
                FUNC_2(VAR_1);
        }
    }

    if (VAR_46)
    {
        const GLFWvidmode* VAR_47 = FUNC_19(VAR_46);

        FUNC_30(VAR_8, VAR_47->redBits);
        FUNC_30(VAR_7, VAR_47->greenBits);
        FUNC_30(VAR_4, VAR_47->blueBits);
        FUNC_30(VAR_9, VAR_47->refreshRate);

        VAR_42 = VAR_47->width;
        VAR_43 = VAR_47->height;
    }
    else
    {
        VAR_42 = 640;
        VAR_43 = 480;
    }

    VAR_45 = FUNC_13(VAR_42, VAR_43, "Particle Engine", VAR_46, ((void*)0));
    if (!VAR_45)
    {
        FUNC_3(VAR_35, "Failed to create GLFW window\n");
        FUNC_29();
        FUNC_2(VAR_0);
    }

    if (VAR_46)
        FUNC_24(VAR_45, VAR_5, VAR_6);

    FUNC_21(VAR_45);
    FUNC_12(VAR_29);
    FUNC_28(1);

    FUNC_23(VAR_45, FUNC_33);
    FUNC_25(VAR_45, VAR_30);


    FUNC_16(VAR_45, &VAR_42, &VAR_43);
    FUNC_33(VAR_45, VAR_42, VAR_43);


    FUNC_6(1, &VAR_32);
    FUNC_5(VAR_18, VAR_32);
    FUNC_8(VAR_23, 1);
    FUNC_11(VAR_18, VAR_21, VAR_10);
    FUNC_11(VAR_18, VAR_22, VAR_10);
    FUNC_11(VAR_18, VAR_19, VAR_14);
    FUNC_11(VAR_18, VAR_20, VAR_14);
    FUNC_10(VAR_18, 0, VAR_15, VAR_26, VAR_25,
                 0, VAR_15, VAR_24, VAR_33);


    FUNC_6(1, &VAR_27);
    FUNC_5(VAR_18, VAR_27);
    FUNC_8(VAR_23, 1);
    FUNC_11(VAR_18, VAR_21, VAR_16);
    FUNC_11(VAR_18, VAR_22, VAR_16);
    FUNC_11(VAR_18, VAR_19, VAR_14);
    FUNC_11(VAR_18, VAR_20, VAR_14);
    FUNC_10(VAR_18, 0, VAR_15, VAR_3, VAR_2,
                 0, VAR_15, VAR_24, VAR_28);

    if (FUNC_15("GL_EXT_separate_specular_color"))
    {
        FUNC_7(VAR_13,
                      VAR_17);
    }


    FUNC_9(VAR_12, VAR_11);
    VAR_38 = 0;


    VAR_37.t = 0.0;
    VAR_37.dt = 0.001f;
    VAR_37.p_frame = 0;
    VAR_37.d_frame = 0;

    FUNC_32(&VAR_37.particles_lock, VAR_31);
    FUNC_0(&VAR_37.p_done);
    FUNC_0(&VAR_37.d_done);

    if (FUNC_34(&VAR_44, VAR_34, VAR_45) != VAR_36)
    {
        FUNC_29();
        FUNC_2(VAR_0);
    }

    FUNC_26(0.0);

    while (!FUNC_31(VAR_45))
    {
        FUNC_1(VAR_45, FUNC_18());

        FUNC_27(VAR_45);
        FUNC_22();
    }

    FUNC_35(VAR_44, ((void*)0));

    FUNC_14(VAR_45);
    FUNC_29();

    FUNC_2(VAR_1);
}
