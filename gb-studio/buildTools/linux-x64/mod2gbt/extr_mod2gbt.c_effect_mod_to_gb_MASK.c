
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char*,int,int,int,int,int) ;
 int FUNC_1 (int) ;

int FUNC_2(u8 VAR_0, u8 VAR_1, u8 VAR_2,
                     u8 VAR_3, u8 VAR_4, u8 *VAR_5,
                     u8 *VAR_6)
{
    switch (VAR_3)
    {
        case 0x0:
        {
            *VAR_5 = 1;
            *VAR_6 = VAR_4;
            return 1;
        }
        case 0xB:
        {
            *VAR_5 = 8;
            *VAR_6 = VAR_4;
            return 1;
        }
        case 0xC:
        {
            FUNC_0("Strange error at pattern %d, step %d, channel %d: "
                   "%01X%02X\n", VAR_0, VAR_1, VAR_2,
                   VAR_3, VAR_4);
            return 0;
        }
        case 0xD:
        {
            *VAR_5 = 9;
            *VAR_6 = (((VAR_4 & 0xF0) >> 4) * 10)
                              + (VAR_4 & 0x0F);

            return 1;
        }
        case 0xE:
        {
            if ((VAR_4 & 0xF0) == 0x80)
            {
                u8 VAR_7 = 0;
                u8 VAR_8 = 0;

                switch (VAR_4 & 0xF)
                {
                    case 0: case 1: case 2: case 3:
                        VAR_7 = 1;
                        break;

                    default:
                    case 4: case 5: case 6: case 7:
                    case 8: case 9: case 10: case 11:
                        VAR_7 = 1;
                        VAR_8 = 1;
                        break;

                    case 12: case 13: case 14: case 15:
                        VAR_8 = 1;
                        break;
                }
                *VAR_5 = 0;
                *VAR_6 = (VAR_7 << (3 + VAR_2))
                                  | (VAR_8 << (VAR_2 - 1));
                return 1;
            }
            if ((VAR_4 & 0xF0) == 0xC0)
            {
                *VAR_5 = 2;
                *VAR_6 = (VAR_4 & 0xF);
                return 1;
            }
            else
            {
                FUNC_0("Unsupported effect at pattern %d, step %d, channel %d: "
                       "%01X%02X\n", VAR_0, VAR_1, VAR_2,
                       VAR_3, VAR_4);
                return 0;
            }
            break;
        }
        case 0xF:
        {
            if (VAR_4 > 0x1F)
            {
                FUNC_0("Unsupported BPM speed effect at pattern %d, step %d, "
                       "channel %d: %01X%02X\n", VAR_0, VAR_1,
                       VAR_2, VAR_3, VAR_4);
                return 0;
            }
            else
            {
                *VAR_5 = 10;
                *VAR_6 = FUNC_1(VAR_4);
                return 1;
            }
            break;
        }
        default:
        {
            FUNC_0("Unsupported effect at pattern %d, step %d, channel %d: "
                   "%01X%02X\n", VAR_0, VAR_1, VAR_2,
                   VAR_3, VAR_4);
            return 0;
        }
    }
    return 0;
}
