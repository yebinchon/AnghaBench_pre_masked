
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fe25519 ;


 int FUNC_0 (int ,unsigned char*) ;
 int FUNC_1 (unsigned char*,int ,unsigned char) ;
 int FUNC_2 (unsigned char*,unsigned char const*,int) ;

void
FUNC_3(unsigned char VAR_0[32], const unsigned char VAR_1[32])
{
    fe25519 VAR_2;
    unsigned char VAR_3;

    FUNC_2(VAR_0, VAR_1, 32);
    VAR_3 = VAR_0[31] & 0x80;
    VAR_0[31] &= 0x7f;
    FUNC_0(VAR_2, VAR_0);
    FUNC_1(VAR_0, VAR_2, VAR_3);
}
