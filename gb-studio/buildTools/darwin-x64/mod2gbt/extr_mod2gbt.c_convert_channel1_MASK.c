
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int,int,int,int*,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,...) ;

void FUNC_6(u8 VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3,
                      u16 VAR_4, u8 VAR_5, u8 VAR_6)
{
    u8 VAR_7[3] = { 0, 0, 0 };
    int VAR_8 = 1;

    u8 VAR_9 = VAR_3 & 3;

    if(VAR_2 > (6*12-1))
    {
        if((VAR_5 != 0) || (VAR_6 != 0))
        {

            if(VAR_5 == 0xC)
            {

                VAR_7[0] = FUNC_0(5) | FUNC_2(VAR_6);
                VAR_8 = 1;
            }
            else
            {

                u8 VAR_10, VAR_11;
                if(FUNC_1(VAR_0,VAR_1,1,
                                    VAR_5,VAR_6,&VAR_10,&VAR_11) == 1)
                {
                    VAR_7[0] = FUNC_0(6) | (VAR_9 << 4) | VAR_10;
                    VAR_7[1] = VAR_11;
                    VAR_8 = 2;
                }
                else
                {
                    if(VAR_5 != 0)
                    {
                        FUNC_5("Invalid command at pattern %d, step %d, channel 1: %01X%02X\n",
                           VAR_0,VAR_1,VAR_5,VAR_6);
                    }

                    VAR_7[0] = 0;
                    VAR_8 = 1;
                }
            }
        }
        else
        {

            VAR_7[0] = 0;
            VAR_8 = 1;
        }
    }
    else
    {
        u8 VAR_12, VAR_13;
        if(VAR_5 == 0xC)
        {

            VAR_7[0] = FUNC_0(7) | VAR_2;
            VAR_7[1] = (VAR_9<<4) | FUNC_2(VAR_6);
            VAR_8 = 2;
        }
        else
        {
            if(FUNC_1(VAR_0,VAR_1,1,
                                VAR_5,VAR_6,&VAR_12,&VAR_13) == 1)
            {

                VAR_7[0] = FUNC_0(7) | VAR_2;
                VAR_7[1] = FUNC_0(7) | (VAR_9<<4) | VAR_12;
                VAR_7[2] = VAR_13;
                VAR_8 = 3;
            }
            else
            {
                FUNC_5("Invalid command at pattern %d, step %d, channel 1: %01X%02X\n",
                        VAR_0,VAR_1,VAR_5,VAR_6);
                if(VAR_5 == 0)
                    FUNC_5("You need to set the volume when using a new note.\n");
            }
        }
    }

    FUNC_4("0x","$");
    FUNC_3(VAR_7[0]);

    if(VAR_8 > 1)
    {
        FUNC_4(",0x",",$");
        FUNC_3(VAR_7[1]);

        if(VAR_8 > 2)
        {
            FUNC_4(",0x",",$");
            FUNC_3(VAR_7[2]);
        }
    }
}
