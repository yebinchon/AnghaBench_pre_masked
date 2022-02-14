
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ge25519_p3 ;


 int FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*,int *) ;
 int FUNC_3 (int *,unsigned char*) ;
 scalar_t__ FUNC_4 (unsigned char const*,int) ;

__attribute__((used)) static int
FUNC_5(unsigned char *VAR_0,
                                const unsigned char *VAR_1, const int VAR_2)
{
    unsigned char *VAR_3 = VAR_0;
    ge25519_p3 VAR_4;
    unsigned int VAR_5;

    for (VAR_5 = 0; VAR_5 < 32; ++VAR_5) {
        VAR_3[VAR_5] = VAR_1[VAR_5];
    }
    if (VAR_2 != 0) {
        FUNC_0(VAR_3);
    }
    VAR_3[31] &= 127;

    FUNC_3(&VAR_4, VAR_3);
    FUNC_2(VAR_0, &VAR_4);
    if (FUNC_1(VAR_0) != 0 || FUNC_4(VAR_1, 32)) {
        return -1;
    }
    return 0;
}
