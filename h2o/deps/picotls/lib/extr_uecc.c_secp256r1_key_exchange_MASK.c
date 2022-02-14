
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int ptls_key_exchange_algorithm_t ;
struct TYPE_6__ {scalar_t__ len; scalar_t__* base; } ;
typedef TYPE_1__ ptls_iovec_t ;
typedef int priv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__*,int) ;
 TYPE_1__ FUNC_3 (scalar_t__*,scalar_t__) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__*,scalar_t__*,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_7(ptls_key_exchange_algorithm_t *VAR_6, ptls_iovec_t *VAR_7, ptls_iovec_t *VAR_8,
                                  ptls_iovec_t VAR_9)
{
    uint8_t VAR_10[VAR_2], *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
    int VAR_13;

    if (VAR_9.len != VAR_3 || VAR_9.base[0] != VAR_5) {
        VAR_13 = VAR_0;
        goto Exit;
    }
    if ((VAR_11 = FUNC_1(VAR_3)) == ((void*)0)) {
        VAR_13 = VAR_1;
        goto Exit;
    }
    if ((VAR_12 = FUNC_1(VAR_4)) == ((void*)0)) {
        VAR_13 = VAR_1;
        goto Exit;
    }

    VAR_11[0] = VAR_5;
    FUNC_4(VAR_11 + 1, VAR_10, FUNC_5());
    if (!FUNC_6(VAR_9.base + 1, VAR_10, VAR_12, FUNC_5())) {
        VAR_13 = VAR_0;
        goto Exit;
    }
    *VAR_7 = FUNC_3(VAR_11, VAR_3);
    *VAR_8 = FUNC_3(VAR_12, VAR_4);
    VAR_13 = 0;

Exit:
    FUNC_2(VAR_10, sizeof(VAR_10));
    if (VAR_13 != 0) {
        FUNC_0(VAR_12);
        FUNC_0(VAR_11);
    }
    return VAR_13;
}
