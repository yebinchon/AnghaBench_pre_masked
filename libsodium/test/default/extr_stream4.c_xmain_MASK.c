
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 int FUNC_0 (scalar_t__*,int ,int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;

int
FUNC_2(void)
{
    int VAR_4;

    FUNC_0(VAR_0, VAR_2, 163, VAR_3, VAR_1);

    for (VAR_4 = 32; VAR_4 < 163; ++VAR_4) {
        FUNC_1(",0x%02x", (unsigned int) VAR_0[VAR_4]);
        if (VAR_4 % 8 == 7)
            FUNC_1("\n");
    }
    FUNC_1("\n");

    return 0;
}
