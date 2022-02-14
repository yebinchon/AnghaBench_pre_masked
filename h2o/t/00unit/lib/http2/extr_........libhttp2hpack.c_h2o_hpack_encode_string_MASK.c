
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;


 scalar_t__ FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (int ,int) ;
 size_t FUNC_3 (char*,char const*,size_t) ;
 char* FUNC_4 (char*,size_t,int) ;
 int FUNC_5 (char*,char*,size_t) ;
 int FUNC_6 (char*,char*,size_t) ;

size_t FUNC_7(uint8_t *VAR_1, const char *VAR_2, size_t VAR_3)
{
    if (FUNC_0(VAR_3 != 0)) {

        size_t VAR_4 = FUNC_3(VAR_1 + 1, (const uint8_t *)VAR_2, VAR_3);
        if (FUNC_0(VAR_4 != VAR_0)) {
            size_t VAR_5;
            if (FUNC_0(FUNC_2((uint32_t)VAR_4, 7))) {
                VAR_1[0] = (uint8_t)(0x80 | VAR_4);
                VAR_5 = 1;
            } else {
                uint8_t VAR_6[8];
                VAR_6[0] = '\x80';
                VAR_5 = FUNC_4(VAR_6, VAR_4, 7) - VAR_6;
                FUNC_6(VAR_1 + VAR_5, VAR_1 + 1, VAR_4);
                FUNC_5(VAR_1, VAR_6, VAR_5);
            }
            return VAR_5 + VAR_4;
        }
    }
    return FUNC_1(VAR_1, VAR_2, VAR_3);
}
