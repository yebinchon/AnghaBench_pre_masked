
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ge25519_p3 ;
typedef int ge25519_p1p1 ;
typedef int ge25519_cached ;
typedef int fe25519 ;


 int FUNC_0 (int ,unsigned char const*) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (unsigned char*,int *) ;

void
FUNC_6(unsigned char VAR_0[32], const unsigned char VAR_1[64])
{
    fe25519 VAR_2, VAR_3;
    ge25519_cached VAR_4;
    ge25519_p1p1 VAR_5;
    ge25519_p3 VAR_6, VAR_7;
    ge25519_p3 VAR_8;

    FUNC_0(VAR_2, VAR_1);
    FUNC_0(VAR_3, VAR_1 + 32);
    FUNC_4(&VAR_6, VAR_2);
    FUNC_4(&VAR_7, VAR_3);
    FUNC_3(&VAR_4, &VAR_7);
    FUNC_1(&VAR_5, &VAR_6, &VAR_4);
    FUNC_2(&VAR_8, &VAR_5);
    FUNC_5(VAR_0, &VAR_8);
}
