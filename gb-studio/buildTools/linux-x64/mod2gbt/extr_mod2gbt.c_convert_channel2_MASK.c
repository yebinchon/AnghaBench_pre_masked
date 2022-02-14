
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int,int,int,int*,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int) ;

void FUNC_6(u8 VAR_0, u8 VAR_1, u8 VAR_2,
                      u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
    u8 VAR_6[3] = {0, 0, 0};
    int VAR_7 = 1;

    u8 VAR_8 = VAR_3 & 3;

    if (VAR_2 > (6 * 12 - 1))
    {
        if ((VAR_4 != 0) || (VAR_5 != 0))
        {

            if (VAR_4 == 0xC)
            {

                VAR_6[0] = FUNC_0(5) | FUNC_5(VAR_5);
                VAR_7 = 1;
            }
            else
            {

                u8 VAR_9, VAR_10;
                if (FUNC_1(VAR_0, VAR_1, 2, VAR_4,
                                     VAR_5, &VAR_9,
                                     &VAR_10) == 1)
                {
                    VAR_6[0] = FUNC_0(6) | (VAR_8 << 4) | VAR_9;
                    VAR_6[1] = VAR_10;
                    VAR_7 = 2;
                }
                else
                {
                    if (VAR_4 != 0)
                    {
                        FUNC_4("Invalid command at pattern %d, step %d, channel"
                               " 2: %01X%02X\n", VAR_0, VAR_1,
                               VAR_4, VAR_5);
                    }


                    VAR_6[0] = 0;
                    VAR_7 = 1;
                }
            }
        }
        else
        {

            VAR_6[0] = 0;
            VAR_7 = 1;
        }
    }
    else
    {
        u8 VAR_11, VAR_12;
        if (VAR_4 == 0xC)
        {

            VAR_6[0] = FUNC_0(7) | VAR_2;
            VAR_6[1] = (VAR_8 << 4) | FUNC_5(VAR_5);
            VAR_7 = 2;
        }
        else
        {
            if (FUNC_1(VAR_0, VAR_1, 2, VAR_4,
                                 VAR_5, &VAR_11,
                                 &VAR_12) == 1)
            {

                VAR_6[0] = FUNC_0(7) | VAR_2;
                VAR_6[1] = FUNC_0(7) | (VAR_8 << 4) | VAR_11;
                VAR_6[2] = VAR_12;
                VAR_7 = 3;
            }
            else
            {
                FUNC_4("Invalid command at pattern %d, step %d, channel 2: "
                       "%01X%02X\n", VAR_0, VAR_1, VAR_4,
                       VAR_5);

                if (VAR_4 == 0)
                    FUNC_4("Volume must be set when using a new note.\n");
            }
        }
    }

    FUNC_3("0x");
    FUNC_2(VAR_6[0]);

    if (VAR_7 > 1)
    {
        FUNC_3(",0x");
        FUNC_2(VAR_6[1]);

        if (VAR_7 > 2)
        {
            FUNC_3(",0x");
            FUNC_2(VAR_6[2]);
        }
    }
}
