
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


struct TYPE_23__ {size_t size; TYPE_7__** elements; } ;
struct TYPE_24__ {TYPE_1__ sequence; } ;
struct TYPE_29__ {scalar_t__ type; TYPE_2__ data; } ;
typedef TYPE_7__ yoml_t ;
struct TYPE_25__ {int size; } ;
struct TYPE_26__ {TYPE_3__ handlers; } ;
struct TYPE_27__ {TYPE_4__ pathconf; } ;
struct TYPE_28__ {TYPE_5__ dynamic; } ;
struct TYPE_30__ {TYPE_6__ data; } ;
typedef TYPE_8__ h2o_mimemap_type_t ;
struct TYPE_31__ {int * mimemap; TYPE_4__* pathconf; int globalconf; } ;
typedef TYPE_9__ h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 char** FUNC_0 (int) ;
 int FUNC_1 (TYPE_9__*) ;
 TYPE_9__* FUNC_2 (TYPE_9__*,int) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_9__*,TYPE_7__*,int ,char const**) ;
 int FUNC_5 (int *,TYPE_7__*,char*) ;
 TYPE_8__* FUNC_6 (int ,char const**,int ) ;
 char* FUNC_7 (int *,TYPE_7__*) ;
 TYPE_7__* FUNC_8 (TYPE_7__*,char*) ;

__attribute__((used)) static int FUNC_9(h2o_configurator_command_t *VAR_2, h2o_configurator_context_t *VAR_3, yoml_t *VAR_4)
{
    static const char *VAR_5[] = {"extension", ((void*)0)};
    yoml_t *VAR_6;
    const char **VAR_7;
    h2o_mimemap_type_t *VAR_8 = ((void*)0);

    if (VAR_4->type != VAR_1) {
        FUNC_5(VAR_2, VAR_4, "argument must be a MAPPING");
        return -1;
    }
    if ((VAR_6 = FUNC_8(VAR_4, "extension")) == ((void*)0)) {
        FUNC_5(VAR_2, VAR_4, "mandatory key `extension` is missing");
        return -1;
    }


    switch (VAR_6->type) {
    case 129:
        VAR_7 = FUNC_0(2 * sizeof(*VAR_7));
        if ((VAR_7[0] = FUNC_7(VAR_2, VAR_6)) == ((void*)0))
            return -1;
        VAR_7[1] = ((void*)0);
        break;
    case 128: {
        VAR_7 = FUNC_0((VAR_6->data.sequence.size + 1) * sizeof(*VAR_7));
        size_t VAR_9;
        for (VAR_9 = 0; VAR_9 != VAR_6->data.sequence.size; ++VAR_9) {
            yoml_t *VAR_10 = VAR_6->data.sequence.elements[VAR_9];
            if ((VAR_7[VAR_9] = FUNC_7(VAR_2, VAR_10)) == ((void*)0))
                return -1;
        }
        VAR_7[VAR_9] = ((void*)0);
    } break;
    default:
        FUNC_5(VAR_2, VAR_6, "`extensions` must be a scalar or sequence of scalar");
        return -1;
    }
    FUNC_1(VAR_3);
    VAR_8 = FUNC_6(*VAR_3->mimemap, VAR_7, VAR_3->globalconf);


    h2o_configurator_context_t *VAR_11 = FUNC_2(VAR_3, 1);
    VAR_11->pathconf = &VAR_8->data.dynamic.pathconf;
    VAR_11->mimemap = ((void*)0);
    int VAR_12 = FUNC_4(VAR_11, VAR_4, VAR_0, VAR_5);
    FUNC_3(VAR_11);
    if (VAR_12 != 0)
        return VAR_12;
    switch (VAR_8->data.dynamic.pathconf.handlers.size) {
    case 1:
        break;
    case 0:
        FUNC_5(VAR_2, VAR_4, "no handler declared for given extension");
        return -1;
    default:
        FUNC_5(VAR_2, VAR_4, "cannot assign more than one handler for given extension");
        return -1;
    }

    return 0;
}
