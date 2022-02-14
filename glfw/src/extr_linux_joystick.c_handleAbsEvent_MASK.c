
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct input_absinfo {int maximum; float minimum; } ;
struct TYPE_6__ {int* absMap; int** hats; struct input_absinfo* absInfo; } ;
struct TYPE_7__ {TYPE_1__ linjs; } ;
typedef TYPE_2__ _GLFWjoystick ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int const,float) ;
 int FUNC_1 (TYPE_2__*,int const,char const) ;

__attribute__((used)) static void FUNC_2(_GLFWjoystick* VAR_2, int VAR_3, int VAR_4)
{
    const int VAR_5 = VAR_2->linjs.absMap[VAR_3];

    if (VAR_3 >= VAR_0 && VAR_3 <= VAR_1)
    {
        static const char VAR_6[3][3] =
        {
            { 136, 128, 135 },
            { 134, 132, 133 },
            { 131, 129, 130 },
        };

        const int VAR_7 = (VAR_3 - VAR_0) / 2;
        const int VAR_8 = (VAR_3 - VAR_0) % 2;
        int* VAR_9 = VAR_2->linjs.hats[VAR_7];



        if (VAR_4 == 0)
            VAR_9[VAR_8] = 0;
        else if (VAR_4 < 0)
            VAR_9[VAR_8] = 1;
        else if (VAR_4 > 0)
            VAR_9[VAR_8] = 2;

        FUNC_1(VAR_2, VAR_5, VAR_6[VAR_9[0]][VAR_9[1]]);
    }
    else
    {
        const struct input_absinfo* VAR_10 = &VAR_2->linjs.absInfo[VAR_3];
        float VAR_11 = VAR_4;

        const int VAR_12 = VAR_10->maximum - VAR_10->minimum;
        if (VAR_12)
        {

            VAR_11 = (VAR_11 - VAR_10->minimum) / VAR_12;

            VAR_11 = VAR_11 * 2.0f - 1.0f;
        }

        FUNC_0(VAR_2, VAR_5, VAR_11);
    }
}
