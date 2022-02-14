
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(uint32_t VAR_0, uint16_t *VAR_1)
{
    uint32_t VAR_2;

    FUNC_0("rtl8366: read register=%#04x, data=", VAR_0);

    if (FUNC_2(VAR_0, &VAR_2)) {
        FUNC_1("\nrtl8366 smi read failed!\n");
        return -1;
    }

    if (VAR_1)
        *VAR_1 = VAR_2;

    FUNC_0("%#04x\n", VAR_2);

    return 0;
}
