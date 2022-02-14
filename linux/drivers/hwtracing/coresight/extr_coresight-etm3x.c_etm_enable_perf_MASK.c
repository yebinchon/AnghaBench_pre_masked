
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct etm_drvdata {scalar_t__ cpu; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct etm_drvdata* FUNC_1 (int ) ;
 int FUNC_2 (struct etm_drvdata*) ;
 int FUNC_3 (struct etm_drvdata*,struct perf_event*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct coresight_device *VAR_1,
      struct perf_event *VAR_2)
{
 struct etm_drvdata *VAR_3 = FUNC_1(VAR_1->dev.parent);

 if (FUNC_0(VAR_3->cpu != FUNC_4()))
  return -VAR_0;


 FUNC_3(VAR_3, VAR_2);

 return FUNC_2(VAR_3);
}
