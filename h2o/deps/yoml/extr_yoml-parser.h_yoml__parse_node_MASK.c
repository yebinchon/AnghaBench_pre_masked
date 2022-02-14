
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_23__ {void* scalar; void* alias; } ;
struct TYPE_24__ {TYPE_4__ data; } ;
typedef TYPE_5__ yoml_t ;
struct TYPE_25__ {int (* mem_set ) (int ,char,int ) ;int filename; } ;
typedef TYPE_6__ yoml_parse_args_t ;
typedef int yaml_parser_t ;
typedef int yaml_event_type_t ;
struct TYPE_21__ {int value; int * tag; int * anchor; } ;
struct TYPE_20__ {int anchor; } ;
struct TYPE_22__ {TYPE_2__ scalar; TYPE_1__ alias; } ;
struct TYPE_26__ {int type; TYPE_3__ data; } ;
typedef TYPE_7__ yaml_event_t ;



 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,char,int ) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (int *,TYPE_7__*) ;
 TYPE_5__* FUNC_4 (int ,int ,int,int *,int *,TYPE_7__*) ;
 TYPE_5__* FUNC_5 (int *,TYPE_7__*,TYPE_6__*) ;
 TYPE_5__* FUNC_6 (int *,TYPE_7__*,TYPE_6__*) ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static yoml_t *FUNC_8(yaml_parser_t *VAR_5, yaml_event_type_t *VAR_6, yoml_parse_args_t *VAR_7)
{
    yoml_t *VAR_8;
    yaml_event_t VAR_9;

    if (VAR_6 != ((void*)0))
        *VAR_6 = VAR_1;


    while (1) {
        if (!FUNC_3(VAR_5, &VAR_9))
            return ((void*)0);
        if (!(VAR_9.type == VAR_2 || VAR_9.type == VAR_0))
            break;
        FUNC_2(&VAR_9);
    }

    switch (VAR_9.type) {
    case 131:
        VAR_8 = FUNC_4(VAR_7->filename, VAR_4, sizeof(*VAR_8), ((void*)0), ((void*)0), &VAR_9);
        VAR_8->data.alias = FUNC_7(VAR_9.data.alias.anchor);
        break;
    case 129:
        VAR_8 = FUNC_4(VAR_7->filename, VAR_3, sizeof(*VAR_8), VAR_9.data.scalar.anchor, VAR_9.data.scalar.tag, &VAR_9);
        VAR_8->data.scalar = FUNC_7(VAR_9.data.scalar.value);
        if (VAR_7->mem_set != ((void*)0))
            VAR_7->mem_set(VAR_9.data.scalar.value, 'A', FUNC_0(VAR_8->data.scalar));
        break;
    case 128:
        VAR_8 = FUNC_6(VAR_5, &VAR_9, VAR_7);
        break;
    case 130:
        VAR_8 = FUNC_5(VAR_5, &VAR_9, VAR_7);
        break;
    default:
        VAR_8 = ((void*)0);
        if (VAR_6 != ((void*)0))
            *VAR_6 = VAR_9.type;
        break;
    }

    FUNC_2(&VAR_9);

    return VAR_8;
}
