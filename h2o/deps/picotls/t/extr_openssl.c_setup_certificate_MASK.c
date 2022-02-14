
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * base; int len; } ;
typedef TYPE_1__ ptls_iovec_t ;
typedef int X509 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(ptls_iovec_t *VAR_1)
{
    X509 *VAR_2 = FUNC_2(VAR_0);

    VAR_1->base = ((void*)0);
    VAR_1->len = FUNC_1(VAR_2, &VAR_1->base);

    FUNC_0(VAR_2);
}
