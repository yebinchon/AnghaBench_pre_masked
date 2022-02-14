
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct round_robin_t {size_t pos; scalar_t__ consumed_weight; int mutex; } ;
struct TYPE_8__ {size_t size; TYPE_2__** entries; } ;
typedef TYPE_3__ h2o_socketpool_target_vector_t ;
typedef int h2o_balancer_t ;
struct TYPE_6__ {scalar_t__ weight_m1; } ;
struct TYPE_7__ {TYPE_1__ conf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct round_robin_t*,TYPE_3__*) ;

__attribute__((used)) static size_t FUNC_5(h2o_balancer_t *VAR_0, h2o_socketpool_target_vector_t *VAR_1, char *VAR_2)
{
    size_t VAR_3;
    size_t VAR_4 = 0;
    struct round_robin_t *VAR_5 = (void *)VAR_0;

    FUNC_2(&VAR_5->mutex);

    FUNC_0(VAR_1->size != 0);
    for (VAR_3 = 0; VAR_3 < VAR_1->size; VAR_3++) {
        if (!VAR_2[VAR_5->pos]) {

            VAR_4 = VAR_5->pos;
            if (++VAR_5->consumed_weight > VAR_1->entries[VAR_5->pos]->conf.weight_m1)
                FUNC_4(VAR_5, VAR_1);
            FUNC_3(&VAR_5->mutex);
            return VAR_4;
        } else {
            FUNC_4(VAR_5, VAR_1);
        }
    }
    FUNC_1("unreachable");
}
