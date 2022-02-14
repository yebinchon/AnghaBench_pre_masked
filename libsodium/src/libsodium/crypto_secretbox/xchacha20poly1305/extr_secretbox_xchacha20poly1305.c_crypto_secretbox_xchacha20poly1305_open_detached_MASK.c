
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char const*,unsigned char const*,int *) ;
 scalar_t__ FUNC_1 (unsigned char const*,unsigned char const*,unsigned long long,unsigned char*) ;
 unsigned int VAR_0 ;
 int FUNC_2 (unsigned char*,int,unsigned char const*,unsigned char*) ;
 int VAR_1 ;
 int FUNC_3 (unsigned char*,unsigned char*,unsigned int,unsigned char const*,unsigned char*) ;
 int FUNC_4 (unsigned char*,unsigned char const*,unsigned long long,unsigned char const*,unsigned int,unsigned char*) ;
 int FUNC_5 (unsigned char*,unsigned char const*,unsigned long long) ;
 int FUNC_6 (unsigned char*,int) ;

int
FUNC_7(unsigned char *VAR_2,
                                                 const unsigned char *VAR_3,
                                                 const unsigned char *VAR_4,
                                                 unsigned long long VAR_5,
                                                 const unsigned char *VAR_6,
                                                 const unsigned char *VAR_7)
{
    unsigned char VAR_8[64U];
    unsigned char VAR_9[VAR_1];
    unsigned long long VAR_10;
    unsigned long long VAR_11;

    FUNC_0(VAR_9, VAR_6, VAR_7, ((void*)0));
    FUNC_2(VAR_8, VAR_1,
                           VAR_6 + 16, VAR_9);
    if (FUNC_1(VAR_4, VAR_3, VAR_5, VAR_8) != 0) {
        FUNC_6(VAR_9, sizeof VAR_9);
        return -1;
    }
    if (VAR_2 == ((void*)0)) {
        return 0;
    }
    if (((uintptr_t) VAR_3 >= (uintptr_t) VAR_2 &&
         (uintptr_t) VAR_3 - (uintptr_t) VAR_2 < VAR_5) ||
        ((uintptr_t) VAR_2 >= (uintptr_t) VAR_3 &&
         (uintptr_t) VAR_2 - (uintptr_t) VAR_3 < VAR_5)) {
        FUNC_5(VAR_2, VAR_3, VAR_5);
        VAR_3 = VAR_2;
    }
    VAR_11 = VAR_5;
    if (VAR_11 > 64U - VAR_0) {
        VAR_11 = 64U - VAR_0;
    }
    for (VAR_10 = 0U; VAR_10 < VAR_11; VAR_10++) {
        VAR_8[VAR_0 + VAR_10] = VAR_3[VAR_10];
    }
    FUNC_3(VAR_8, VAR_8,
                              VAR_0 + VAR_11,
                              VAR_6 + 16, VAR_9);
    for (VAR_10 = 0U; VAR_10 < VAR_11; VAR_10++) {
        VAR_2[VAR_10] = VAR_8[VAR_10 + VAR_0];
    }
    if (VAR_5 > VAR_11) {
        FUNC_4(VAR_2 + VAR_11, VAR_3 + VAR_11, VAR_5 - VAR_11,
                                      VAR_6 + 16, 1U, VAR_9);
    }
    FUNC_6(VAR_9, sizeof VAR_9);

    return 0;
}
