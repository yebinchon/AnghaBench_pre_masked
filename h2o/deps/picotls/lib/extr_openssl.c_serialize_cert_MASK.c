
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* base; int len; } ;
typedef TYPE_1__ ptls_iovec_t ;
typedef int X509 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int *,unsigned char**) ;
 unsigned char* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(X509 *VAR_1, ptls_iovec_t *VAR_2)
{
    int VAR_3 = FUNC_1(VAR_1, ((void*)0));
    FUNC_0(VAR_3 > 0);

    if ((VAR_2->base = FUNC_2(VAR_3)) == ((void*)0))
        return VAR_0;
    unsigned char *VAR_4 = VAR_2->base;
    VAR_2->len = FUNC_1(VAR_1, &VAR_4);
    FUNC_0(VAR_3 == VAR_2->len);

    return 0;
}
