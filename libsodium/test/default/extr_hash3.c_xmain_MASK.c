
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__*,int ,int) ;
 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;

int
FUNC_2(void)
{
    size_t VAR_3;

    FUNC_0(VAR_1, VAR_2, sizeof VAR_2 - 1U);
    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
        FUNC_1("%02x", (unsigned int) VAR_1[VAR_3]);
    }
    FUNC_1("\n");

    return 0;
}
