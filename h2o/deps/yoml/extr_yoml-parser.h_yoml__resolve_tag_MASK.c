
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {size_t size; TYPE_4__* elements; } ;
struct TYPE_18__ {size_t size; int elements; } ;
struct TYPE_21__ {TYPE_5__ mapping; TYPE_3__ sequence; } ;
struct TYPE_22__ {int type; TYPE_6__ data; int column; int line; int * tag; } ;
typedef TYPE_7__ yoml_t ;
struct TYPE_16__ {int cb_arg; TYPE_7__* (* cb ) (int *,TYPE_7__*,int ) ;} ;
struct TYPE_23__ {int mem_set; TYPE_1__ resolve_tag; } ;
typedef TYPE_8__ yoml_parse_args_t ;
struct TYPE_17__ {int column; int line; } ;
struct TYPE_24__ {char* problem; TYPE_2__ problem_mark; } ;
typedef TYPE_9__ yaml_parser_t ;
struct TYPE_19__ {TYPE_7__* value; TYPE_7__* key; } ;






 TYPE_7__* FUNC_0 (int *,TYPE_7__*,int ) ;
 int FUNC_1 (TYPE_7__*,int ) ;

__attribute__((used)) static inline int FUNC_2(yoml_t **VAR_0, yaml_parser_t *VAR_1, yoml_parse_args_t *VAR_2)
{
    size_t VAR_3;

    if (VAR_2->resolve_tag.cb == ((void*)0))
        return 0;

    if ((*VAR_0)->tag != ((void*)0)) {
        yoml_t *VAR_4 = VAR_2->resolve_tag.cb((*VAR_0)->tag, *VAR_0, VAR_2->resolve_tag.cb_arg);
        if (VAR_4 == ((void*)0)) {
            if (VAR_1 != ((void*)0)) {
                VAR_1->problem = "tag resolution failed";
                VAR_1->problem_mark.line = (*VAR_0)->line;
                VAR_1->problem_mark.column = (*VAR_0)->column;
            }
            return -1;
        }
        FUNC_1(*VAR_0, VAR_2->mem_set);
        *VAR_0 = VAR_4;
    }

    switch ((*VAR_0)->type) {
        case 130:
            break;
        case 129:
            for (VAR_3 = 0; VAR_3 != (*VAR_0)->data.sequence.size; ++VAR_3) {
                if (FUNC_2((*VAR_0)->data.sequence.elements + VAR_3, VAR_1, VAR_2) != 0)
                    return -1;
            }
            break;
        case 131:
            for (VAR_3 = 0; VAR_3 != (*VAR_0)->data.mapping.size; ++VAR_3) {
                if (FUNC_2(&(*VAR_0)->data.mapping.elements[VAR_3].key, VAR_1, VAR_2) != 0)
                    return -1;
                if (FUNC_2(&(*VAR_0)->data.mapping.elements[VAR_3].value, VAR_1, VAR_2) != 0)
                    return -1;
            }
            break;
        case 128:
            break;
    }

    return 0;
}
