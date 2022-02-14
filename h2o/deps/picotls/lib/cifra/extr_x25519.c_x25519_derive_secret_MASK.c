
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int len; int * base; } ;
typedef TYPE_1__ ptls_iovec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*,int const*) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(ptls_iovec_t *VAR_2, const uint8_t *VAR_3, const uint8_t *VAR_4,
                                const uint8_t *VAR_5, const uint8_t *VAR_6)
{
    if ((VAR_2->base = FUNC_1(VAR_1)) == ((void*)0))
        return VAR_0;

    FUNC_0(VAR_2->base, VAR_3 != ((void*)0) ? VAR_3 : VAR_5, VAR_3 != ((void*)0) ? VAR_6 : VAR_4);
    VAR_2->len = VAR_1;
    return 0;
}
