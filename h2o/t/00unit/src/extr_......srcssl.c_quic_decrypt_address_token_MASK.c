
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dec; } ;
struct st_quic_keyset_t {TYPE_1__ address_token; } ;
typedef int quicly_address_token_plaintext_t ;
struct TYPE_5__ {int len; int * base; } ;
typedef TYPE_2__ ptls_iovec_t ;


 int VAR_0 ;
 struct st_quic_keyset_t* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int ,int) ;
 int FUNC_2 () ;

int FUNC_3(quicly_address_token_plaintext_t *VAR_1, ptls_iovec_t VAR_2)
{
    struct st_quic_keyset_t *VAR_3;

    FUNC_2();

    if ((VAR_3 = FUNC_0(VAR_2.base[0])) == ((void*)0))
        return VAR_0;
    return FUNC_1(VAR_3->address_token.dec, VAR_1, VAR_2.base, VAR_2.len, 1);
}
