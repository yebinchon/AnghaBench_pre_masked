
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;


struct TYPE_21__ {size_t size; TYPE_1__* elements; } ;
struct TYPE_22__ {int scalar; TYPE_2__ mapping; } ;
struct TYPE_23__ {scalar_t__ type; TYPE_3__ data; } ;
typedef TYPE_4__ yoml_t ;
typedef int uint16_t ;
struct TYPE_24__ {int len; char* base; } ;
typedef TYPE_5__ h2o_iovec_t ;
struct TYPE_25__ {TYPE_14__* hostconf; int * mimemap; int globalconf; } ;
typedef TYPE_6__ h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;
struct TYPE_20__ {TYPE_4__* value; TYPE_4__* key; } ;
struct TYPE_19__ {int mimemap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_6__* FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_6__*) ;
 TYPE_14__* FUNC_3 (int ,TYPE_5__,int ) ;
 int FUNC_4 (TYPE_6__*,TYPE_4__*,int ,int *) ;
 int FUNC_5 (int *,TYPE_4__*,char*) ;
 int * FUNC_6 (int ,int ,TYPE_5__*,int *) ;
 int * FUNC_7 (char*,char,int) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (TYPE_4__*,char*) ;

__attribute__((used)) static int FUNC_10(h2o_configurator_command_t *VAR_2, h2o_configurator_context_t *VAR_3, yoml_t *VAR_4)
{
    size_t VAR_5;

    if (VAR_4->data.mapping.size == 0) {
        FUNC_5(VAR_2, VAR_4, "the mapping cannot be empty");
        return -1;
    }

    for (VAR_5 = 0; VAR_5 != VAR_4->data.mapping.size; ++VAR_5) {
        yoml_t *VAR_6 = VAR_4->data.mapping.elements[VAR_5].key;
        yoml_t *VAR_7 = VAR_4->data.mapping.elements[VAR_5].value;
        h2o_iovec_t VAR_8;
        uint16_t VAR_9;
        if (VAR_6->type != VAR_1) {
            FUNC_5(VAR_2, VAR_6, "key (representing the hostname) must be a string");
            return -1;
        }
        if (FUNC_6(VAR_6->data.scalar, FUNC_8(VAR_6->data.scalar), &VAR_8, &VAR_9) == ((void*)0)) {
            FUNC_5(VAR_2, VAR_6, "invalid key (must be either `host` or `host:port`)");
            return -1;
        }
        FUNC_0(VAR_8.len != 0);
        if ((VAR_8.base[0] == '*' && !(VAR_8.len == 1 || VAR_8.base[1] == '.')) ||
            FUNC_7(VAR_8.base + 1, '*', VAR_8.len - 1) != ((void*)0)) {
            FUNC_5(VAR_2, VAR_6, "wildcard (*) can only be used at the start of the hostname");
            return -1;
        }
        h2o_configurator_context_t *VAR_10 = FUNC_1(VAR_3, 0);
        if ((VAR_10->hostconf = FUNC_3(VAR_10->globalconf, VAR_8, VAR_9)) == ((void*)0)) {
            FUNC_5(VAR_2, VAR_6, "duplicate host entry");
            FUNC_2(VAR_10);
            return -1;
        }
        VAR_10->mimemap = &VAR_10->hostconf->mimemap;
        int VAR_11 = FUNC_4(VAR_10, VAR_7, VAR_0, ((void*)0));
        FUNC_2(VAR_10);
        if (VAR_11 != 0)
            return -1;
        if (FUNC_9(VAR_7, "paths") == ((void*)0)) {
            FUNC_5(((void*)0), VAR_7, "mandatory configuration directive `paths` is missing");
            return -1;
        }
    }

    return 0;
}
