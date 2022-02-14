
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {int len; int * base; } ;
typedef TYPE_1__ ptls_iovec_t ;
struct TYPE_15__ {int (* final ) (TYPE_2__*,int *,int) ;int (* update ) (TYPE_2__*,int *,int) ;} ;
typedef TYPE_2__ ptls_hash_context_t ;
struct TYPE_16__ {size_t digest_size; } ;
typedef TYPE_3__ ptls_hash_algorithm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int *,size_t) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int *,int) ;
 int FUNC_3 (TYPE_2__*,int *,int) ;
 int FUNC_4 (TYPE_2__*,int *,int) ;
 int FUNC_5 (TYPE_2__*,int *,int) ;
 int FUNC_6 (TYPE_2__*,int *,int) ;
 int FUNC_7 (TYPE_2__*,int *,int) ;

int FUNC_8(ptls_hash_algorithm_t *VAR_3, void *VAR_4, size_t VAR_5, ptls_iovec_t VAR_6, ptls_iovec_t VAR_7)
{
    ptls_hash_context_t *VAR_8 = ((void*)0);
    size_t VAR_9;
    uint8_t VAR_10[VAR_2];

    for (VAR_9 = 0; (VAR_9 * VAR_3->digest_size) < VAR_5; ++VAR_9) {
        if (VAR_8 == ((void*)0)) {
            if ((VAR_8 = FUNC_2(VAR_3, VAR_6.base, VAR_6.len)) == ((void*)0))
                return VAR_0;
        } else {
            VAR_8->update(VAR_8, VAR_10, VAR_3->digest_size);
        }
        VAR_8->update(VAR_8, VAR_7.base, VAR_7.len);
        uint8_t VAR_11 = (uint8_t)(VAR_9 + 1);
        VAR_8->update(VAR_8, &VAR_11, 1);
        VAR_8->final(VAR_8, VAR_10, 1);

        size_t VAR_12 = VAR_9 * VAR_3->digest_size, VAR_13 = VAR_12 + VAR_3->digest_size;
        if (VAR_13 > VAR_5)
            VAR_13 = VAR_5;
        FUNC_0((uint8_t *)VAR_4 + VAR_12, VAR_10, VAR_13 - VAR_12);
    }

    if (VAR_8 != ((void*)0))
        VAR_8->final(VAR_8, ((void*)0), VAR_1);

    FUNC_1(VAR_10, VAR_3->digest_size);

    return 0;
}
