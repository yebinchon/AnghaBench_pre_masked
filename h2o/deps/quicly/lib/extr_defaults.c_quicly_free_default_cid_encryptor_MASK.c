
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_quicly_default_encrypt_cid_t {int reset_token_ctx; int cid_decrypt_ctx; int cid_encrypt_ctx; } ;
typedef int quicly_cid_encryptor_t ;


 int FUNC_0 (struct st_quicly_default_encrypt_cid_t*) ;
 int FUNC_1 (int ) ;

void FUNC_2(quicly_cid_encryptor_t *VAR_0)
{
    struct st_quicly_default_encrypt_cid_t *VAR_1 = (void *)VAR_0;

    FUNC_1(VAR_1->cid_encrypt_ctx);
    FUNC_1(VAR_1->cid_decrypt_ctx);
    FUNC_1(VAR_1->reset_token_ctx);
    FUNC_0(VAR_1);
}
