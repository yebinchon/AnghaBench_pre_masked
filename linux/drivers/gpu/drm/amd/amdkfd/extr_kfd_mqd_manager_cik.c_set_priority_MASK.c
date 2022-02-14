
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_properties {size_t priority; } ;
struct cik_mqd {size_t cp_hqd_queue_priority; int cp_hqd_pipe_priority; } ;


 int * VAR_0 ;

__attribute__((used)) static void FUNC_0(struct cik_mqd *VAR_1, struct queue_properties *VAR_2)
{
 VAR_1->cp_hqd_pipe_priority = VAR_0[VAR_2->priority];
 VAR_1->cp_hqd_queue_priority = VAR_2->priority;
}
