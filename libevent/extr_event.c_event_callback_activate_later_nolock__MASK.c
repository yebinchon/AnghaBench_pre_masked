
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_callback {int evcb_flags; } ;
struct event_base {int dummy; } ;


 scalar_t__ FUNC_0 (struct event_base*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct event_base*,struct event_callback*) ;
 int FUNC_2 (struct event_base*) ;

int
FUNC_3(struct event_base *VAR_2,
    struct event_callback *VAR_3)
{
 if (VAR_3->evcb_flags & (VAR_0|VAR_1))
  return 0;

 FUNC_1(VAR_2, VAR_3);
 if (FUNC_0(VAR_2))
  FUNC_2(VAR_2);
 return 1;
}
