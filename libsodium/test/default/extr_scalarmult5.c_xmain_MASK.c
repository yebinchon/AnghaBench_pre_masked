
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*,int ,int ) ;
 scalar_t__* VAR_2 ;
 int FUNC_2 (char*,...) ;

int
FUNC_3(void)
{
    int VAR_3;
    int VAR_4;

    VAR_4 = FUNC_1(VAR_2, VAR_0, VAR_1);
    FUNC_0(VAR_4 == 0);

    for (VAR_3 = 0; VAR_3 < 32; ++VAR_3) {
        if (VAR_3 > 0) {
            FUNC_2(",");
        } else {
            FUNC_2(" ");
        }
        FUNC_2("0x%02x", (unsigned int) VAR_2[VAR_3]);
        if (VAR_3 % 8 == 7) {
            FUNC_2("\n");
        }
    }
    return 0;
}
