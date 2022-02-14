
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;


 char const* VAR_0 ;
 char* FUNC_0 (char const*,int ) ;

__attribute__((used)) static int
FUNC_1(uint32_t *VAR_1, uint8_t VAR_2)
{
    const char *VAR_3 = FUNC_0(VAR_0, VAR_2);

    if (VAR_3) {
        *VAR_1 = (uint32_t)(VAR_3 - VAR_0);
        return 0;
    }
    *VAR_1 = 0;

    return -1;
}
