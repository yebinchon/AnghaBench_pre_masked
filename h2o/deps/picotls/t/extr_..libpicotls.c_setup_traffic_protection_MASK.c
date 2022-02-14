
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct st_ptls_traffic_protection_t {size_t epoch; TYPE_11__* aead; scalar_t__* secret; scalar_t__ seq; } ;
struct TYPE_17__ {struct st_ptls_traffic_protection_t dec; struct st_ptls_traffic_protection_t enc; } ;
struct TYPE_22__ {TYPE_14__* key_schedule; TYPE_3__* ctx; TYPE_2__* cipher_suite; TYPE_1__ traffic_protection; } ;
typedef TYPE_6__ ptls_t ;
struct TYPE_23__ {int (* cb ) (TYPE_7__*,TYPE_6__*,int,size_t,scalar_t__*) ;} ;
struct TYPE_21__ {TYPE_4__* algo; } ;
struct TYPE_20__ {int digest_size; } ;
struct TYPE_19__ {int hkdf_label_prefix__obsolete; TYPE_7__* update_traffic_key; } ;
struct TYPE_18__ {int hash; int aead; } ;
struct TYPE_16__ {TYPE_5__* hashes; } ;
struct TYPE_15__ {scalar_t__* static_iv; } ;


 int FUNC_0 (char*,char const*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_14__*,scalar_t__*,char const*) ;
 int FUNC_2 (TYPE_6__*,char const*,int ) ;
 int FUNC_3 (TYPE_11__*) ;
 TYPE_11__* FUNC_4 (int ,int ,int,scalar_t__*,int ) ;
 int FUNC_5 (scalar_t__*,int ) ;
 size_t FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_7__*,TYPE_6__*,int,size_t,scalar_t__*) ;

__attribute__((used)) static int FUNC_8(ptls_t *VAR_1, int VAR_2, const char *VAR_3, size_t VAR_4, int VAR_5)
{
    static const char *VAR_6[2][4] = {
        {((void*)0), "CLIENT_EARLY_TRAFFIC_SECRET", "CLIENT_HANDSHAKE_TRAFFIC_SECRET", "CLIENT_TRAFFIC_SECRET_0"},
        {((void*)0), ((void*)0), "SERVER_HANDSHAKE_TRAFFIC_SECRET", "SERVER_TRAFFIC_SECRET_0"}};
    struct st_ptls_traffic_protection_t *VAR_7 = VAR_2 ? &VAR_1->traffic_protection.enc : &VAR_1->traffic_protection.dec;

    if (VAR_3 != ((void*)0)) {
        int VAR_8;
        if ((VAR_8 = FUNC_1(VAR_1->key_schedule, VAR_7->secret, VAR_3)) != 0)
            return VAR_8;
    }

    VAR_7->epoch = VAR_4;


    if (VAR_1->ctx->update_traffic_key != ((void*)0)) {
        if (VAR_5)
            return 0;
        return VAR_1->ctx->update_traffic_key->cb(VAR_1->ctx->update_traffic_key, VAR_1, VAR_2, VAR_4, VAR_7->secret);
    }

    if (VAR_7->aead != ((void*)0))
        FUNC_3(VAR_7->aead);
    if ((VAR_7->aead = FUNC_4(VAR_1->cipher_suite->aead, VAR_1->cipher_suite->hash, VAR_2, VAR_7->secret,
                                   VAR_1->ctx->hkdf_label_prefix__obsolete)) == ((void*)0))
        return VAR_0;
    VAR_7->seq = 0;

    FUNC_2(VAR_1, VAR_6[FUNC_6(VAR_1) == VAR_2][VAR_4],
               FUNC_5(VAR_7->secret, VAR_1->key_schedule->hashes[0].algo->digest_size));
    FUNC_0("[%s] %02x%02x,%02x%02x\n", VAR_6[FUNC_6(VAR_1)][VAR_4], (unsigned)VAR_7->secret[0],
                (unsigned)VAR_7->secret[1], (unsigned)VAR_7->aead->static_iv[0], (unsigned)VAR_7->aead->static_iv[1]);

    return 0;
}
