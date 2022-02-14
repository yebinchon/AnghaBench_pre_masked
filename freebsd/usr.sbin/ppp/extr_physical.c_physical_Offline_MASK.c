
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct physical {TYPE_2__ link; TYPE_1__* handler; } ;
struct TYPE_3__ {int (* offline ) (struct physical*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct physical*) ;

void
FUNC_2(struct physical *VAR_1)
{
  if (VAR_1->handler && VAR_1->handler->offline)
    (*VAR_1->handler->offline)(VAR_1);
  FUNC_0(VAR_0, "%s: Disconnected!\n", VAR_1->link.name);
}
