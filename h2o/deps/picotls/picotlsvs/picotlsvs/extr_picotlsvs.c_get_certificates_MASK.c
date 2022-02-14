
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; int len; } ;
typedef TYPE_1__ ptls_iovec_t ;
typedef int X509 ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (char*) ;
 int VAR_0 ;

int FUNC_3(char * VAR_1, ptls_iovec_t ** VAR_2, int * VAR_3)
{
    int VAR_4 = 0;
    size_t VAR_5 = 0;
    X509 *VAR_6;
    static ptls_iovec_t VAR_7[16];

    *VAR_3 = 0;
    *VAR_2 = ((void*)0);

    VAR_6 = FUNC_2(VAR_1);

    if (VAR_6 == ((void*)0))
    {
        FUNC_0(VAR_0, "Could not read cert in %s\n", VAR_1);
        VAR_4 = -1;
    }
    else
    {
        ptls_iovec_t *VAR_8 = VAR_7 + VAR_5++;
        VAR_8->len = FUNC_1(VAR_6, &VAR_8->base);
    }

    *VAR_3 = (int) VAR_5;
    *VAR_2 = VAR_7;

    return VAR_4;
}
