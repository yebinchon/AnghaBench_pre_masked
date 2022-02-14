
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* name; } ;
typedef TYPE_2__ h2o_header_t ;
struct TYPE_3__ {scalar_t__ len; int base; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
    const h2o_header_t *VAR_2 = VAR_0, *VAR_3 = VAR_1;

    if (VAR_2->name->len < VAR_3->name->len)
        return -1;
    if (VAR_2->name->len > VAR_3->name->len)
        return 1;
    return FUNC_0(VAR_2->name->base, VAR_3->name->base, VAR_2->name->len);
}
