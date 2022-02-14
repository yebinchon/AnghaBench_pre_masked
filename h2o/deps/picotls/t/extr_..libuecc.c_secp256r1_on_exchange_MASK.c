
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct st_secp256r1_key_exhchange_t {int priv; } ;
typedef struct st_secp256r1_key_exhchange_t uint8_t ;
typedef int ptls_key_exchange_context_t ;
struct TYPE_5__ {scalar_t__ len; scalar_t__* base; } ;
typedef TYPE_1__ ptls_iovec_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct st_secp256r1_key_exhchange_t*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 TYPE_1__ FUNC_3 (struct st_secp256r1_key_exhchange_t*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__*,int ,struct st_secp256r1_key_exhchange_t*,int ) ;

__attribute__((used)) static int FUNC_6(ptls_key_exchange_context_t **VAR_5, int VAR_6, ptls_iovec_t *VAR_7, ptls_iovec_t VAR_8)
{
    struct st_secp256r1_key_exhchange_t *VAR_9 = (struct st_secp256r1_key_exhchange_t *)*VAR_5;
    uint8_t *VAR_10 = ((void*)0);
    int VAR_11;

    if (VAR_7 == ((void*)0)) {
        VAR_11 = 0;
        goto Exit;
    }

    if (VAR_8.len != VAR_2 || VAR_8.base[0] != VAR_4) {
        VAR_11 = VAR_0;
        goto Exit;
    }
    if ((VAR_10 = (uint8_t *)FUNC_1(VAR_3)) == ((void*)0)) {
        VAR_11 = VAR_1;
        goto Exit;
    }
    if (!FUNC_5(VAR_8.base + 1, VAR_9->priv, VAR_10, FUNC_4())) {
        VAR_11 = VAR_0;
        goto Exit;
    }
    *VAR_7 = FUNC_3(VAR_10, VAR_3);
    VAR_11 = 0;

Exit:
    if (VAR_11 != 0)
        FUNC_0(VAR_10);
    if (VAR_6) {
        FUNC_2(VAR_9->priv, sizeof(VAR_9->priv));
        FUNC_0(VAR_9);
        *VAR_5 = ((void*)0);
    }
    return VAR_11;
}
