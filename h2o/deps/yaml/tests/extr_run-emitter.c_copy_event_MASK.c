
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_31__ {int style; int implicit; int tag; int anchor; } ;
struct TYPE_30__ {int style; int implicit; int tag; int anchor; } ;
struct TYPE_29__ {int style; int quoted_implicit; int plain_implicit; int length; int value; int tag; int anchor; } ;
struct TYPE_28__ {int anchor; } ;
struct TYPE_27__ {int implicit; } ;
struct TYPE_25__ {int end; int start; } ;
struct TYPE_26__ {int implicit; TYPE_2__ tag_directives; int version_directive; } ;
struct TYPE_24__ {int encoding; } ;
struct TYPE_32__ {TYPE_8__ mapping_start; TYPE_7__ sequence_start; TYPE_6__ scalar; TYPE_5__ alias; TYPE_4__ document_end; TYPE_3__ document_start; TYPE_1__ stream_start; } ;
struct TYPE_23__ {int type; TYPE_9__ data; } ;
typedef TYPE_10__ yaml_event_t ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_10__*,int ) ;
 int FUNC_2 (TYPE_10__*,int ) ;
 int FUNC_3 (TYPE_10__*,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_10__*) ;
 int FUNC_5 (TYPE_10__*,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_10__*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (TYPE_10__*) ;
 int FUNC_8 (TYPE_10__*,int ,int ,int ,int ) ;
 int FUNC_9 (TYPE_10__*) ;
 int FUNC_10 (TYPE_10__*,int ) ;

int FUNC_11(yaml_event_t *VAR_0, yaml_event_t *VAR_1)
{
    switch (VAR_1->type)
    {
        case 128:
            return FUNC_10(VAR_0,
                    VAR_1->data.stream_start.encoding);

        case 129:
            return FUNC_9(VAR_0);

        case 135:
            return FUNC_3(VAR_0,
                    VAR_1->data.document_start.version_directive,
                    VAR_1->data.document_start.tag_directives.start,
                    VAR_1->data.document_start.tag_directives.end,
                    VAR_1->data.document_start.implicit);

        case 136:
            return FUNC_2(VAR_0,
                    VAR_1->data.document_end.implicit);

        case 137:
            return FUNC_1(VAR_0,
                    VAR_1->data.alias.anchor);

        case 132:
            return FUNC_6(VAR_0,
                    VAR_1->data.scalar.anchor,
                    VAR_1->data.scalar.tag,
                    VAR_1->data.scalar.value,
                    VAR_1->data.scalar.length,
                    VAR_1->data.scalar.plain_implicit,
                    VAR_1->data.scalar.quoted_implicit,
                    VAR_1->data.scalar.style);

        case 130:
            return FUNC_8(VAR_0,
                    VAR_1->data.sequence_start.anchor,
                    VAR_1->data.sequence_start.tag,
                    VAR_1->data.sequence_start.implicit,
                    VAR_1->data.sequence_start.style);

        case 131:
            return FUNC_7(VAR_0);

        case 133:
            return FUNC_5(VAR_0,
                    VAR_1->data.mapping_start.anchor,
                    VAR_1->data.mapping_start.tag,
                    VAR_1->data.mapping_start.implicit,
                    VAR_1->data.mapping_start.style);

        case 134:
            return FUNC_4(VAR_0);

        default:
            FUNC_0(1);
    }

    return 0;
}
