
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {size_t size; TYPE_3__** elements; } ;
struct TYPE_11__ {TYPE_1__ sequence; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_2__ data; } ;
typedef TYPE_3__ yoml_t ;
typedef int h2o_headers_command_when_t ;
typedef int h2o_configurator_command_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,TYPE_3__*,char*) ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*,char*,char*,TYPE_3__***,TYPE_3__***) ;

__attribute__((used)) static int FUNC_2(h2o_configurator_command_t *VAR_5, yoml_t **VAR_6, yoml_t ***VAR_7, size_t *VAR_8,
                             h2o_headers_command_when_t *VAR_9)
{

    if ((*VAR_6)->type == VAR_3) {
        *VAR_7 = VAR_6;
        *VAR_8 = 1;
        *VAR_9 = VAR_2;
    } else {
        yoml_t **VAR_10;
        yoml_t **VAR_11 = ((void*)0);
        if (FUNC_1(VAR_5, *VAR_6, "header:sa", "when:*", &VAR_10, &VAR_11) != 0)
            return -1;
        if ((*VAR_10)->type == VAR_4) {
            *VAR_7 = (*VAR_10)->data.sequence.elements;
            *VAR_8 = (*VAR_10)->data.sequence.size;
        } else {
            *VAR_7 = VAR_10;
            *VAR_8 = 1;
        }
        if (VAR_11 == ((void*)0)) {
            *VAR_9 = VAR_2;
        } else {
            switch (FUNC_0(VAR_5, *VAR_11, "final,early,all")) {
            case 0:
                *VAR_9 = VAR_2;
                break;
            case 1:
                *VAR_9 = VAR_1;
                break;
            case 2:
                *VAR_9 = VAR_0;
                break;
            default:
                return -1;
            }
        }
    }
    return 0;
}
