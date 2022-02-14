
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * orphan_placeholder; } ;
struct TYPE_4__ {TYPE_1__ reqs; } ;
struct st_h2o_http3_server_conn_t {TYPE_2__ scheduler; } ;
typedef int h2o_http2_scheduler_node_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;

__attribute__((used)) static h2o_http2_scheduler_node_t *FUNC_2(struct st_h2o_http3_server_conn_t *VAR_0)
{
    if (VAR_0->scheduler.reqs.orphan_placeholder == ((void*)0)) {
        VAR_0->scheduler.reqs.orphan_placeholder = FUNC_1(sizeof(*VAR_0->scheduler.reqs.orphan_placeholder));
        FUNC_0(VAR_0->scheduler.reqs.orphan_placeholder);
    }
    return VAR_0->scheduler.reqs.orphan_placeholder;
}
