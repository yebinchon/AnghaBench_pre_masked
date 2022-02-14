
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_quic_keyset_t {int name; TYPE_2__* cid; } ;
struct TYPE_5__ {int len; int * cid; } ;
typedef TYPE_1__ quicly_cid_t ;
typedef int quicly_cid_plaintext_t ;
typedef int quicly_cid_encryptor_t ;
struct TYPE_6__ {int (* encrypt_cid ) (TYPE_2__*,TYPE_1__*,void*,int const*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,void*,int const*) ;
 struct st_quic_keyset_t* FUNC_3 () ;

__attribute__((used)) static void FUNC_4(quicly_cid_encryptor_t *VAR_0, quicly_cid_t *VAR_1, void *VAR_2,
                        const quicly_cid_plaintext_t *VAR_3)
{
    struct st_quic_keyset_t *VAR_4 = FUNC_3();
    quicly_cid_t VAR_5;

    VAR_4->cid->encrypt_cid(VAR_4->cid, &VAR_5, VAR_2, VAR_3);
    FUNC_0(VAR_5.len < sizeof(VAR_5.cid));
    VAR_1->cid[0] = VAR_4->name;
    FUNC_1(VAR_1->cid + 1, VAR_5.cid, VAR_5.len);
    VAR_1->len = VAR_5.len + 1;
}
