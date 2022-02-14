
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t size; TYPE_2__* elements; } ;
struct TYPE_8__ {size_t size; TYPE_5__** elements; } ;
struct TYPE_11__ {TYPE_3__ mapping; TYPE_1__ sequence; } ;
struct TYPE_12__ {int type; TYPE_4__ data; int * anchor; } ;
typedef TYPE_5__ yoml_t ;
struct TYPE_9__ {TYPE_5__* value; TYPE_5__* key; } ;




 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static inline yoml_t *FUNC_1(yoml_t *VAR_0, const char *VAR_1)
{
    yoml_t *VAR_2;
    size_t VAR_3;

    if (VAR_0->anchor != ((void*)0) && FUNC_0(VAR_0->anchor, VAR_1) == 0)
        return VAR_0;

    switch (VAR_0->type) {
    case 128:
        for (VAR_3 = 0; VAR_3 != VAR_0->data.sequence.size; ++VAR_3)
            if ((VAR_2 = FUNC_1(VAR_0->data.sequence.elements[VAR_3], VAR_1)) != ((void*)0))
                return VAR_2;
        break;
    case 129:
        for (VAR_3 = 0; VAR_3 != VAR_0->data.mapping.size; ++VAR_3)
            if ((VAR_2 = FUNC_1(VAR_0->data.mapping.elements[VAR_3].key, VAR_1)) != ((void*)0) ||
                (VAR_2 = FUNC_1(VAR_0->data.mapping.elements[VAR_3].value, VAR_1)) != ((void*)0))
                return VAR_2;
        break;
    default:
        break;
    }

    return ((void*)0);
}
