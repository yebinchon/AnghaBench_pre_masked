
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_27__ {TYPE_10__* top; TYPE_10__* start; } ;
struct TYPE_28__ {TYPE_5__ pairs; int style; } ;
struct TYPE_25__ {int * top; int * start; } ;
struct TYPE_26__ {TYPE_3__ items; int style; } ;
struct TYPE_24__ {int style; int length; int value; } ;
struct TYPE_29__ {TYPE_6__ mapping; TYPE_4__ sequence; TYPE_2__ scalar; } ;
struct TYPE_31__ {int type; TYPE_7__ data; int tag; } ;
typedef TYPE_9__ yaml_node_t ;
struct TYPE_21__ {int value; int key; } ;
typedef TYPE_10__ yaml_node_pair_t ;
typedef int yaml_node_item_t ;
struct TYPE_30__ {TYPE_9__* start; TYPE_9__* top; } ;
struct TYPE_23__ {int end; int start; } ;
struct TYPE_22__ {TYPE_8__ nodes; int end_implicit; int start_implicit; TYPE_1__ tag_directives; int version_directive; } ;
typedef TYPE_11__ yaml_document_t ;





 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_11__*,int ,int ) ;
 int FUNC_2 (TYPE_11__*,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_11__*,int ,int ) ;
 int FUNC_4 (TYPE_11__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_11__*,int ,int ) ;
 int FUNC_6 (TYPE_11__*) ;
 int FUNC_7 (TYPE_11__*,int ,int ,int ,int ,int ) ;

int FUNC_8(yaml_document_t *VAR_0, yaml_document_t *VAR_1)
{
    yaml_node_t *VAR_2;
    yaml_node_item_t *VAR_3;
    yaml_node_pair_t *VAR_4;

    if (!FUNC_7(VAR_0, VAR_1->version_directive,
                VAR_1->tag_directives.start,
                VAR_1->tag_directives.end,
                VAR_1->start_implicit, VAR_1->end_implicit))
        return 0;

    for (VAR_2 = VAR_1->nodes.start;
            VAR_2 < VAR_1->nodes.top; VAR_2 ++) {
        switch (VAR_2->type) {
            case 129:
                if (!FUNC_2(VAR_0, VAR_2->tag,
                            VAR_2->data.scalar.value, VAR_2->data.scalar.length,
                            VAR_2->data.scalar.style)) goto error;
                break;
            case 128:
                if (!FUNC_3(VAR_0, VAR_2->tag,
                            VAR_2->data.sequence.style)) goto error;
                break;
            case 130:
                if (!FUNC_1(VAR_0, VAR_2->tag,
                            VAR_2->data.mapping.style)) goto error;
                break;
            default:
                FUNC_0(0);
                break;
        }
    }

    for (VAR_2 = VAR_1->nodes.start;
            VAR_2 < VAR_1->nodes.top; VAR_2 ++) {
        switch (VAR_2->type) {
            case 128:
                for (VAR_3 = VAR_2->data.sequence.items.start;
                        VAR_3 < VAR_2->data.sequence.items.top; VAR_3 ++) {
                    if (!FUNC_5(VAR_0,
                                VAR_2 - VAR_1->nodes.start + 1,
                                *VAR_3)) goto error;
                }
                break;
            case 130:
                for (VAR_4 = VAR_2->data.mapping.pairs.start;
                        VAR_4 < VAR_2->data.mapping.pairs.top; VAR_4 ++) {
                    if (!FUNC_4(VAR_0,
                                VAR_2 - VAR_1->nodes.start + 1,
                                VAR_4->key, VAR_4->value)) goto error;
                }
                break;
            default:
                break;
        }
    }
    return 1;

error:
    FUNC_6(VAR_0);
    return 0;
}
