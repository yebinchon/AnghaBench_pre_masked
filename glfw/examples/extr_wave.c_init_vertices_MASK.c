
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float x; float y; double r; float g; float b; scalar_t__ z; } ;
typedef float GLfloat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 TYPE_1__* VAR_5 ;

void FUNC_0(void)
{
    int VAR_6, VAR_7, VAR_8;


    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
    {
        for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
        {
            VAR_8 = VAR_7 * VAR_1 + VAR_6;

            VAR_5[VAR_8].x = (GLfloat) (VAR_6 - VAR_1 / 2) / (GLfloat) (VAR_1 / 2);
            VAR_5[VAR_8].y = (GLfloat) (VAR_7 - VAR_0 / 2) / (GLfloat) (VAR_0 / 2);
            VAR_5[VAR_8].z = 0;

            if ((VAR_6 % 4 < 2) ^ (VAR_7 % 4 < 2))
                VAR_5[VAR_8].r = 0.0;
            else
                VAR_5[VAR_8].r = 1.0;

            VAR_5[VAR_8].g = (GLfloat) VAR_7 / (GLfloat) VAR_0;
            VAR_5[VAR_8].b = 1.f - ((GLfloat) VAR_6 / (GLfloat) VAR_1 + (GLfloat) VAR_7 / (GLfloat) VAR_0) / 2.f;
        }
    }

    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
    {
        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
        {
            VAR_8 = 4 * (VAR_7 * VAR_3 + VAR_6);

            VAR_4[VAR_8 + 0] = VAR_7 * VAR_1 + VAR_6;
            VAR_4[VAR_8 + 1] = VAR_7 * VAR_1 + VAR_6 + 1;
            VAR_4[VAR_8 + 2] = (VAR_7 + 1) * VAR_1 + VAR_6 + 1;
            VAR_4[VAR_8 + 3] = (VAR_7 + 1) * VAR_1 + VAR_6;
        }
    }
}
