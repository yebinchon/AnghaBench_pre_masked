
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; int member_1; unsigned char* member_2; int width; int height; } ;
typedef int GLFWwindow ;
typedef TYPE_1__ GLFWimage ;


 int FUNC_0 (int *,int,TYPE_1__*) ;
 int * VAR_0 ;
 int ** VAR_1 ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;

__attribute__((used)) static void FUNC_3(GLFWwindow* VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    unsigned char VAR_6[16 * 16 * 4];
    unsigned char* VAR_7 = VAR_6;
    GLFWimage VAR_8 = { 16, 16, VAR_6 };

    for (VAR_5 = 0; VAR_5 < VAR_8.width; VAR_5++)
    {
        for (VAR_4 = 0; VAR_4 < VAR_8.height; VAR_4++)
        {
            if (VAR_1[VAR_5][VAR_4] == '0')
                FUNC_1(VAR_7, VAR_0[VAR_3], 4);
            else
                FUNC_2(VAR_7, 0, 4);

            VAR_7 += 4;
        }
    }

    FUNC_0(VAR_2, 1, &VAR_8);
}
