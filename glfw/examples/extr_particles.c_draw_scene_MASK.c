
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mat4x4 ;
typedef int GLfloat ;
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
 double VAR_16 ;
 int VAR_17 ;
 double FUNC_0 (double) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,double,float) ;
 int VAR_18 ;
 int FUNC_4 (int) ;
 int FUNC_5 (float,float,float,float) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,float) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int const*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (double,double,double,double) ;
 int FUNC_19 (double,double,double) ;
 int FUNC_20 (scalar_t__,float,int ,double,double) ;
 int FUNC_21 () ;
 double FUNC_22 (double) ;

__attribute__((used)) static void FUNC_23(GLFWwindow* VAR_19, double VAR_20)
{
    double VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
    static double VAR_27 = 0.0;
    float VAR_28;
    mat4x4 VAR_29;


    VAR_28 = (float) (VAR_20 - VAR_27);
    VAR_27 = VAR_20;

    FUNC_20(VAR_29,
                       65.f * (float) VAR_16 / 180.f,
                       VAR_17,
                       1.0, 60.0);

    FUNC_5(0.1f, 0.1f, 0.1f, 1.f);
    FUNC_4(VAR_2 | VAR_4);

    FUNC_17(VAR_14);
    FUNC_16((const GLfloat*) VAR_29);


    FUNC_17(VAR_13);
    FUNC_15();


    VAR_24 = 90.0 - 10.0;
    VAR_25 = 10.0 * FUNC_22(0.3 * VAR_20);
    VAR_26 = 10.0 * VAR_20;
    FUNC_18(-VAR_24, 1.0, 0.0, 0.0);
    FUNC_18(-VAR_25, 0.0, 1.0, 0.0);
    FUNC_18(-VAR_26, 0.0, 0.0, 1.0);


    VAR_21 = 15.0 * FUNC_22((VAR_16 / 180.0) * VAR_26) +
             2.0 * FUNC_22((VAR_16 / 180.0) * 3.1 * VAR_20);
    VAR_22 = -15.0 * FUNC_0((VAR_16 / 180.0) * VAR_26) +
             2.0 * FUNC_0((VAR_16 / 180.0) * 2.9 * VAR_20);
    VAR_23 = 4.0 + 2.0 * FUNC_0((VAR_16 / 180.0) * 4.9 * VAR_20);
    FUNC_19(-VAR_21, -VAR_22, -VAR_23);

    FUNC_14(VAR_1);
    FUNC_6(VAR_0);
    FUNC_10(VAR_3);

    FUNC_21();
    FUNC_10(VAR_12);

    FUNC_10(VAR_7);
    FUNC_13(VAR_10, VAR_6);
    FUNC_11(VAR_9, 0.05f);
    FUNC_12(VAR_8, VAR_18);

    FUNC_1();

    FUNC_10(VAR_5);
    FUNC_7(VAR_11);
    FUNC_8(VAR_15);

    FUNC_2();

    FUNC_9(VAR_12);
    FUNC_9(VAR_7);


    FUNC_3(VAR_19, VAR_20, VAR_28);


    FUNC_9(VAR_5);
}
