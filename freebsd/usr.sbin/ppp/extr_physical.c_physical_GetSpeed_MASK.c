
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct physical {TYPE_1__* handler; } ;
struct TYPE_2__ {int (* speed ) (struct physical*) ;} ;


 int FUNC_0 (struct physical*) ;

unsigned
FUNC_1(struct physical *VAR_0)
{
  if (VAR_0->handler && VAR_0->handler->speed)
    return (*VAR_0->handler->speed)(VAR_0);

  return 0;
}
