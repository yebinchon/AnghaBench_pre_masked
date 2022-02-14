
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct etm_event_data {int snk_config; int mask; } ;
struct coresight_device {int dummy; } ;
typedef int cpumask_t ;
struct TYPE_2__ {int (* free_buffer ) (int ) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 struct coresight_device* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct etm_event_data*,int) ;
 TYPE_1__* FUNC_5 (struct coresight_device*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct etm_event_data *VAR_0)
{
 int VAR_1;
 cpumask_t *VAR_2 = &VAR_0->mask;
 struct coresight_device *VAR_3;

 if (FUNC_0(FUNC_2(VAR_2)))
  return;

 if (!VAR_0->snk_config)
  return;

 VAR_1 = FUNC_3(VAR_2);
 VAR_3 = FUNC_1(FUNC_4(VAR_0, VAR_1));
 FUNC_5(VAR_3)->free_buffer(VAR_0->snk_config);
}
