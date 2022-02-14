
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int secp256k1_sha256 ;
typedef int secp256k1_scalar ;
typedef int c ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned char*,int*) ;
 int FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char*,int) ;

__attribute__((used)) static void FUNC_5(uint32_t VAR_0, secp256k1_scalar* VAR_1) {
    secp256k1_sha256 VAR_2;
    unsigned char VAR_3[11] = {'e', 'c', 'm', 'u', 'l', 't', 0, 0, 0, 0};
    unsigned char VAR_4[32];
    int VAR_5 = 0;
    VAR_3[6] = VAR_0;
    VAR_3[7] = VAR_0 >> 8;
    VAR_3[8] = VAR_0 >> 16;
    VAR_3[9] = VAR_0 >> 24;
    FUNC_3(&VAR_2);
    FUNC_4(&VAR_2, VAR_3, sizeof(VAR_3));
    FUNC_2(&VAR_2, VAR_4);
    FUNC_1(VAR_1, VAR_4, &VAR_5);
    FUNC_0(!VAR_5);
}
