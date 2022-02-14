
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int h2o_http2_scheduler_queue_t ;
typedef int h2o_http2_scheduler_queue_node_t ;
struct TYPE_4__ {int * member_0; } ;
struct TYPE_3__ {TYPE_2__ member_0; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static void FUNC_4(void)
{
    h2o_http2_scheduler_queue_t VAR_0;
    struct node_t {
        h2o_http2_scheduler_queue_node_t super;
        uint16_t weight;
        size_t cnt;
    } VAR_1 = {{{((void*)0)}}, 256}, VAR_2 = {{{((void*)0)}}, 128}, VAR_3 = {{{((void*)0)}}, 32}, VAR_4 = {{{((void*)0)}}, 1};
    size_t VAR_5;

    FUNC_1(&VAR_0);
    FUNC_3(&VAR_0, &VAR_1, 256);
    FUNC_3(&VAR_0, &VAR_2, 128);
    FUNC_3(&VAR_0, &VAR_3, 32);
    FUNC_3(&VAR_0, &VAR_4, 1);

    for (VAR_5 = 0; VAR_5 != (256 + 128 + 32 + 1) * 100; ++VAR_5) {
        struct node_t *VAR_6 = (struct node_t *)FUNC_2(&VAR_0);
        if (VAR_6 == ((void*)0)) {
            FUNC_0(0);
            return;
        }
        ++VAR_6->cnt;
        FUNC_3(&VAR_0, &VAR_6->super, VAR_6->weight);
    }

    FUNC_0(VAR_1 == 25600);
    FUNC_0(VAR_2 == 12800);
    FUNC_0(VAR_3 == 3200);
    FUNC_0(VAR_4 == 100);
}
