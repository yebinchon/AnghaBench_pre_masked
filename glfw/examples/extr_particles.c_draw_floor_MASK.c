
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLuint ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (float,float,float) ;
 int FUNC_12 (float,float,float,float,int ) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_13(void)
{
    static GLuint VAR_12 = 0;

    if (!VAR_11)
    {
        FUNC_4(VAR_6);
        FUNC_1(VAR_6, VAR_10);
    }


    if (!VAR_12)
    {
        VAR_12 = FUNC_7(1);
        FUNC_10(VAR_12, VAR_0);

        FUNC_9(VAR_2, VAR_1, VAR_7);
        FUNC_9(VAR_2, VAR_5, VAR_9);
        FUNC_8(VAR_2, VAR_4, VAR_8);



        FUNC_11(0.f, 0.f, 1.f);
        FUNC_0(VAR_3);
        FUNC_12(-1.f, -1.f, 0.f, 0.f, 0);
        FUNC_12( 0.f, -1.f, 1.f, 0.f, 0);
        FUNC_12( 0.f, 0.f, 1.f, 1.f, 0);
        FUNC_12(-1.f, 0.f, 0.f, 1.f, 0);
        FUNC_5();

        FUNC_6();
    }
    else
        FUNC_2(VAR_12);

    FUNC_3(VAR_6);

}
