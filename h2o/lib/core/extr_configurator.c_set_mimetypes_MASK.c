
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {size_t size; TYPE_5__** elements; } ;
struct TYPE_18__ {size_t size; TYPE_1__* elements; } ;
struct TYPE_20__ {int scalar; TYPE_3__ sequence; TYPE_2__ mapping; } ;
struct TYPE_21__ {scalar_t__ type; TYPE_4__ data; } ;
typedef TYPE_5__ yoml_t ;
typedef int h2o_mimemap_t ;
struct TYPE_22__ {int is_compressible; int priority; } ;
typedef TYPE_6__ h2o_mime_attributes_t ;
typedef int h2o_configurator_command_t ;
struct TYPE_17__ {TYPE_5__* value; TYPE_5__* key; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_5__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_5__*) ;
 int FUNC_3 (int *,TYPE_5__*,char*) ;
 int FUNC_4 (int *,TYPE_5__*,char*,char*,TYPE_5__***,TYPE_5__***,TYPE_5__***) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int ,int ,TYPE_6__*) ;
 int FUNC_7 (int ,TYPE_6__*) ;

__attribute__((used)) static int FUNC_8(h2o_configurator_command_t *VAR_2, h2o_mimemap_t *VAR_3, yoml_t *VAR_4)
{
    size_t VAR_5, VAR_6;

    FUNC_0(VAR_4->type == 130);

    for (VAR_5 = 0; VAR_5 != VAR_4->data.mapping.size; ++VAR_5) {
        yoml_t *VAR_7 = VAR_4->data.mapping.elements[VAR_5].key;
        yoml_t *VAR_8 = VAR_4->data.mapping.elements[VAR_5].value;
        if (FUNC_2(VAR_2, VAR_7) != 0)
            return -1;
        switch (VAR_8->type) {
        case 129:
            if (FUNC_1(VAR_2, VAR_8) != 0)
                return -1;
            FUNC_6(VAR_3, VAR_8->data.scalar + 1, VAR_7->data.scalar, ((void*)0));
            break;
        case 128:
            for (VAR_6 = 0; VAR_6 != VAR_8->data.sequence.size; ++VAR_6) {
                yoml_t *VAR_9 = VAR_8->data.sequence.elements[VAR_6];
                if (FUNC_1(VAR_2, VAR_9) != 0)
                    return -1;
                FUNC_6(VAR_3, VAR_9->data.scalar + 1, VAR_7->data.scalar, ((void*)0));
            }
            break;
        case 130: {
            yoml_t **VAR_10, **VAR_11, **VAR_12;
            h2o_mime_attributes_t VAR_13;
            FUNC_7(VAR_7->data.scalar, &VAR_13);
            if (FUNC_4(VAR_2, VAR_8, "extensions:a", "is_compressible:*,priority:*", &VAR_12,
                                               &VAR_10, &VAR_11) != 0)
                return -1;
            if (VAR_10 != ((void*)0)) {
                switch (FUNC_3(VAR_2, *VAR_10, "YES,NO")) {
                case 0:
                    VAR_13.is_compressible = 1;
                    break;
                case 1:
                    VAR_13.is_compressible = 0;
                    break;
                default:
                    return -1;
                }
            }
            if (VAR_11 != ((void*)0)) {
                switch (FUNC_3(VAR_2, *VAR_11, "normal,highest")) {
                case 0:
                    VAR_13.priority = VAR_1;
                    break;
                case 1:
                    VAR_13.priority = VAR_0;
                    break;
                default:
                    return -1;
                }
            }
            for (VAR_6 = 0; VAR_6 != (*VAR_12)->data.sequence.size; ++VAR_6) {
                yoml_t *VAR_14 = (*VAR_12)->data.sequence.elements[VAR_6];
                if (FUNC_1(VAR_2, VAR_14) != 0)
                    return -1;
                FUNC_6(VAR_3, VAR_14->data.scalar + 1, VAR_7->data.scalar, &VAR_13);
            }
        } break;
        default:
            FUNC_5("logic flaw");
        }
    }

    return 0;
}
