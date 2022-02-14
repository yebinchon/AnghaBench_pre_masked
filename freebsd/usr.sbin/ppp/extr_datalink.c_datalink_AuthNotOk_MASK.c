
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct datalink {TYPE_3__* physical; } ;
struct TYPE_4__ {int fsm; } ;
struct TYPE_5__ {TYPE_1__ lcp; } ;
struct TYPE_6__ {TYPE_2__ link; } ;


 int VAR_0 ;
 int FUNC_0 (struct datalink*) ;
 int FUNC_1 (struct datalink*,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct datalink *VAR_1)
{
  FUNC_1(VAR_1, VAR_0);
  FUNC_0(VAR_1);
  FUNC_2(&VAR_1->physical->link.lcp.fsm);
}
