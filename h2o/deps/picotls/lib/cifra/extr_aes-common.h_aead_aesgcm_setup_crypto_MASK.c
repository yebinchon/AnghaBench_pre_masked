
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * do_decrypt; int * do_encrypt_final; int * do_encrypt_update; int * do_encrypt_init; int dispose_crypto; } ;
struct aesgcm_context_t {int aes; TYPE_1__ super; } ;
typedef int ptls_aead_context_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int *,void const*,size_t) ;

__attribute__((used)) static inline int FUNC_1(ptls_aead_context_t *VAR_5, int VAR_6, const void *VAR_7, size_t VAR_8)
{
    struct aesgcm_context_t *VAR_9 = (struct aesgcm_context_t *)VAR_5;

    VAR_9->super.dispose_crypto = VAR_1;
    if (VAR_6) {
        VAR_9->super.do_encrypt_init = VAR_3;
        VAR_9->super.do_encrypt_update = VAR_4;
        VAR_9->super.do_encrypt_final = VAR_2;
        VAR_9->super.do_decrypt = ((void*)0);
    } else {
        VAR_9->super.do_encrypt_init = ((void*)0);
        VAR_9->super.do_encrypt_update = ((void*)0);
        VAR_9->super.do_encrypt_final = ((void*)0);
        VAR_9->super.do_decrypt = VAR_0;
    }

    FUNC_0(&VAR_9->aes, VAR_7, VAR_8);
    return 0;
}
