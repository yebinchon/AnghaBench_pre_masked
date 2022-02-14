
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ id; } ;
typedef TYPE_1__ ptls_key_exchange_algorithm_t ;
typedef int ptls_iovec_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int *,int const**,int const* const) ;

__attribute__((used)) static int FUNC_1(ptls_key_exchange_algorithm_t **VAR_1, ptls_iovec_t *VAR_2,
                            ptls_key_exchange_algorithm_t **VAR_3, const uint8_t **VAR_4, const uint8_t *const VAR_5,
                            int VAR_6)
{
    int VAR_7;

    *VAR_1 = ((void*)0);

    if (VAR_6 && *VAR_4 == VAR_5) {
        VAR_7 = VAR_0;
        goto Exit;
    }

    while (*VAR_4 != VAR_5) {
        uint16_t VAR_8;
        ptls_iovec_t VAR_9;
        if ((VAR_7 = FUNC_0(&VAR_8, &VAR_9, VAR_4, VAR_5)) != 0)
            goto Exit;
        ptls_key_exchange_algorithm_t **VAR_10 = VAR_3;
        for (; *VAR_10 != ((void*)0); ++VAR_10) {
            if (*VAR_1 == ((void*)0) && (*VAR_10)->id == VAR_8) {
                *VAR_1 = *VAR_10;
                *VAR_2 = VAR_9;
            }
        }
        if (VAR_6) {
            VAR_7 = *VAR_1 != ((void*)0) ? 0 : VAR_0;
            goto Exit;
        }
    }

    VAR_7 = 0;

Exit:
    return VAR_7;
}
