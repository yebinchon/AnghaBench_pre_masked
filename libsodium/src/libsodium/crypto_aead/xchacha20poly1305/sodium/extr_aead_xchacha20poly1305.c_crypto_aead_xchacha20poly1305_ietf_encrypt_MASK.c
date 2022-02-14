
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char*,int *,unsigned char const*,unsigned long long,unsigned char const*,unsigned long long,unsigned char const*,unsigned char const*,unsigned char const*) ;
 int FUNC_1 () ;

int
FUNC_2(unsigned char *VAR_2,
                                           unsigned long long *VAR_3,
                                           const unsigned char *VAR_4,
                                           unsigned long long VAR_5,
                                           const unsigned char *VAR_6,
                                           unsigned long long VAR_7,
                                           const unsigned char *VAR_8,
                                           const unsigned char *VAR_9,
                                           const unsigned char *VAR_10)
{
    unsigned long long VAR_11 = 0ULL;
    int VAR_12;

    if (VAR_5 > VAR_1) {
        FUNC_1();
    }
    VAR_12 = FUNC_0
        (VAR_2, VAR_2 + VAR_5, ((void*)0), VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
    if (VAR_3 != ((void*)0)) {
        if (VAR_12 == 0) {
            VAR_11 = VAR_5 + VAR_0;
        }
        *VAR_3 = VAR_11;
    }
    return VAR_12;
}
