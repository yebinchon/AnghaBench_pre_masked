
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ptls_t ;
typedef int ptls_on_client_hello_t ;
struct TYPE_6__ {size_t count; TYPE_3__* list; } ;
struct TYPE_7__ {TYPE_1__ negotiated_protocols; } ;
typedef TYPE_2__ ptls_on_client_hello_parameters_t ;
struct TYPE_8__ {scalar_t__ len; scalar_t__ base; } ;
typedef TYPE_3__ ptls_iovec_t ;
struct TYPE_9__ {size_t count; TYPE_3__* list; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_5__ VAR_1 ;
 int FUNC_1 (int *,char const*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(ptls_on_client_hello_t *VAR_2, ptls_t *VAR_3, ptls_on_client_hello_parameters_t *VAR_4)
{
    int VAR_5;

    if (VAR_1.count != 0) {
        size_t VAR_6, VAR_7;
        const ptls_iovec_t *VAR_8, *VAR_9;
        for (VAR_6 = 0; VAR_6 != VAR_1.count; ++VAR_6) {
            VAR_8 = VAR_1.list + VAR_6;
            for (VAR_7 = 0; VAR_7 != VAR_4->negotiated_protocols.count; ++VAR_7) {
                VAR_9 = VAR_4->negotiated_protocols.list + VAR_7;
                if (VAR_8->len == VAR_9->len && FUNC_0(VAR_8->base, VAR_9->base, VAR_8->len) == 0)
                    goto ALPN_Found;
            }
        }
        return VAR_0;
    ALPN_Found:
        if ((VAR_5 = FUNC_1(VAR_3, (const char *)VAR_8->base, VAR_8->len)) != 0)
            return VAR_5;
    }

    return 0;
}
