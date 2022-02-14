
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int scalar; } ;
struct TYPE_15__ {TYPE_1__ data; } ;
typedef TYPE_2__ yoml_t ;
struct TYPE_16__ {int base; } ;
typedef TYPE_3__ h2o_iovec_t ;
typedef int h2o_headers_command_when_t ;
typedef int h2o_headers_command_t ;
typedef int h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;


 scalar_t__ FUNC_0 (int *,TYPE_2__*,int,TYPE_3__*,TYPE_3__,int ,int **) ;
 scalar_t__ FUNC_1 (int ,TYPE_3__**,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__**,TYPE_2__***,size_t*,int *) ;

__attribute__((used)) static int FUNC_6(h2o_configurator_command_t *VAR_0, h2o_configurator_context_t *VAR_1, int VAR_2, yoml_t *VAR_3,
                                 h2o_headers_command_t **VAR_4)
{
    h2o_iovec_t *VAR_5, VAR_6;
    yoml_t **VAR_7;
    size_t VAR_8;
    h2o_headers_command_when_t VAR_9;

    if (FUNC_5(VAR_0, &VAR_3, &VAR_7, &VAR_8, &VAR_9) != 0)
        return -1;

    int VAR_10;
    for (VAR_10 = 0; VAR_10 != VAR_8; ++VAR_10) {
        yoml_t *VAR_11 = VAR_7[VAR_10];
        if (FUNC_1(VAR_11->data.scalar, &VAR_5, &VAR_6) != 0) {
            FUNC_3(VAR_0, VAR_11, "failed to parse the value; should be in form of `name: value`");
            return -1;
        }
        if (FUNC_0(VAR_0, VAR_11, VAR_2, VAR_5, VAR_6, VAR_9, VAR_4) != 0) {
            if (!FUNC_4(VAR_5))
                FUNC_2(VAR_5->base);
            FUNC_2(VAR_6.base);
            return -1;
        }
    }

    return 0;
}
