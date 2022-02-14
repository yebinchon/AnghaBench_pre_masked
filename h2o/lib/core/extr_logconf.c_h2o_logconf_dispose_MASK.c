
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {size_t size; TYPE_5__* entries; } ;
struct TYPE_8__ {TYPE_5__* base; } ;
struct TYPE_9__ {TYPE_1__ name; } ;
struct TYPE_10__ {TYPE_5__* base; } ;
struct TYPE_12__ {int type; TYPE_4__ elements; TYPE_2__ data; TYPE_3__ suffix; } ;
typedef TYPE_5__ h2o_logconf_t ;






 int FUNC_0 (TYPE_5__*) ;

void FUNC_1(h2o_logconf_t *VAR_0)
{
    size_t VAR_1;

    for (VAR_1 = 0; VAR_1 != VAR_0->elements.size; ++VAR_1) {
        FUNC_0(VAR_0->elements.entries[VAR_1].suffix.base);
        switch (VAR_0->elements.entries[VAR_1].type) {
        case 131:
        case 130:
        case 129:
        case 128:
            FUNC_0(VAR_0->elements.entries[VAR_1].data.name.base);
            break;
        default:
            break;
        }
    }
    FUNC_0(VAR_0->elements.entries);
    FUNC_0(VAR_0);
}
