
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int * enc; } ;
struct st_quic_keyset_t {TYPE_1__ address_token; int name; } ;
typedef int ptls_aead_context_t ;


 struct st_quic_keyset_t* FUNC_0 () ;

ptls_aead_context_t *FUNC_1(uint8_t *VAR_0)
{
    struct st_quic_keyset_t *VAR_1 = FUNC_0();
    *VAR_0 = VAR_1->name;
    return VAR_1->address_token.enc;
}
