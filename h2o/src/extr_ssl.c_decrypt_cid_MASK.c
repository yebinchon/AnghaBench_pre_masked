
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct st_quic_keyset_t {TYPE_1__* cid; } ;
typedef int quicly_cid_plaintext_t ;
typedef int quicly_cid_encryptor_t ;
struct TYPE_2__ {size_t (* decrypt_cid ) (TYPE_1__*,int *,int const*,size_t) ;} ;


 size_t VAR_0 ;
 struct st_quic_keyset_t* FUNC_0 (int const) ;
 size_t FUNC_1 (TYPE_1__*,int *,int const*,size_t) ;
 int FUNC_2 () ;

__attribute__((used)) static size_t FUNC_3(quicly_cid_encryptor_t *VAR_1, quicly_cid_plaintext_t *VAR_2, const void *VAR_3, size_t VAR_4)
{
    const uint8_t *VAR_5 = VAR_3;
    struct st_quic_keyset_t *VAR_6;

    FUNC_2();

    if ((VAR_6 = FUNC_0(VAR_5[0])) == ((void*)0))
        return VAR_0;
    if ((VAR_4 = VAR_6->cid->decrypt_cid(VAR_6->cid, VAR_2, VAR_5 + 1, VAR_4 != 0 ? VAR_4 - 1 : 0)) == VAR_0)
        return VAR_0;
    return 1 + VAR_4;
}
