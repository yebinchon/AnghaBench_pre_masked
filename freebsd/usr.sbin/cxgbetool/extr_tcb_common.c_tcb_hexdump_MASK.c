
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

void
FUNC_1(unsigned VAR_0, unsigned char *VAR_1, unsigned int VAR_2)
{
    unsigned VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
        if (!(VAR_3 % 16)) FUNC_0("\n0x%4.4x: ", VAR_0 + VAR_3);
        else if (!(VAR_3 % 8)) FUNC_0(" ");
        FUNC_0("%2.2x ", (unsigned char)VAR_1[VAR_3]);
    }
}
