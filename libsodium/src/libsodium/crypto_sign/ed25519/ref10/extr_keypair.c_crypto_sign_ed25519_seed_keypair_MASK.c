
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ge25519_p3 ;


 int FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int FUNC_1 (unsigned char*,int *) ;
 int FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned char const*,int) ;

int
FUNC_4(unsigned char *VAR_0, unsigned char *VAR_1,
                                 const unsigned char *VAR_2)
{
    ge25519_p3 VAR_3;

    FUNC_0(VAR_1, VAR_2, 32);
    VAR_1[0] &= 248;
    VAR_1[31] &= 127;
    VAR_1[31] |= 64;

    FUNC_2(&VAR_3, VAR_1);
    FUNC_1(VAR_0, &VAR_3);

    FUNC_3(VAR_1, VAR_2, 32);
    FUNC_3(VAR_1 + 32, VAR_0, 32);

    return 0;
}
