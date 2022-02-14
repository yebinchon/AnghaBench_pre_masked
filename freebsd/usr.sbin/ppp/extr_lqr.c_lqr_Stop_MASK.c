
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int method; int timer; int owner; } ;
struct TYPE_5__ {TYPE_3__ lqm; } ;
struct TYPE_4__ {int name; } ;
struct physical {TYPE_2__ hdlc; TYPE_1__ link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct physical *VAR_3, int VAR_4)
{
  if (VAR_4 == VAR_1)
    FUNC_1(VAR_2, "%s: Stop sending LQR, Use LCP ECHO instead.\n",
               VAR_3->link.name);
  if (VAR_4 == VAR_0)
    FUNC_1(VAR_2, "%s: Stop sending LCP ECHO.\n",
               VAR_3->link.name);
  VAR_3->hdlc.lqm.method &= ~VAR_4;
  if (VAR_3->hdlc.lqm.method)
    FUNC_0(VAR_3->hdlc.lqm.owner);
  else
    FUNC_2(&VAR_3->hdlc.lqm.timer);
}
