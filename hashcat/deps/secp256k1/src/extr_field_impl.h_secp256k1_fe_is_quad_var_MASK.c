
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_num ;
typedef int secp256k1_fe ;


 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_5(const secp256k1_fe *VAR_0) {

    unsigned char VAR_1[32];
    secp256k1_num VAR_2;
    secp256k1_num VAR_3;

    static const unsigned char VAR_4[32] = {
        0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
        0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
        0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
        0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFC,0x2F
    };

    secp256k1_fe VAR_5 = *VAR_0;
    FUNC_1(&VAR_5);
    FUNC_0(VAR_1, &VAR_5);
    FUNC_4(&VAR_2, VAR_1, 32);
    FUNC_4(&VAR_3, VAR_4, 32);
    return FUNC_3(&VAR_2, &VAR_3) >= 0;




}
