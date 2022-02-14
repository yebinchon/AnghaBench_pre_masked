
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptls_iovec_t ;
struct TYPE_4__ {int count; int * list; } ;
struct TYPE_5__ {TYPE_1__ certificates; } ;
typedef TYPE_2__ ptls_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*,char*,int *,int,int *) ;

int FUNC_2(ptls_context_t *VAR_2, char const *VAR_3)
{
    int VAR_4 = 0;

    VAR_2->certificates.list = (ptls_iovec_t *)FUNC_0(VAR_1 * sizeof(ptls_iovec_t));

    if (VAR_2->certificates.list == ((void*)0)) {
        VAR_4 = VAR_0;
    } else {
        VAR_4 = FUNC_1(VAR_3, "CERTIFICATE", VAR_2->certificates.list, VAR_1,
                                    &VAR_2->certificates.count);
    }

    return VAR_4;
}
