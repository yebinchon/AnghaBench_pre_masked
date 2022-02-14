
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int quicly_generate_resumption_token_t ;
typedef int quicly_conn_t ;
typedef int quicly_address_token_plaintext_t ;
struct TYPE_6__ {int off; } ;
typedef TYPE_1__ ptls_buffer_t ;
struct TYPE_8__ {int enc; } ;
struct TYPE_7__ {int random_bytes; } ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_1__*,int ,int *) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_1(quicly_generate_resumption_token_t *VAR_2, quicly_conn_t *VAR_3, ptls_buffer_t *VAR_4,
                                        quicly_address_token_plaintext_t *VAR_5)
{
    return FUNC_0(VAR_1.random_bytes, VAR_0.enc, VAR_4, VAR_4->off, VAR_5);
}
