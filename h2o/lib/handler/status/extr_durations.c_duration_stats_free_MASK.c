
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entries; } ;
struct st_duration_stats_t {TYPE_1__ evloop_latency_nanosec; int total_time; int response_time; int process_time; int request_total_time; int body_time; int header_time; int connect_time; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct st_duration_stats_t *VAR_0)
{
    FUNC_1(VAR_0->connect_time);
    FUNC_1(VAR_0->header_time);
    FUNC_1(VAR_0->body_time);
    FUNC_1(VAR_0->request_total_time);
    FUNC_1(VAR_0->process_time);
    FUNC_1(VAR_0->response_time);
    FUNC_1(VAR_0->total_time);
    FUNC_0(VAR_0->evloop_latency_nanosec.entries);
}
