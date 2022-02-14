
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptls_t ;
struct TYPE_6__ {TYPE_1__* hash; } ;
typedef TYPE_2__ ptls_cipher_suite_t ;
struct TYPE_5__ {size_t digest_size; } ;


 int FUNC_0 (int *,int *,size_t,char const*,int ,int) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(
    ptls_t *VAR_0, const char *VAR_1,
    ptls_cipher_suite_t ** VAR_2,
    uint8_t * VAR_3, size_t VAR_4)
{
    int VAR_5 = 0;
    *VAR_2 = FUNC_1(VAR_0);

    if (*VAR_2 == ((void*)0))
    {
        VAR_5 = -1;
    }
    else if ((*VAR_2)->hash->digest_size > VAR_4)
    {
        VAR_5 = -1;
    }
    else
    {
        VAR_5 = FUNC_0(VAR_0, VAR_3, (*VAR_2)->hash->digest_size,
            VAR_1, FUNC_2(((void*)0), 0), 1);
    }

    return 0;
}
