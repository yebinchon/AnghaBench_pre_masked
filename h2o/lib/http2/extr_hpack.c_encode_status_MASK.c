
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static uint8_t *FUNC_3(uint8_t *VAR_0, int VAR_1)
{


    FUNC_1(100 <= VAR_1 && VAR_1 <= 999);

    switch (VAR_1) {




        case 200: *VAR_0++ = 0x80 | 8; break;
        case 204: *VAR_0++ = 0x80 | 9; break;
        case 206: *VAR_0++ = 0x80 | 10; break;
        case 304: *VAR_0++ = 0x80 | 11; break;
        case 400: *VAR_0++ = 0x80 | 12; break;
        case 404: *VAR_0++ = 0x80 | 13; break;
        case 500: *VAR_0++ = 0x80 | 14; break;

    default:

        *VAR_0++ = 8;
        *VAR_0++ = 3;
        FUNC_2((char *)VAR_0, "%d", VAR_1);
        VAR_0 += 3;
        break;
    }

    return VAR_0;
}
