
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,unsigned char const*,unsigned long long,unsigned char const*,unsigned char const*,unsigned long long,unsigned char const*,unsigned char const*) ;

int
FUNC_1(unsigned char *VAR_1,
                                           unsigned long long *VAR_2,
                                           unsigned char *VAR_3,
                                           const unsigned char *VAR_4,
                                           unsigned long long VAR_5,
                                           const unsigned char *VAR_6,
                                           unsigned long long VAR_7,
                                           const unsigned char *VAR_8,
                                           const unsigned char *VAR_9)
{
    unsigned long long VAR_10 = 0ULL;
    int VAR_11 = -1;

    if (VAR_5 >= VAR_0) {
        VAR_11 = FUNC_0
            (VAR_1, VAR_3,
             VAR_4, VAR_5 - VAR_0,
             VAR_4 + VAR_5 - VAR_0,
             VAR_6, VAR_7, VAR_8, VAR_9);
    }
    if (VAR_2 != ((void*)0)) {
        if (VAR_11 == 0) {
            VAR_10 = VAR_5 - VAR_0;
        }
        *VAR_2 = VAR_10;
    }
    return VAR_11;
}
