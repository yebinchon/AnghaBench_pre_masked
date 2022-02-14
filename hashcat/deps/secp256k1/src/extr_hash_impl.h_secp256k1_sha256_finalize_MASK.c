
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int bytes; int* s; } ;
typedef TYPE_1__ secp256k1_sha256 ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char const*,int) ;
 int FUNC_2 (TYPE_1__*,unsigned char const*,int) ;

__attribute__((used)) static void FUNC_3(secp256k1_sha256 *VAR_0, unsigned char *VAR_1) {
    static const unsigned char VAR_2[64] = {0x80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    uint32_t VAR_3[2];
    uint32_t VAR_4[8];
    int VAR_5 = 0;
    VAR_3[0] = FUNC_0(VAR_0->bytes >> 29);
    VAR_3[1] = FUNC_0(VAR_0->bytes << 3);
    FUNC_2(VAR_0, VAR_2, 1 + ((119 - (VAR_0->bytes % 64)) % 64));
    FUNC_2(VAR_0, (const unsigned char*)VAR_3, 8);
    for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
        VAR_4[VAR_5] = FUNC_0(VAR_0->s[VAR_5]);
        VAR_0->s[VAR_5] = 0;
    }
    FUNC_1(VAR_1, (const unsigned char*)VAR_4, 32);
}
