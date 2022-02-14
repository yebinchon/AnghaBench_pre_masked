
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptls_key_exchange_algorithm_t ;
struct TYPE_7__ {int len; int base; } ;
typedef TYPE_1__ ptls_iovec_t ;
typedef int priv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 TYPE_1__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,int *,int ,int *,int *) ;

__attribute__((used)) static int FUNC_5(ptls_key_exchange_algorithm_t *VAR_3, ptls_iovec_t *VAR_4, ptls_iovec_t *VAR_5,
                               ptls_iovec_t VAR_6)
{
    uint8_t VAR_7[VAR_2], *VAR_8 = ((void*)0);
    int VAR_9;

    if (VAR_6.len != VAR_2) {
        VAR_9 = VAR_0;
        goto Exit;
    }
    if ((VAR_8 = FUNC_0(VAR_2)) == ((void*)0)) {
        VAR_9 = VAR_1;
        goto Exit;
    }

    FUNC_3(VAR_7, VAR_8);
    if ((VAR_9 = FUNC_4(VAR_5, ((void*)0), VAR_6.base, VAR_7, VAR_8)) != 0)
        goto Exit;

    *VAR_4 = FUNC_2(VAR_8, VAR_2);
    VAR_9 = 0;

Exit:
    FUNC_1(VAR_7, sizeof(VAR_7));
    if (VAR_8 != ((void*)0) && VAR_9 != 0)
        FUNC_1(VAR_8, VAR_2);
    return VAR_9;
}
