
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int* d; } ;
typedef TYPE_1__ secp256k1_scalar ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(secp256k1_scalar *VAR_0, const secp256k1_scalar *VAR_1, const secp256k1_scalar *VAR_2) {
    int VAR_3;
    uint64_t VAR_4 = (uint64_t)VAR_1->d[0] + VAR_2->d[0];
    VAR_0->d[0] = VAR_4 & 0xFFFFFFFFULL; VAR_4 >>= 32;
    VAR_4 += (uint64_t)VAR_1->d[1] + VAR_2->d[1];
    VAR_0->d[1] = VAR_4 & 0xFFFFFFFFULL; VAR_4 >>= 32;
    VAR_4 += (uint64_t)VAR_1->d[2] + VAR_2->d[2];
    VAR_0->d[2] = VAR_4 & 0xFFFFFFFFULL; VAR_4 >>= 32;
    VAR_4 += (uint64_t)VAR_1->d[3] + VAR_2->d[3];
    VAR_0->d[3] = VAR_4 & 0xFFFFFFFFULL; VAR_4 >>= 32;
    VAR_4 += (uint64_t)VAR_1->d[4] + VAR_2->d[4];
    VAR_0->d[4] = VAR_4 & 0xFFFFFFFFULL; VAR_4 >>= 32;
    VAR_4 += (uint64_t)VAR_1->d[5] + VAR_2->d[5];
    VAR_0->d[5] = VAR_4 & 0xFFFFFFFFULL; VAR_4 >>= 32;
    VAR_4 += (uint64_t)VAR_1->d[6] + VAR_2->d[6];
    VAR_0->d[6] = VAR_4 & 0xFFFFFFFFULL; VAR_4 >>= 32;
    VAR_4 += (uint64_t)VAR_1->d[7] + VAR_2->d[7];
    VAR_0->d[7] = VAR_4 & 0xFFFFFFFFULL; VAR_4 >>= 32;
    VAR_3 = VAR_4 + FUNC_1(VAR_0);
    FUNC_0(VAR_3 == 0 || VAR_3 == 1);
    FUNC_2(VAR_0, VAR_3);
    return VAR_3;
}
