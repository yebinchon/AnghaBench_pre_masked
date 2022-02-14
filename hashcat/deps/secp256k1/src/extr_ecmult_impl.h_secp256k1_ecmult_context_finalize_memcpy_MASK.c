
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int secp256k1_ge_storage ;
struct TYPE_4__ {int ** pre_g_128; int ** pre_g; } ;
typedef TYPE_1__ secp256k1_ecmult_context ;



__attribute__((used)) static void FUNC_0(secp256k1_ecmult_context *VAR_0, const secp256k1_ecmult_context *VAR_1) {
    if (VAR_1->pre_g != ((void*)0)) {

        VAR_0->pre_g = (secp256k1_ge_storage (*)[])(void*)((unsigned char*)VAR_0 + ((unsigned char*)(VAR_1->pre_g) - (unsigned char*)VAR_1));
    }





}
