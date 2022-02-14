
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int buf; } ;
typedef TYPE_1__ h2o_token_t ;
struct TYPE_9__ {scalar_t__ len; int base; } ;
typedef TYPE_2__ h2o_iovec_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,scalar_t__) ;
 TYPE_2__* FUNC_2 (int) ;
 TYPE_2__ FUNC_3 (char const*,size_t) ;
 TYPE_2__ FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(const char *VAR_0, size_t VAR_1, h2o_iovec_t **VAR_2)
{
    h2o_iovec_t VAR_3;
    const h2o_token_t *VAR_4;

    VAR_3 = FUNC_3(VAR_0, VAR_1);
    if (VAR_3.len == 0)
        return -1;

    VAR_3 = FUNC_4(((void*)0), VAR_3.base, VAR_3.len);
    FUNC_5(VAR_3.base, VAR_3.len);

    if ((VAR_4 = FUNC_1(VAR_3.base, VAR_3.len)) != ((void*)0)) {
        *VAR_2 = (h2o_iovec_t *)&VAR_4->buf;
        FUNC_0(VAR_3.base);
    } else {
        *VAR_2 = FUNC_2(sizeof(**VAR_2));
        **VAR_2 = VAR_3;
    }

    return 0;
}
