
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_h2o_status_context_t {int receiver; } ;
struct TYPE_5__ {size_t size; int ** entries; } ;
struct st_h2o_root_status_handler_t {TYPE_1__ receivers; int super; } ;
typedef int h2o_handler_t ;
struct TYPE_6__ {int queue; } ;
typedef TYPE_2__ h2o_context_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct st_h2o_status_context_t*) ;
 struct st_h2o_status_context_t* FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int **,int **,size_t) ;

__attribute__((used)) static void FUNC_5(h2o_handler_t *VAR_0, h2o_context_t *VAR_1)
{
    struct st_h2o_root_status_handler_t *VAR_2 = (void *)VAR_0;
    struct st_h2o_status_context_t *VAR_3 = FUNC_2(VAR_1, &VAR_2->super);
    size_t VAR_4;

    for (VAR_4 = 0; VAR_4 != VAR_2->receivers.size; ++VAR_4)
        if (VAR_2->receivers.entries[VAR_4] == &VAR_3->receiver)
            break;
    FUNC_0(VAR_4 != VAR_2->receivers.size);
    FUNC_4(VAR_2->receivers.entries + VAR_4 + 1, VAR_2->receivers.entries + VAR_4, VAR_2->receivers.size - VAR_4 - 1);
    --VAR_2->receivers.size;

    FUNC_3(VAR_1->queue, &VAR_3->receiver);

    FUNC_1(VAR_3);
}
