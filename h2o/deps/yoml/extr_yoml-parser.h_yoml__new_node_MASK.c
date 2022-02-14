
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ yoml_type_t ;
struct TYPE_12__ {int _refcnt; int * tag; int * anchor; int column; int line; scalar_t__ type; int * filename; } ;
typedef TYPE_4__ yoml_t ;
struct TYPE_11__ {int column; int line; } ;
struct TYPE_9__ {int style; } ;
struct TYPE_10__ {TYPE_1__ scalar; } ;
struct TYPE_13__ {TYPE_3__ start_mark; TYPE_2__ data; } ;
typedef TYPE_5__ yaml_event_t ;
typedef int yaml_char_t ;




 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 (size_t) ;
 int * FUNC_1 (char const*) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static inline yoml_t *FUNC_3(const char *VAR_1, yoml_type_t VAR_2, size_t VAR_3, yaml_char_t *VAR_4, yaml_char_t *VAR_5, yaml_event_t *VAR_6)
{
    yoml_t *VAR_7 = FUNC_0(VAR_3);
    VAR_7->filename = VAR_1 != ((void*)0) ? FUNC_1(VAR_1) : ((void*)0);
    VAR_7->type = VAR_2;
    VAR_7->line = VAR_6->start_mark.line;
    if (VAR_2 == VAR_0) {
        switch (VAR_6->data.scalar.style) {
        case 128:
        case 129:
            ++VAR_7->line;
            break;
        default:
            break;
        }
    }
    VAR_7->column = VAR_6->start_mark.column;
    VAR_7->anchor = VAR_4 != ((void*)0) ? FUNC_2(VAR_4) : ((void*)0);
    VAR_7->tag = VAR_5 != ((void*)0) ? FUNC_2(VAR_5) : ((void*)0);
    VAR_7->_refcnt = 1;
    return VAR_7;
}
