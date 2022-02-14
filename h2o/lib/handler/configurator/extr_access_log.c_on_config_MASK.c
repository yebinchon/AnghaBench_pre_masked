
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int * scalar; } ;
struct TYPE_19__ {int type; TYPE_1__ data; } ;
typedef TYPE_2__ yoml_t ;
struct st_h2o_access_log_configurator_t {TYPE_8__* handles; } ;
struct TYPE_20__ {int dry_run; } ;
typedef TYPE_3__ h2o_configurator_context_t ;
struct TYPE_21__ {scalar_t__ configurator; } ;
typedef TYPE_4__ h2o_configurator_command_t ;
typedef int h2o_access_log_filehandle_t ;
struct TYPE_22__ {scalar_t__ size; int ** entries; } ;


 int VAR_0 ;
 int VAR_1 ;


 int * FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_4__*,TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_4__*,TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*,char*,char*,TYPE_2__***,TYPE_2__***,TYPE_2__***) ;
 int FUNC_4 (int *,TYPE_8__*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(h2o_configurator_command_t *VAR_2, h2o_configurator_context_t *VAR_3, yoml_t *VAR_4)
{
    struct st_h2o_access_log_configurator_t *VAR_5 = (void *)VAR_2->configurator;
    yoml_t **VAR_6, **VAR_7 = ((void*)0), **VAR_8 = ((void*)0);
    int VAR_9 = VAR_0;
    h2o_access_log_filehandle_t *VAR_10;

    switch (VAR_4->type) {
    case 128:
        VAR_6 = &VAR_4;
        break;
    case 129:
        if (FUNC_3(VAR_2, VAR_4, "path:s", "format:s,escape:*", &VAR_6, &VAR_7, &VAR_8) != 0)
            return -1;
        break;
    default:
        FUNC_1(VAR_2, VAR_4, "node must be a scalar or a mapping");
        return -1;
    }

    if (VAR_8 != ((void*)0)) {
        switch (FUNC_2(VAR_2, *VAR_8, "apache,json")) {
        case 0:
            VAR_9 = VAR_0;
            break;
        case 1:
            VAR_9 = VAR_1;
            break;
        default:
            return -1;
        }
    }

    if (!VAR_3->dry_run) {
        if ((VAR_10 = FUNC_0((*VAR_6)->data.scalar, VAR_7 != ((void*)0) ? (*VAR_7)->data.scalar : ((void*)0), VAR_9)) == ((void*)0))
            return -1;
        FUNC_4(((void*)0), VAR_5->handles, VAR_5->handles->size + 1);
        VAR_5->handles->entries[VAR_5->handles->size++] = VAR_10;
    }

    return 0;
}
