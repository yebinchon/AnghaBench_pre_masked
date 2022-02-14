
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 scalar_t__* VAR_3 ;

int
FUNC_2(void)
{
    int VAR_4;

    FUNC_0(VAR_3, VAR_2, VAR_1, VAR_0);
    for (VAR_4 = 0; VAR_4 < 32; ++VAR_4) {
        if (VAR_4 > 0) {
            FUNC_1(",");
        } else {
            FUNC_1(" ");
        }
        FUNC_1("0x%02x", (unsigned int) VAR_3[VAR_4]);
        if (VAR_4 % 8 == 7) {
            FUNC_1("\n");
        }
    }
    return 0;
}
