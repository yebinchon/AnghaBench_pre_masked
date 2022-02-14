
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


 int FUNC_0 (TYPE_4__*,size_t) ;
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
    char VAR_3[10] = {0};
    int VAR_4 = 1;
    h2o_balancer_t *VAR_5;

    VAR_5 = FUNC_4();

    for (VAR_1 = 0; VAR_1 < 10; VAR_1++)
        VAR_0.entries[VAR_1]->conf.weight_m1 = VAR_1 % 3;

    for (VAR_1 = 0; VAR_1 < 10000; VAR_1++) {
        VAR_2 = FUNC_6(VAR_5, &VAR_0, VAR_3);
        if (VAR_2 > 10) {
            FUNC_5(VAR_2 >= 0 && VAR_2 < VAR_0.size);
            goto Done;
        }
        VAR_4 = FUNC_0(&VAR_0, VAR_2);
        if (VAR_4 == -1) {
            FUNC_5(!VAR_4);
            goto Done;
        }
        VAR_0.entries[VAR_2]->_shared.leased_count++;
    }
    FUNC_5(!VAR_4);

Done:
    FUNC_2(&VAR_0);
    FUNC_1(VAR_5);
}
