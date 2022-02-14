
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int quicly_generate_resumption_token_t ;
typedef int quicly_conn_t ;
typedef int quicly_address_token_plaintext_t ;
struct TYPE_5__ {scalar_t__ off; int * base; } ;
typedef TYPE_1__ ptls_buffer_t ;
typedef int ptls_aead_context_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,TYPE_1__*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_3(quicly_generate_resumption_token_t *VAR_1, quicly_conn_t *VAR_2, ptls_buffer_t *VAR_3,
                                     quicly_address_token_plaintext_t *VAR_4)
{
    uint8_t VAR_5;
    ptls_aead_context_t *VAR_6 = FUNC_1(&VAR_5);
    int VAR_7;

    if ((VAR_7 = FUNC_0(VAR_3, 1)) != 0)
        return VAR_7;
    VAR_3->base[VAR_3->off++] = VAR_5;
    return FUNC_2(VAR_0, VAR_6, VAR_3, VAR_3->off - 1, VAR_4);
}
