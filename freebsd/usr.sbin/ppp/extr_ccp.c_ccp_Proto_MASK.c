
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_8__ {TYPE_3__* bundle; int link; } ;
struct ccp {TYPE_4__ fsm; } ;
struct TYPE_5__ {int active; } ;
struct TYPE_6__ {TYPE_1__ mp; } ;
struct TYPE_7__ {TYPE_2__ ncp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

u_short
FUNC_1(struct ccp *VAR_2)
{
  return !FUNC_0(VAR_2->fsm.link) || !VAR_2->fsm.bundle->ncp.mp.active ?
         VAR_0 : VAR_1;
}
