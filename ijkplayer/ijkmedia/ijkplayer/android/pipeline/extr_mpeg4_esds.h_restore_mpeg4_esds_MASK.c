
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int bit_rate; } ;
typedef TYPE_1__ AVCodecParameters ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int*,size_t) ;

__attribute__((used)) static void FUNC_3(AVCodecParameters *VAR_0,
                                 uint8_t *VAR_1, size_t VAR_2,
                                 size_t VAR_3, size_t VAR_4,
                                 uint8_t *VAR_5)
{
    VAR_5[0] = 0x03;
    VAR_5[1] = 0x80;
    VAR_5[2] = 0x80;
    VAR_5[3] = 0x80;
    VAR_5[4] = VAR_3;
    uint16_t *VAR_6 = (uint16_t *)&VAR_5[5];
    *VAR_6 = FUNC_0(1);

    VAR_5[8] = 0x04;
    VAR_5[9] = 0x80;
    VAR_5[10] = 0x80;
    VAR_5[11] = 0x80;
    VAR_5[12] = VAR_4;
    VAR_5[13] = 0x20;
    VAR_5[14] = 0x11;
    uint32_t *VAR_7 = (uint32_t *)&VAR_5[18];
    uint32_t *VAR_8 = (uint32_t *)&VAR_5[22];
    *VAR_7 = *VAR_8 = FUNC_1(VAR_0->bit_rate);

    VAR_5[26] = 0x05;
    VAR_5[27] = 0x80;
    VAR_5[28] = 0x80;
    VAR_5[29] = 0x80;
    VAR_5[30] = VAR_2;
    FUNC_2(&VAR_5[31], VAR_1, VAR_2);

    VAR_5[31+VAR_2] = 0x06;
    VAR_5[31+VAR_2+1] = 0x80;
    VAR_5[31+VAR_2+2] = 0x80;
    VAR_5[31+VAR_2+3] = 0x80;
    VAR_5[31+VAR_2+4] = 0x01;
    VAR_5[31+VAR_2+5] = 0x02;
}
