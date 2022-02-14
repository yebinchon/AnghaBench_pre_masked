
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apm_queue {int event_tail; int * events; } ;
typedef int apm_event_t ;


 int VAR_0 ;

__attribute__((used)) static inline apm_event_t FUNC_0(struct apm_queue *VAR_1)
{
 VAR_1->event_tail = (VAR_1->event_tail + 1) % VAR_0;
 return VAR_1->events[VAR_1->event_tail];
}
