
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int ,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;

int
FUNC_2(void)
{
    int VAR_3;

    FUNC_0(VAR_0, VAR_1, sizeof VAR_1 - 1U, VAR_2);
    for (VAR_3 = 0; VAR_3 < 64; ++VAR_3) {
        FUNC_1(",0x%02x", (unsigned int) VAR_0[VAR_3]);
        if (VAR_3 % 8 == 7)
            FUNC_1("\n");
    }
    return 0;
}
