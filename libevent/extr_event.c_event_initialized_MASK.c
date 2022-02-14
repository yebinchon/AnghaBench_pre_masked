
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int ev_flags; } ;


 int VAR_0 ;

int
FUNC_0(const struct event *VAR_1)
{
 if (!(VAR_1->ev_flags & VAR_0))
  return 0;

 return 1;
}
