
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int capabilities; } ;
struct TYPE_7__ {int hw_events; TYPE_2__ pmu; struct platform_device* plat_device; int count_width; scalar_t__ max_period; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct device_node*,char*,int *) ;
 int FUNC_7 (int ,TYPE_3__*,int) ;
 int FUNC_8 (TYPE_2__*,char*,int ) ;
 int FUNC_9 (char*) ;

int FUNC_10(struct platform_device *VAR_9,
     const struct of_device_id *VAR_10)
{
 struct device_node *VAR_11 = VAR_9->dev.of_node;
 int VAR_12;

 VAR_12 = FUNC_5();
 if (VAR_12) {
  FUNC_9("[perf] failed to probe PMU!\n");
  return VAR_12;
 }

 if (FUNC_6(VAR_11, "count-width",
     &VAR_4.count_width)) {
  VAR_4.count_width = VAR_1;
 }
 VAR_4.max_period = FUNC_0(VAR_4.count_width) - 1;

 VAR_4.plat_device = VAR_9;


 FUNC_7(VAR_7, &VAR_4, 1);

 VAR_12 = FUNC_3(VAR_6);
 if (VAR_12) {
  VAR_4.pmu.capabilities |= VAR_2;
  FUNC_9("[perf] PMU request irq fail!\n");
 }

 VAR_12 = FUNC_1(VAR_0, "AP_PERF_ONLINE",
    VAR_8,
    VAR_5);
 if (VAR_12) {
  FUNC_2();
  FUNC_4(VAR_4.hw_events);
  return VAR_12;
 }

 VAR_12 = FUNC_8(&VAR_4.pmu, "cpu", VAR_3);
 if (VAR_12) {
  FUNC_2();
  FUNC_4(VAR_4.hw_events);
 }

 return VAR_12;
}
