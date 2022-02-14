
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ SamplePeriod; } ;
struct TYPE_8__ {TYPE_5__ total; } ;
struct TYPE_9__ {TYPE_3__ stats; } ;
struct TYPE_6__ {scalar_t__ period; } ;
struct TYPE_7__ {TYPE_1__ autoload; } ;
struct mp {TYPE_4__ link; TYPE_2__ cfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct mp*) ;
 int FUNC_1 (TYPE_5__*,int ,int *) ;

void
FUNC_2(struct mp *VAR_1)
{
  if (VAR_1->link.stats.total.SamplePeriod != VAR_1->cfg.autoload.period)
    FUNC_0(VAR_1);
  else
    FUNC_1(&VAR_1->link.stats.total, VAR_0, ((void*)0));
}
