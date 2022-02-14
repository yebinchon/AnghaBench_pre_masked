
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ SamplePeriod; } ;
struct TYPE_10__ {TYPE_5__ total; } ;
struct TYPE_11__ {TYPE_2__ stats; } ;
struct TYPE_12__ {scalar_t__ period; } ;
struct TYPE_9__ {TYPE_4__ autoload; } ;
struct mp {TYPE_3__ link; int bundle; TYPE_1__ cfg; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mp*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_5__*,int ,struct mp*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,scalar_t__) ;
 int FUNC_5 (TYPE_5__*,char*,int) ;

void
FUNC_6(struct mp *VAR_1)
{
  if (VAR_1->link.stats.total.SamplePeriod != VAR_1->cfg.autoload.period) {
    FUNC_3(&VAR_1->link.stats.total);
    FUNC_4(&VAR_1->link.stats.total, VAR_1->cfg.autoload.period);
    FUNC_2(&VAR_1->link.stats.total, VAR_0, VAR_1);
  }

  if (FUNC_0(VAR_1->bundle))
    FUNC_5(&VAR_1->link.stats.total, "MP throughput", 1);
  else
    FUNC_1(VAR_1);
}
