
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;


 int FUNC_0 (int) ;
 scalar_t__* VAR_0 ;
 int FUNC_1 (char*,int,int,int) ;

u8 FUNC_2(u16 VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    if (VAR_1 > 0)
    {
        if (VAR_1 < VAR_0[(6 * 12) - 1])
        {
            if (VAR_4 != 4)
            {
                FUNC_1("\nPattern %d, Step %d, Channel %d. Note too high!\n",
                       VAR_2, VAR_3, VAR_4);
            }
        }
        else if (VAR_1 > VAR_0[0])
        {
            if (VAR_4 != 4)
            {
                FUNC_1("\nPattern %d, Step %d, Channel %d. Note too low!\n",
                       VAR_2, VAR_3, VAR_4);
            }
        }
    }
    else
    {
        return -1;
    }

    int VAR_5;
    for (VAR_5 = 0; VAR_5 < 6 * 12; VAR_5++)
        if (VAR_1 == VAR_0[VAR_5])
            return VAR_5;



    u16 VAR_6 = 0xFFFF;
    u8 VAR_7 = 0;
    for (VAR_5 = 0; VAR_5 < 6 * 12; VAR_5++)
    {
        int VAR_8 = FUNC_0(((int)VAR_1) - ((int)VAR_0[VAR_5]));
        int VAR_9 = abs(((int)VAR_1) - VAR_6);

        if (VAR_8 < VAR_9)
        {
            VAR_6 = VAR_0[VAR_5];
            VAR_7 = VAR_5;
        }
    }

    return VAR_7;
}
