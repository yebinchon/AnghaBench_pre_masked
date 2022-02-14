
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct physical {int async; TYPE_1__* handler; } ;
struct TYPE_2__ {void (* setasyncparams ) (struct physical*,int ,int ) ;} ;


 int FUNC_0 (int *,int ,int ) ;
 void FUNC_1 (struct physical*,int ,int ) ;

void
FUNC_2(struct physical *VAR_0, u_int32_t VAR_1, u_int32_t VAR_2)
{
  if (VAR_0->handler && VAR_0->handler->setasyncparams)
    return (*VAR_0->handler->setasyncparams)(VAR_0, VAR_1, VAR_2);

  FUNC_0(&VAR_0->async, VAR_1, VAR_2);
}
