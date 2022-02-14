
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct st_quic_keyset_t {TYPE_1__* cid; } ;
typedef int quicly_cid_encryptor_t ;
struct TYPE_2__ {int (* generate_stateless_reset_token ) (TYPE_1__*,void*,int const*) ;} ;


 struct st_quic_keyset_t* FUNC_0 (int const) ;
 int FUNC_1 (TYPE_1__*,void*,int const*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(quicly_cid_encryptor_t *VAR_0, void *VAR_1, const void *VAR_2)
{
    const uint8_t *VAR_3 = VAR_2;
    struct st_quic_keyset_t *VAR_4;

    FUNC_2();

    if ((VAR_4 = FUNC_0(VAR_3[0])) == ((void*)0))
        return 0;
    return VAR_4->cid->generate_stateless_reset_token(VAR_4->cid, VAR_1, VAR_3 + 1);
}
