
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; } ;
struct pppThroughput {TYPE_1__ Timer; int downtime; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(struct pppThroughput *VAR_1)
{
  if (VAR_1->Timer.state != VAR_0)
    FUNC_0(&VAR_1->downtime);
  FUNC_1(&VAR_1->Timer);
}
