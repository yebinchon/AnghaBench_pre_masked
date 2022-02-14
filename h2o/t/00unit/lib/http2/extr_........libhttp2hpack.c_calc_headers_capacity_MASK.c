
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int len; } ;
struct TYPE_7__ {TYPE_2__ value; TYPE_1__* name; } ;
typedef TYPE_3__ h2o_header_t ;
struct TYPE_5__ {int len; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static size_t FUNC_1(const h2o_header_t *VAR_0, size_t VAR_1)
{
    const h2o_header_t *VAR_2;
    size_t VAR_3 = 0;
    for (VAR_2 = VAR_0; VAR_1 != 0; ++VAR_2, --VAR_1)
        VAR_3 += FUNC_0(VAR_2->name->len, VAR_2->value.len);
    return VAR_3;
}
