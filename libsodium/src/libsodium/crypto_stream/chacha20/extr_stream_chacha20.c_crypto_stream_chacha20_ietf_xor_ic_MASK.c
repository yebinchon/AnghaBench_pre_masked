
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (unsigned char*,unsigned char const*,unsigned long long,unsigned char const*,scalar_t__,unsigned char const*) ;
 int FUNC_1 () ;

int
FUNC_2(unsigned char *VAR_0, const unsigned char *VAR_1,
                                   unsigned long long VAR_2,
                                   const unsigned char *VAR_3, uint32_t VAR_4,
                                   const unsigned char *VAR_5)
{
    if ((unsigned long long) VAR_4 >
        (64ULL * (1ULL << 32)) / 64ULL - (VAR_2 + 63ULL) / 64ULL) {
        FUNC_1();
    }
    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
