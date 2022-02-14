
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct phr_header {int name_len; int value_len; scalar_t__ value; scalar_t__ name; } ;
typedef int ssize_t ;
struct TYPE_22__ {scalar_t__ is_init_header_special; } ;
struct TYPE_24__ {TYPE_1__ flags; } ;
typedef TYPE_3__ h2o_token_t ;
typedef int h2o_mem_pool_t ;
struct TYPE_25__ {char* base; int len; } ;
typedef TYPE_4__ h2o_iovec_t ;
struct TYPE_26__ {int size; TYPE_2__* entries; } ;
typedef TYPE_5__ h2o_headers_t ;
struct TYPE_23__ {TYPE_4__ value; } ;


 TYPE_3__ const* VAR_0 ;
 TYPE_3__ const* VAR_1 ;
 TYPE_3__ const* VAR_2 ;
 TYPE_3__ const* VAR_3 ;
 TYPE_3__ const* VAR_4 ;
 TYPE_3__ const* VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_5__*,TYPE_3__ const*,char*,scalar_t__,int ) ;
 int FUNC_2 (int *,TYPE_5__*,scalar_t__,int,int ,char*,scalar_t__,int ) ;
 TYPE_3__* FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *,TYPE_5__*,size_t) ;
 int FUNC_6 (char*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_7(h2o_mem_pool_t *VAR_6, h2o_headers_t *VAR_7, const struct phr_header *VAR_8, size_t VAR_9,
                        h2o_iovec_t *VAR_10, h2o_iovec_t *VAR_11, h2o_iovec_t *VAR_12, h2o_iovec_t *VAR_13,
                        ssize_t *VAR_14)
{
    *VAR_14 = -1;

    FUNC_0(VAR_7->size == 0);


    if (VAR_9 != 0) {
        size_t VAR_15;
        FUNC_5(VAR_6, VAR_7, VAR_9);
        for (VAR_15 = 0; VAR_15 != VAR_9; ++VAR_15) {
            const h2o_token_t *VAR_16;
            char VAR_17[VAR_8[VAR_15].name_len];

            if (VAR_8[VAR_15].name_len == 0)
                return -1;

            FUNC_6(VAR_17, VAR_8[VAR_15].name, VAR_8[VAR_15].name_len);

            FUNC_4((char *)VAR_8[VAR_15].name, VAR_8[VAR_15].name_len);
            if ((VAR_16 = FUNC_3(VAR_8[VAR_15].name, VAR_8[VAR_15].name_len)) != ((void*)0)) {
                if (VAR_16->flags.is_init_header_special) {
                    if (VAR_16 == VAR_3) {
                        VAR_11->base = (char *)VAR_8[VAR_15].value;
                        VAR_11->len = VAR_8[VAR_15].value_len;
                    } else if (VAR_16 == VAR_1) {
                        if (*VAR_14 == -1)
                            *VAR_14 = VAR_15;
                    } else if (VAR_16 == VAR_4) {
                        *VAR_14 = VAR_15;
                    } else if (VAR_16 == VAR_2) {
                        VAR_13->base = (char *)VAR_8[VAR_15].value;
                        VAR_13->len = VAR_8[VAR_15].value_len;
                    } else if (VAR_16 == VAR_5) {
                        VAR_12->base = (char *)VAR_8[VAR_15].value;
                        VAR_12->len = VAR_8[VAR_15].value_len;
                    } else {
                        FUNC_0(!"logic flaw");
                    }
                } else {
                    FUNC_1(VAR_6, VAR_7, VAR_16, VAR_17, VAR_8[VAR_15].value, VAR_8[VAR_15].value_len);
                    if (VAR_16 == VAR_0)
                        *VAR_10 = VAR_7->entries[VAR_7->size - 1].value;
                }
            } else {
                FUNC_2(VAR_6, VAR_7, VAR_8[VAR_15].name, VAR_8[VAR_15].name_len, 0, VAR_17, VAR_8[VAR_15].value, VAR_8[VAR_15].value_len);
            }
        }
    }

    return 0;
}
