
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {char* scalar; } ;
struct TYPE_14__ {int type; TYPE_1__ data; } ;
typedef TYPE_2__ yoml_t ;
struct TYPE_15__ {int pathconf; } ;
typedef TYPE_3__ h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;




 int FUNC_0 (int *,TYPE_2__*,char*) ;
 int FUNC_1 (int *,TYPE_2__*,char*) ;
 int FUNC_2 (int *,TYPE_2__*,char*,char*,TYPE_2__***,TYPE_2__***,TYPE_2__***) ;
 int FUNC_3 (int *,TYPE_2__*,char*,int*) ;
 int FUNC_4 (int ,int,int,char const*) ;

__attribute__((used)) static int FUNC_5(h2o_configurator_command_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    const char *VAR_3;
    int VAR_4 = 302;
    int VAR_5 = 0;

    switch (VAR_2->type) {
    case 128:
        VAR_3 = VAR_2->data.scalar;
        break;
    case 129: {
        yoml_t **VAR_6, **VAR_7, **VAR_8;
        if (FUNC_2(VAR_0, VAR_2, "url:s,status:*", "internal:*", &VAR_6, &VAR_7, &VAR_8) != 0)
            return -1;
        VAR_3 = (*VAR_6)->data.scalar;
        if (FUNC_3(VAR_0, *VAR_7, "%d", &VAR_4) != 0)
            return -1;
        if (!(300 <= VAR_4 && VAR_4 <= 399)) {
            FUNC_0(VAR_0, *VAR_7, "value of property `status` should be within 300 to 399");
            return -1;
        }
        if (VAR_8 != ((void*)0)) {
            switch (FUNC_1(VAR_0, *VAR_8, "YES,NO")) {
            case 0:
                VAR_5 = 1;
                break;
            case 1:
                VAR_5 = 0;
                break;
            default:
                return -1;
            }
        }
    } break;
    default:
        FUNC_0(VAR_0, VAR_2, "value must be a string or a mapping");
        return -1;
    }

    FUNC_4(VAR_1->pathconf, VAR_5, VAR_4, VAR_3);

    return 0;
}
