
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_h2o_status_context_t {int receiver; TYPE_1__* ctx; } ;
struct TYPE_6__ {scalar_t__ size; int ** entries; } ;
struct st_h2o_root_status_handler_t {int super; TYPE_3__ receivers; } ;
typedef int h2o_handler_t ;
struct TYPE_5__ {int queue; } ;
typedef TYPE_1__ h2o_context_t ;


 int FUNC_0 (TYPE_1__*,int *,struct st_h2o_status_context_t*) ;
 struct st_h2o_status_context_t* FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,TYPE_3__*,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(h2o_handler_t *VAR_1, h2o_context_t *VAR_2)
{
    struct st_h2o_root_status_handler_t *VAR_3 = (void *)VAR_1;
    struct st_h2o_status_context_t *VAR_4 = FUNC_1(sizeof(*VAR_4));

    VAR_4->ctx = VAR_2;
    FUNC_2(VAR_2->queue, &VAR_4->receiver, VAR_0);

    FUNC_3(((void*)0), &VAR_3->receivers, VAR_3->receivers.size + 1);
    VAR_3->receivers.entries[VAR_3->receivers.size++] = &VAR_4->receiver;

    FUNC_0(VAR_2, &VAR_3->super, VAR_4);
}
