
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int const*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (unsigned long long,size_t,scalar_t__*,scalar_t__*,scalar_t__*) ;
 unsigned int FUNC_2 (char const*,unsigned int) ;

int
FUNC_3(
    const char VAR_3[VAR_1],
    unsigned long long VAR_4, size_t VAR_5)
{
    uint32_t VAR_6, VAR_7;
    uint32_t VAR_8, VAR_9;
    uint32_t VAR_10, VAR_11;

    if (FUNC_1(VAR_4, VAR_5, &VAR_6, &VAR_8, &VAR_10) != 0) {
        VAR_2 = VAR_0;
        return -1;
    }
    if (FUNC_2(VAR_3, VAR_1) !=
        VAR_1 - 1U) {
        VAR_2 = VAR_0;
        return -1;
    }
    if (FUNC_0((const uint8_t *) VAR_3,
                              &VAR_7, &VAR_11, &VAR_9) == ((void*)0)) {
        VAR_2 = VAR_0;
        return -1;
    }
    if (VAR_6 != VAR_7 || VAR_10 != VAR_11 || VAR_8 != VAR_9) {
        return 1;
    }
    return 0;
}
