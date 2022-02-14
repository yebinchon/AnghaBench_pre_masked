
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {size_t size; TYPE_2__* elements; } ;
struct TYPE_16__ {size_t size; int elements; } ;
struct TYPE_19__ {int alias; TYPE_3__ mapping; TYPE_1__ sequence; } ;
struct TYPE_21__ {int type; int _refcnt; int column; int line; TYPE_4__ data; } ;
typedef TYPE_6__ yoml_t ;
struct TYPE_22__ {int mem_set; } ;
typedef TYPE_7__ yoml_parse_args_t ;
struct TYPE_20__ {int column; int line; } ;
struct TYPE_23__ {char* problem; TYPE_5__ problem_mark; } ;
typedef TYPE_8__ yaml_parser_t ;
struct TYPE_17__ {TYPE_6__* value; TYPE_6__* key; } ;






 TYPE_6__* FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_6__*,int ) ;

__attribute__((used)) static inline int FUNC_2(yoml_t **VAR_0, yoml_t *VAR_1, yaml_parser_t *VAR_2, yoml_parse_args_t *VAR_3)
{
    size_t VAR_4;

    switch ((*VAR_0)->type) {
    case 130:
        break;
    case 129:
        for (VAR_4 = 0; VAR_4 != (*VAR_0)->data.sequence.size; ++VAR_4) {
            if (FUNC_2((*VAR_0)->data.sequence.elements + VAR_4, VAR_1, VAR_2, VAR_3) != 0)
                return -1;
        }
        break;
    case 131:
        for (VAR_4 = 0; VAR_4 != (*VAR_0)->data.mapping.size; ++VAR_4) {
            if (FUNC_2(&(*VAR_0)->data.mapping.elements[VAR_4].key, VAR_1, VAR_2, VAR_3) != 0)
                return -1;
            if (FUNC_2(&(*VAR_0)->data.mapping.elements[VAR_4].value, VAR_1, VAR_2, VAR_3) != 0)
                return -1;
        }
        break;
    case 128: {
        yoml_t *VAR_5 = FUNC_0(VAR_1, (*VAR_0)->data.alias);
        if (VAR_5 == ((void*)0)) {
            if (VAR_2 != ((void*)0)) {
                VAR_2->problem = "could not resolve the alias";
                VAR_2->problem_mark.line = (*VAR_0)->line;
                VAR_2->problem_mark.column = (*VAR_0)->column;
            }
            return -1;
        }
        FUNC_1(*VAR_0, VAR_3->mem_set);
        *VAR_0 = VAR_5;
        ++VAR_5->_refcnt;
    } break;
    }

    return 0;
}
