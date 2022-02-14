
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void
FUNC_1(unsigned char *VAR_0, unsigned char *VAR_1)
{
    int VAR_2;
    unsigned int VAR_3 = 0;

    for (VAR_2 = 0; VAR_2 < 4; ++VAR_2) {
        unsigned int VAR_4 = VAR_0[VAR_2];
        unsigned int VAR_5 = VAR_1[VAR_2];
        FUNC_0(",0x%02x", 255 & (VAR_4 - VAR_5 - VAR_3));
        VAR_3 = (VAR_4 < VAR_5 + VAR_3);
    }
}
