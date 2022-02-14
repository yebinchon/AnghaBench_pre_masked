
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct st_x25519_key_exchange_t {int priv; int pub; } ;
typedef int ptls_key_exchange_context_t ;
struct TYPE_5__ {scalar_t__ len; int base; } ;
typedef TYPE_1__ ptls_iovec_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct st_x25519_key_exchange_t*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_3(ptls_key_exchange_context_t **VAR_2, int VAR_3, ptls_iovec_t *VAR_4, ptls_iovec_t VAR_5)
{
    struct st_x25519_key_exchange_t *VAR_6 = (struct st_x25519_key_exchange_t *)*VAR_2;
    int VAR_7;

    if (VAR_4 == ((void*)0)) {
        VAR_7 = 0;
        goto Exit;
    }

    if (VAR_5.len != VAR_1) {
        VAR_7 = VAR_0;
        goto Exit;
    }
    VAR_7 = FUNC_2(VAR_4, VAR_6->priv, VAR_6->pub, ((void*)0), VAR_5.base);

Exit:
    if (VAR_3) {
        FUNC_1(VAR_6->priv, sizeof(VAR_6->priv));
        FUNC_0(VAR_6);
        *VAR_2 = ((void*)0);
    }
    return VAR_7;
}
