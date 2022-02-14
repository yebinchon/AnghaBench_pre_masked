
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {size_t size; TYPE_3__** entries; } ;
typedef TYPE_4__ h2o_socketpool_target_vector_t ;
typedef int h2o_balancer_t ;
struct TYPE_10__ {int leased_count; } ;
struct TYPE_9__ {size_t weight_m1; } ;
struct TYPE_11__ {TYPE_2__ _shared; TYPE_1__ conf; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__ FUNC_3 (int) ;
 int * FUNC_4 () ;
 int FUNC_5 (int) ;
 size_t FUNC_6 (int *,TYPE_4__*,char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    h2o_socketpool_target_vector_t VAR_0 = FUNC_3(10);
    size_t VAR_1, VAR_2;
    size_t VAR_3 = 0;
    size_t VAR_4 = 0;
    char VAR_5[10] = {0};
    int VAR_6 = 1;
    h2o_balancer_t *VAR_7;

    for (VAR_1 = 0; VAR_1 < 10; VAR_1++)
        VAR_0.entries[VAR_1]->conf.weight_m1 = VAR_1 % 3;
    VAR_7 = FUNC_4();

    for (VAR_1 = 0; VAR_1 < VAR_0.size; VAR_1++)
        VAR_4 += ((unsigned)VAR_0.entries[VAR_1]->conf.weight_m1) + 1;
    VAR_4 *= 1000;

    for (VAR_1 = 0; VAR_1 < VAR_4; VAR_1++) {
        VAR_2 = FUNC_6(VAR_7, &VAR_0, VAR_5);
        if (VAR_2 > VAR_0.size) {
            FUNC_5(VAR_2 >= 0 && VAR_2 < VAR_0.size);
            goto Done;
        }
        VAR_6 = VAR_2 >= VAR_3 || (VAR_3 == VAR_0.size - 1 && VAR_2 == 0);
        if (!VAR_6) {
            FUNC_5(VAR_6);
            goto Done;
        }
        VAR_0.entries[VAR_2]->_shared.leased_count++;
        VAR_3 = VAR_2;
    }
    FUNC_5(FUNC_0(&VAR_0));

Done:
    FUNC_1(VAR_7);
    FUNC_2(&VAR_0);
}
