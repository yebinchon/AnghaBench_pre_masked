
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int) ;

int FUNC_2(uint32_t VAR_2, uint32_t VAR_3,
                              uint32_t VAR_4, uint32_t VAR_5)
{
    uint16_t VAR_6;

    VAR_6 = (VAR_2 & 0x3F) | ((VAR_3 & 0x3F) << 6);
 if (FUNC_1(VAR_0, VAR_6)) {
        FUNC_0("rtl8366s_setLedForceValue: failed to set led register!\n");
        return -1;
 }

    VAR_6 = (VAR_4 & 0x3F) | ((VAR_5 & 0x3F) << 6);
 if (FUNC_1(VAR_1, VAR_6)) {
        FUNC_0("rtl8366s_setLedForceValue: failed to set led register!\n");
        return -1;
 }

 return 0;
}
