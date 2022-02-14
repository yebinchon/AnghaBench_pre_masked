
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int size; unsigned short* red; unsigned short* green; unsigned short* blue; } ;
typedef int GLFWmonitor ;
typedef TYPE_1__ GLFWgammaramp ;


 float VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,float) ;
 float FUNC_2 (float,float) ;
 int FUNC_3 (int) ;
 unsigned short* FUNC_4 (unsigned int,int) ;
 int FUNC_5 (unsigned short*) ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 float FUNC_8 (float,float) ;

void FUNC_9(GLFWmonitor* VAR_2, float VAR_3)
{
    unsigned int VAR_4;
    unsigned short* VAR_5;
    GLFWgammaramp VAR_6;
    const GLFWgammaramp* VAR_7;
    FUNC_3(VAR_2 != ((void*)0));
    FUNC_3(VAR_3 > 0.f);
    FUNC_3(VAR_3 <= VAR_0);

    FUNC_0();

    if (VAR_3 != VAR_3 || VAR_3 <= 0.f || VAR_3 > VAR_0)
    {
        FUNC_1(VAR_1, "Invalid gamma value %f", VAR_3);
        return;
    }

    VAR_7 = FUNC_6(VAR_2);
    if (!VAR_7)
        return;

    VAR_5 = FUNC_4(VAR_7->size, sizeof(unsigned short));

    for (VAR_4 = 0; VAR_4 < VAR_7->size; VAR_4++)
    {
        float VAR_8;


        VAR_8 = VAR_4 / (float) (VAR_7->size - 1);

        VAR_8 = FUNC_8(VAR_8, 1.f / VAR_3) * 65535.f + 0.5f;

        VAR_8 = FUNC_2(VAR_8, 65535.f);

        VAR_5[VAR_4] = (unsigned short) VAR_8;
    }

    VAR_6.red = VAR_5;
    VAR_6.green = VAR_5;
    VAR_6.blue = VAR_5;
    VAR_6.size = VAR_7->size;

    FUNC_7(VAR_2, &VAR_6);
    FUNC_5(VAR_5);
}
