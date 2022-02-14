
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static void
FUNC_0(uint32_t *VAR_0, int VAR_1)
{
 static const uint8_t VAR_2[] = { 0x50, 0x6d };

        uint32_t VAR_3 = (((uint32_t)VAR_2[0]) << 24) |
                (((uint32_t)VAR_2[1]) << 16) |
                (((uint32_t)VAR_2[0]) << 8) |
                ((uint32_t)VAR_2[1]);

        uint32_t VAR_4 = 32;
        int VAR_5;

        for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++, VAR_4++) {
                uint8_t VAR_6 = (VAR_4 % 8);
                uint32_t VAR_7;

                VAR_0[VAR_5] = VAR_3;
                VAR_7 = ((VAR_2[(VAR_4/8) & 1] << VAR_6) & 0x80) ? 1 : 0;
                VAR_3 = ((VAR_3 << 1) | VAR_7);
        }
}
