
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bytes; scalar_t__ buf; int s; } ;
typedef TYPE_1__ secp256k1_sha256 ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(secp256k1_sha256 *VAR_0, const unsigned char *VAR_1, size_t VAR_2) {
    size_t VAR_3 = VAR_0->bytes & 0x3F;
    VAR_0->bytes += VAR_2;
    FUNC_0(VAR_0->bytes >= VAR_2);
    while (VAR_2 >= 64 - VAR_3) {

        size_t VAR_4 = 64 - VAR_3;
        FUNC_1(((unsigned char*)VAR_0->buf) + VAR_3, VAR_1, VAR_4);
        VAR_1 += VAR_4;
        VAR_2 -= VAR_4;
        FUNC_2(VAR_0->s, VAR_0->buf);
        VAR_3 = 0;
    }
    if (VAR_2) {

        FUNC_1(((unsigned char*)VAR_0->buf) + VAR_3, VAR_1, VAR_2);
    }
}
