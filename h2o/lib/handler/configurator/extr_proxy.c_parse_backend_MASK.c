
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int scalar; } ;
struct TYPE_12__ {int type; TYPE_1__ data; } ;
typedef TYPE_2__ yoml_t ;
typedef int h2o_url_t ;
typedef int h2o_socketpool_target_t ;
struct TYPE_13__ {unsigned int weight_m1; int member_0; } ;
typedef TYPE_3__ h2o_socketpool_target_conf_t ;
typedef int h2o_configurator_command_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *,TYPE_2__*,char*,...) ;
 int FUNC_1 (int *,TYPE_2__*,char*,char*,TYPE_2__***,TYPE_2__***) ;
 int FUNC_2 (int *,TYPE_2__*,char*,unsigned int*) ;
 int * FUNC_3 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static h2o_socketpool_target_t *FUNC_5(h2o_configurator_command_t *VAR_2, yoml_t *VAR_3)
{
    yoml_t **VAR_4;
    h2o_socketpool_target_conf_t VAR_5 = {0};

    switch (VAR_3->type) {
    case 128:
        VAR_4 = &VAR_3;
        break;
    case 129: {
        yoml_t **VAR_6;
        if (FUNC_1(VAR_2, VAR_3, "url:s", "weight:*", &VAR_4, &VAR_6) != 0)
            return ((void*)0);
        if (VAR_6 != ((void*)0)) {
            unsigned VAR_7;
            if (FUNC_2(VAR_2, *VAR_6, "%u", &VAR_7) != 0)
                return ((void*)0);
            if (!(1 <= VAR_7 && VAR_7 <= VAR_0)) {
                FUNC_0(VAR_2, *VAR_6, "weight must be an integer in range 1 - 256");
                return ((void*)0);
            }
            VAR_5.weight_m1 = VAR_7 - 1;
        }
    } break;
    default:
        FUNC_0(VAR_2, VAR_3,
                                   "items of arguments passed to proxy.reverse.url must be either a scalar or a mapping");
        return ((void*)0);
    }

    h2o_url_t VAR_8;
    if (FUNC_4((*VAR_4)->data.scalar, VAR_1, &VAR_8) != 0) {
        FUNC_0(VAR_2, *VAR_4, "failed to parse URL: %s\n", (*VAR_4)->data.scalar);
        return ((void*)0);
    }
    return FUNC_3(&VAR_8, &VAR_5);
}
