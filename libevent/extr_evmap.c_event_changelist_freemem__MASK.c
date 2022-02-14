
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_changelist {scalar_t__ changes; } ;


 int FUNC_0 (struct event_changelist*) ;
 int FUNC_1 (scalar_t__) ;

void
FUNC_2(struct event_changelist *VAR_0)
{
 if (VAR_0->changes)
  FUNC_1(VAR_0->changes);
 FUNC_0(VAR_0);
}
