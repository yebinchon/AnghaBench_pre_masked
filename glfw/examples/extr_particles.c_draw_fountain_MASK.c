
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
 double VAR_8 ;
 scalar_t__ FUNC_0 (double) ;
 int VAR_9 ;
 float* VAR_10 ;
 int VAR_11 ;
 float* VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (float,float,float) ;
 int FUNC_10 (float,float,float) ;
 scalar_t__ FUNC_11 (double) ;

__attribute__((used)) static void FUNC_12(void)
{
    static GLuint VAR_14 = 0;
    double VAR_15;
    float VAR_16, VAR_17;
    int VAR_18, VAR_19;


    if (!VAR_14)
    {
        VAR_14 = FUNC_5(1);
        FUNC_8(VAR_14, VAR_2);

        FUNC_7(VAR_4, VAR_3, VAR_9);
        FUNC_7(VAR_4, VAR_6, VAR_13);
        FUNC_6(VAR_4, VAR_5, VAR_11);


        for (VAR_19 = 0; VAR_19 < VAR_0 - 1; VAR_19++)
        {
            FUNC_1(VAR_7);
            for (VAR_18 = 0; VAR_18 <= VAR_1; VAR_18++)
            {
                VAR_15 = (double) VAR_18 * (2.0 * VAR_8 / (double) VAR_1);
                VAR_16 = (float) FUNC_0(VAR_15);
                VAR_17 = (float) FUNC_11(VAR_15);


                FUNC_9(VAR_16 * VAR_10[VAR_19 * 2 + 2],
                           VAR_17 * VAR_10[VAR_19 * 2 + 2],
                           VAR_10[VAR_19 * 2 + 3]);
                FUNC_10(VAR_16 * VAR_12[VAR_19 * 2 + 2],
                           VAR_17 * VAR_12[VAR_19 * 2 + 2],
                           VAR_12[VAR_19 * 2 +3 ]);
                FUNC_9(VAR_16 * VAR_10[VAR_19 * 2],
                           VAR_17 * VAR_10[VAR_19 * 2],
                           VAR_10[VAR_19 * 2 + 1]);
                FUNC_10(VAR_16 * VAR_12[VAR_19 * 2],
                           VAR_17 * VAR_12[VAR_19 * 2],
                           VAR_12[VAR_19 * 2 + 1]);
            }

            FUNC_3();
        }

        FUNC_4();
    }
    else
        FUNC_2(VAR_14);
}
