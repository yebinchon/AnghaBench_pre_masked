
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct physical {TYPE_1__* handler; } ;
struct TYPE_2__ {int (* awaitcarrier ) (struct physical*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct physical*) ;

int
FUNC_1(struct physical *VAR_1)
{
  if (VAR_1->handler && VAR_1->handler->awaitcarrier)
    return (*VAR_1->handler->awaitcarrier)(VAR_1);

  return VAR_0;
}
