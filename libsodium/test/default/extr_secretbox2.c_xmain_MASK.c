
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*,int ,int,int ,int ) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,...) ;

int
FUNC_3(void)
{
    int VAR_4;

    if (FUNC_1(VAR_2, VAR_0, 163, VAR_3, VAR_1) == 0) {
        for (VAR_4 = 32; VAR_4 < 163; ++VAR_4) {
            FUNC_2(",0x%02x", (unsigned int) VAR_2[VAR_4]);
            if (VAR_4 % 8 == 7)
                FUNC_2("\n");
        }
        FUNC_2("\n");
    }
    FUNC_0(FUNC_1(VAR_2, VAR_0, 31, VAR_3, VAR_1) == -1);
    FUNC_0(FUNC_1(VAR_2, VAR_0, 16, VAR_3, VAR_1) == -1);
    FUNC_0(FUNC_1(VAR_2, VAR_0, 1, VAR_3, VAR_1) == -1);
    FUNC_0(FUNC_1(VAR_2, VAR_0, 0, VAR_3, VAR_1) == -1);

    return 0;
}
