
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int GLuint ;
typedef int GLint ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 float VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ) ;
 int VAR_19 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (float,float,float,float) ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (unsigned int,char*) ;
 int FUNC_5 (int ,int,int ,float*) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int ,int ,int,int) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int,int,char*,int *,int *) ;
 int FUNC_10 (int *,int*,int*) ;
 int VAR_20 ;
 double FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 () ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 () ;
 int VAR_21 ;
 int FUNC_22 (unsigned int) ;
 unsigned int FUNC_23 (int ,int ) ;
 float* VAR_22 ;
 float* VAR_23 ;
 float FUNC_24 (float) ;
 int FUNC_25 (scalar_t__) ;
 int FUNC_26 () ;
 int VAR_24 ;
 float VAR_25 ;
 float VAR_26 ;
 float VAR_27 ;

int FUNC_27(int VAR_28, char** VAR_29)
{
    GLFWwindow* VAR_30;
    int VAR_31;
    double VAR_32;
    double VAR_33;
    int VAR_34;
    float VAR_35;
    GLint VAR_36;
    GLint VAR_37;
    int VAR_38, VAR_39;

    GLuint VAR_40;

    FUNC_15(VAR_18);

    if (!FUNC_12())
        FUNC_0(VAR_0);

    FUNC_19(VAR_8, VAR_4);
    FUNC_19(VAR_2, 3);
    FUNC_19(VAR_3, 2);
    FUNC_19(VAR_7, VAR_5);
    FUNC_19(VAR_6, VAR_9);

    VAR_30 = FUNC_9(800, 600, "GLFW OpenGL3 Heightmap demo", ((void*)0), ((void*)0));
    if (! VAR_30 )
    {
        FUNC_18();
        FUNC_0(VAR_0);
    }


    FUNC_16(VAR_30, VAR_21);

    FUNC_13(VAR_30);
    FUNC_8(VAR_20);


    VAR_40 = FUNC_23(VAR_24, VAR_19);

    if (VAR_40 == 0u)
    {
        FUNC_18();
        FUNC_0(VAR_0);
    }

    FUNC_6(VAR_40);
    VAR_37 = FUNC_4(VAR_40, "project");
    VAR_36 = FUNC_4(VAR_40, "modelview");


    VAR_35 = 1.0f / FUNC_24(VAR_25 / 2.0f);
    VAR_23[0] = VAR_35 / VAR_17;
    VAR_23[5] = VAR_35;
    VAR_23[10] = (VAR_26 + VAR_27)/ (VAR_27 - VAR_26);
    VAR_23[11] = -1.0f;
    VAR_23[14] = 2.0f * (VAR_26 * VAR_27) / (VAR_27 - VAR_26);
    FUNC_5(VAR_37, 1, VAR_11, VAR_23);


    VAR_22[12] = -5.0f;
    VAR_22[13] = -5.0f;
    VAR_22[14] = -20.0f;
    FUNC_5(VAR_36, 1, VAR_11, VAR_22);


    FUNC_21();
    FUNC_22(VAR_40);





    FUNC_10(VAR_30, &VAR_38, &VAR_39);
    FUNC_7(0, 0, VAR_38, VAR_39);
    FUNC_2(0.0f, 0.0f, 0.0f, 0.0f);


    VAR_34 = 0;
    VAR_31 = 0;
    VAR_33 = FUNC_11();

    while (!FUNC_20(VAR_30))
    {
        ++VAR_34;

        FUNC_1(VAR_10);
        FUNC_3(VAR_12, 2* VAR_14 , VAR_13, 0);


        FUNC_17(VAR_30);
        FUNC_14();

        VAR_32 = FUNC_11();
        if ((VAR_32 - VAR_33) > 0.2)
        {

            if (VAR_31 < VAR_15)
            {
                FUNC_25(VAR_16);
                FUNC_26();
                VAR_31 += VAR_16;
            }
            VAR_33 = VAR_32;
            VAR_34 = 0;
        }
    }

    FUNC_18();
    FUNC_0(VAR_1);
}
