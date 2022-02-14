
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float GLfloat ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;
 int FUNC_3 (float*,float*,float*,float*) ;
 float** VAR_1 ;
 scalar_t__ FUNC_4 (float) ;

__attribute__((used)) static void FUNC_5(int VAR_2)
{
    FUNC_0(VAR_2 > 0);
    while(VAR_2)
    {

        float VAR_3;
        float VAR_4;
        float VAR_5;
        float VAR_6;
        size_t VAR_7;
        FUNC_3(&VAR_3, &VAR_4, &VAR_5, &VAR_6);
        VAR_6 = VAR_6 / 2.0f;
        for (VAR_7 = 0u ; VAR_7 < VAR_0 ; ++VAR_7)
        {
            GLfloat VAR_8 = VAR_3 - VAR_1[0][VAR_7];
            GLfloat VAR_9 = VAR_4 - VAR_1[2][VAR_7];
            GLfloat VAR_10 = (2.0f * (float) FUNC_4((VAR_8 * VAR_8) + (VAR_9 * VAR_9))) / VAR_5;
            if (FUNC_2(VAR_10) <= 1.0f)
            {

                GLfloat VAR_11 = VAR_6 + (float) (FUNC_1(VAR_10*3.14f)*VAR_6);
                VAR_1[1][VAR_7] += VAR_11;
            }
        }
        --VAR_2;
    }
}
