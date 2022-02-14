
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int crypto_auth_hmacsha512_state ;
typedef int crypto_auth_hmacsha512256_state ;


 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;

int
FUNC_2(crypto_auth_hmacsha512256_state *VAR_0,
                                unsigned char *VAR_1)
{
    unsigned char VAR_2[64];

    FUNC_0((crypto_auth_hmacsha512_state *) VAR_0, VAR_2);
    FUNC_1(VAR_1, VAR_2, 32);

    return 0;
}
