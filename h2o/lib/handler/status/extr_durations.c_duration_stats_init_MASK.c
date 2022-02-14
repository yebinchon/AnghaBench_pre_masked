
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_duration_stats_t {int evloop_latency_nanosec; void* total_time; void* response_time; void* process_time; void* request_total_time; void* body_time; void* header_time; void* connect_time; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(struct st_duration_stats_t *VAR_1)
{
    VAR_1->connect_time = FUNC_0(VAR_0);
    VAR_1->header_time = FUNC_0(VAR_0);
    VAR_1->body_time = FUNC_0(VAR_0);
    VAR_1->request_total_time = FUNC_0(VAR_0);
    VAR_1->process_time = FUNC_0(VAR_0);
    VAR_1->response_time = FUNC_0(VAR_0);
    VAR_1->total_time = FUNC_0(VAR_0);
    FUNC_1(&VAR_1->evloop_latency_nanosec, 0, sizeof(VAR_1->evloop_latency_nanosec));
}
