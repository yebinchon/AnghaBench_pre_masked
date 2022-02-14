
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * do_decrypt; int * do_encrypt_final; int * do_encrypt_update; int * do_encrypt_init; int dispose_crypto; } ;
struct chacha20poly1305_context_t {int key; TYPE_1__ super; } ;
typedef int ptls_aead_context_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int ,void const*,int) ;

__attribute__((used)) static int FUNC_1(ptls_aead_context_t *VAR_5, int VAR_6, const void *VAR_7)
{
    struct chacha20poly1305_context_t *VAR_8 = (struct chacha20poly1305_context_t *)VAR_5;

    VAR_8->super.dispose_crypto = VAR_1;
    if (VAR_6) {
        VAR_8->super.do_encrypt_init = VAR_4;
        VAR_8->super.do_encrypt_update = VAR_3;
        VAR_8->super.do_encrypt_final = VAR_2;
        VAR_8->super.do_decrypt = ((void*)0);
    } else {
        VAR_8->super.do_encrypt_init = ((void*)0);
        VAR_8->super.do_encrypt_update = ((void*)0);
        VAR_8->super.do_encrypt_final = ((void*)0);
        VAR_8->super.do_decrypt = VAR_0;
    }

    FUNC_0(VAR_8->key, VAR_7, sizeof(VAR_8->key));
    return 0;
}
