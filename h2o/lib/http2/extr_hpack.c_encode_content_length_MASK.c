
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int buf ;


 int FUNC_0 (scalar_t__*,char*,size_t) ;

__attribute__((used)) static uint8_t *FUNC_1(uint8_t *VAR_0, size_t VAR_1)
{
    char VAR_2[32], *VAR_3 = VAR_2 + sizeof(VAR_2);
    size_t VAR_4;

    do {
        *--VAR_3 = '0' + VAR_1 % 10;
    } while ((VAR_1 /= 10) != 0);
    VAR_4 = VAR_2 + sizeof(VAR_2) - VAR_3;
    *VAR_0++ = 0x0f;
    *VAR_0++ = 0x0d;
    *VAR_0++ = (uint8_t)VAR_4;
    FUNC_0(VAR_0, VAR_3, VAR_4);
    VAR_0 += VAR_4;

    return VAR_0;
}
