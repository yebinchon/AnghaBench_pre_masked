
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; int member_1; unsigned char* member_2; int width; int height; } ;
typedef TYPE_1__ GLFWimage ;
typedef int GLFWcursor ;


 int * FUNC_0 (TYPE_1__ const*,int,int) ;

__attribute__((used)) static GLFWcursor* FUNC_1(void)
{
    int VAR_0 = 0, VAR_1, VAR_2;
    unsigned char VAR_3[32 * 32 * 4];
    const GLFWimage VAR_4 = { 32, 32, VAR_3 };

    for (VAR_2 = 0; VAR_2 < VAR_4.width; VAR_2++)
    {
        for (VAR_1 = 0; VAR_1 < VAR_4.height; VAR_1++)
        {
            if (VAR_1 == 7 || VAR_2 == 7)
            {
                VAR_3[VAR_0++] = 255;
                VAR_3[VAR_0++] = 0;
                VAR_3[VAR_0++] = 0;
                VAR_3[VAR_0++] = 255;
            }
            else
            {
                VAR_3[VAR_0++] = 0;
                VAR_3[VAR_0++] = 0;
                VAR_3[VAR_0++] = 0;
                VAR_3[VAR_0++] = 0;
            }
        }
    }

    return FUNC_0(&VAR_4, 7, 7);
}
