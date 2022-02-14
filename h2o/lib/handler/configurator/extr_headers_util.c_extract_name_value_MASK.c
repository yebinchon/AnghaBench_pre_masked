
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int len; int base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 scalar_t__ FUNC_0 (char const*,int,TYPE_1__**) ;
 TYPE_1__ FUNC_1 (char const*,int ) ;
 TYPE_1__ FUNC_2 (int *,int ,int ) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0, h2o_iovec_t **VAR_1, h2o_iovec_t *VAR_2)
{
    const char *VAR_3 = FUNC_3(VAR_0, ':');

    if (VAR_3 == ((void*)0))
        return -1;

    if (FUNC_0(VAR_0, VAR_3 - VAR_0, VAR_1) != 0)
        return -1;
    *VAR_2 = FUNC_1(VAR_3 + 1, FUNC_4(VAR_3 + 1));
    *VAR_2 = FUNC_2(((void*)0), VAR_2->base, VAR_2->len);

    return 0;
}
