
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned long long VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned char const*,unsigned char const*,int ,int ,int ,unsigned char const*,unsigned char const*) ;

int
FUNC_2(
    unsigned char *VAR_4, size_t VAR_5, const unsigned char *VAR_6,
    unsigned long long VAR_7, const unsigned char *VAR_8, size_t VAR_9,
    const unsigned char *VAR_10, const unsigned char *VAR_11)
{
    if (VAR_5 <= 0U || VAR_5 > VAR_1 ||
        VAR_9 > VAR_0 || VAR_7 > VAR_2) {
        return -1;
    }
    FUNC_0(VAR_5 <= VAR_3);
    FUNC_0(VAR_9 <= VAR_3);

    return FUNC_1((uint8_t *) VAR_4, VAR_6, VAR_8, (uint8_t) VAR_5,
                                 (uint64_t) VAR_7, (uint8_t) VAR_9, VAR_10,
                                 VAR_11);
}
