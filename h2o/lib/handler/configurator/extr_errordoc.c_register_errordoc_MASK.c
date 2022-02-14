
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {size_t size; TYPE_3__** elements; } ;
struct TYPE_18__ {int scalar; TYPE_1__ sequence; } ;
struct TYPE_19__ {int type; TYPE_2__ data; } ;
typedef TYPE_3__ yoml_t ;
struct errordoc_configurator_t {TYPE_8__* vars; int pool; } ;
typedef int h2o_iovec_t ;
struct TYPE_20__ {int status; int url; } ;
typedef TYPE_4__ h2o_errordoc_t ;
typedef int h2o_configurator_context_t ;
struct TYPE_21__ {scalar_t__ configurator; } ;
typedef TYPE_5__ h2o_configurator_command_t ;
struct TYPE_22__ {scalar_t__ size; TYPE_4__* entries; } ;


 int VAR_0 ;


 int* FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,TYPE_3__*,char*,...) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_3__*,char*,int *,TYPE_3__***,TYPE_3__***) ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_3__*,char*,int*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,TYPE_8__*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(h2o_configurator_command_t *VAR_1, h2o_configurator_context_t *VAR_2, yoml_t *VAR_3)
{
    struct errordoc_configurator_t *VAR_4 = (void *)VAR_1->configurator;
    yoml_t **VAR_5, **VAR_6;
    size_t VAR_7, VAR_8, VAR_9;


    if (FUNC_2(VAR_1, VAR_3, "url:s,status:*", ((void*)0), &VAR_5, &VAR_6) != 0)
        return -1;
    switch ((*VAR_6)->type) {
    case 129:
        VAR_9 = 1;
        break;
    case 128:
        if ((*VAR_6)->data.sequence.size == 0) {
            FUNC_1(VAR_1, *VAR_6, "status cannot be an empty sequence");
            return -1;
        }
        VAR_9 = (*VAR_6)->data.sequence.size;
        VAR_6 = (*VAR_6)->data.sequence.elements;
        break;
    default:
        FUNC_1(VAR_1, *VAR_6, "status must be a 3-digit scalar or a sequence of 3-digit scalars");
        return -1;
    }


    int *VAR_10 = FUNC_0(sizeof(*VAR_10) * VAR_9);
    for (VAR_7 = 0; VAR_7 != VAR_9; ++VAR_7) {
        if (FUNC_3(VAR_1, VAR_6[VAR_7], "%d", &VAR_10[VAR_7]) != 0)
            return -1;
        if (!(400 <= VAR_10[VAR_7] && VAR_10[VAR_7] <= 599)) {
            FUNC_1(VAR_1, VAR_6[VAR_7], "status must be within range of 400 to 599");
            return -1;
        }

        for (VAR_8 = 0; VAR_8 != VAR_7; ++VAR_8) {
            if (VAR_10[VAR_8] == VAR_10[VAR_7]) {
                FUNC_1(VAR_1, VAR_6[VAR_7], "status %d appears multiple times", VAR_10[VAR_7]);
                return -1;
            }
        }
    }

    h2o_iovec_t VAR_11 = FUNC_4(&VAR_4->pool, (*VAR_5)->data.scalar, VAR_0);
    for (VAR_7 = 0; VAR_7 != VAR_9; ++VAR_7) {

        FUNC_5(&VAR_4->pool, VAR_4->vars, VAR_4->vars->size + 1);
        h2o_errordoc_t *VAR_12 = VAR_4->vars->entries + VAR_4->vars->size++;
        VAR_12->status = VAR_10[VAR_7];
        VAR_12->url = VAR_11;
    }

    return 0;
}
