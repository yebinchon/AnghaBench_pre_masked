
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t size; TYPE_1__* entries; } ;
typedef TYPE_2__ h2o_headers_t ;
struct TYPE_9__ {TYPE_6__* name; } ;
typedef TYPE_3__ h2o_headers_command_t ;
struct TYPE_10__ {int len; int base; } ;
struct TYPE_7__ {TYPE_6__* name; } ;


 scalar_t__ FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(h2o_headers_t *VAR_0, h2o_headers_command_t *VAR_1)
{
    size_t VAR_2, VAR_3 = 0;

    for (VAR_2 = 0; VAR_2 != VAR_0->size; ++VAR_2) {
        if (FUNC_0(VAR_1->name)) {
            if (VAR_0->entries[VAR_2].name == VAR_1->name)
                continue;
        } else {
            if (FUNC_1(VAR_0->entries[VAR_2].name->base, VAR_0->entries[VAR_2].name->len, VAR_1->name->base, VAR_1->name->len))
                continue;
        }

        if (VAR_3 != VAR_2)
            VAR_0->entries[VAR_3] = VAR_0->entries[VAR_2];
        ++VAR_3;
    }
    VAR_0->size = VAR_3;
}
