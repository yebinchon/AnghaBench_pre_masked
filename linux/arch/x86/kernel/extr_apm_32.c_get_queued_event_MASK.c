
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apm_user {scalar_t__ event_tail; int * events; } ;
typedef int apm_event_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static apm_event_t FUNC_0(struct apm_user *VAR_1)
{
 if (++VAR_1->event_tail >= VAR_0)
  VAR_1->event_tail = 0;
 return VAR_1->events[VAR_1->event_tail];
}
