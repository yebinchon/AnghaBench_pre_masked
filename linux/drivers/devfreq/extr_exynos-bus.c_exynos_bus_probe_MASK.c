
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct exynos_bus {int * opp_table; int clk; struct devfreq* devfreq; struct device* dev; int lock; } ;
struct device_node {int dummy; } ;
struct devfreq_simple_ondemand_data {int upthreshold; int downdifferential; struct devfreq* parent; } ;
struct devfreq_passive_data {int upthreshold; int downdifferential; struct devfreq* parent; } ;
struct devfreq_dev_profile {int polling_ms; int exit; void* target; int get_dev_status; } ;
struct devfreq {TYPE_1__* profile; } ;
struct TYPE_2__ {int max_state; int* freq_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct devfreq*) ;
 int FUNC_1 (struct devfreq*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int *) ;
 struct devfreq* FUNC_7 (struct device*,int ) ;
 void* FUNC_8 (struct device*,struct devfreq_dev_profile*,int ,struct devfreq_simple_ondemand_data*) ;
 int FUNC_9 (struct device*,struct devfreq*) ;
 void* FUNC_10 (struct device*,int,int ) ;
 int FUNC_11 (struct exynos_bus*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (struct device_node*,struct exynos_bus*) ;
 int FUNC_13 (struct device_node*,struct exynos_bus*) ;
 int VAR_8 ;
 int FUNC_14 (struct exynos_bus*) ;
 void* VAR_9 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct device_node*) ;
 struct device_node* FUNC_17 (struct device_node*,char*,int ) ;
 int FUNC_18 (struct platform_device*,struct exynos_bus*) ;
 int FUNC_19 (char*,int ,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct device_node *VAR_12 = VAR_11->of_node, *VAR_13;
 struct devfreq_dev_profile *VAR_14;
 struct devfreq_simple_ondemand_data *VAR_15;
 struct devfreq_passive_data *VAR_16;
 struct devfreq *VAR_17;
 struct exynos_bus *VAR_18;
 int VAR_19, VAR_20;
 unsigned long VAR_21, VAR_22;
 bool VAR_23 = 0;

 if (!VAR_12) {
  FUNC_3(VAR_11, "failed to find devicetree node\n");
  return -VAR_2;
 }

 VAR_18 = FUNC_10(&VAR_10->dev, sizeof(*VAR_18), VAR_5);
 if (!VAR_18)
  return -VAR_3;
 FUNC_15(&VAR_18->lock);
 VAR_18->dev = &VAR_10->dev;
 FUNC_18(VAR_10, VAR_18);

 VAR_14 = FUNC_10(VAR_11, sizeof(*VAR_14), VAR_5);
 if (!VAR_14)
  return -VAR_3;

 VAR_13 = FUNC_17(VAR_11->of_node, "devfreq", 0);
 if (VAR_13) {
  FUNC_16(VAR_13);
  VAR_23 = 1;
 } else {
  VAR_19 = FUNC_12(VAR_12, VAR_18);
  if (VAR_19 < 0)
   return VAR_19;
 }


 VAR_19 = FUNC_13(VAR_12, VAR_18);
 if (VAR_19 < 0)
  goto err_reg;

 if (VAR_23)
  goto passive;


 VAR_14->polling_ms = 50;
 VAR_14->target = VAR_9;
 VAR_14->get_dev_status = VAR_7;
 VAR_14->exit = VAR_6;

 VAR_15 = FUNC_10(VAR_11, sizeof(*VAR_15), VAR_5);
 if (!VAR_15) {
  VAR_19 = -VAR_3;
  goto err;
 }
 VAR_15->upthreshold = 40;
 VAR_15->downdifferential = 5;


 VAR_18->devfreq = FUNC_8(VAR_11, VAR_14,
      VAR_1,
      VAR_15);
 if (FUNC_0(VAR_18->devfreq)) {
  FUNC_3(VAR_11, "failed to add devfreq device\n");
  VAR_19 = FUNC_1(VAR_18->devfreq);
  goto err;
 }


 VAR_19 = FUNC_9(VAR_11, VAR_18->devfreq);
 if (VAR_19 < 0) {
  FUNC_3(VAR_11, "failed to register opp notifier\n");
  goto err;
 }





 VAR_19 = FUNC_11(VAR_18);
 if (VAR_19 < 0) {
  FUNC_3(VAR_11, "failed to enable devfreq-event devices\n");
  goto err;
 }

 VAR_19 = FUNC_14(VAR_18);
 if (VAR_19 < 0) {
  FUNC_3(VAR_11, "failed to set event to devfreq-event devices\n");
  goto err;
 }

 goto out;
passive:

 VAR_14->target = VAR_9;
 VAR_14->exit = VAR_8;


 VAR_17 = FUNC_7(VAR_11, 0);
 if (FUNC_0(VAR_17)) {
  VAR_19 = -VAR_4;
  goto err;
 }

 VAR_16 = FUNC_10(VAR_11, sizeof(*VAR_16), VAR_5);
 if (!VAR_16) {
  VAR_19 = -VAR_3;
  goto err;
 }
 VAR_16->parent = VAR_17;


 VAR_18->devfreq = FUNC_8(VAR_11, VAR_14, VAR_0,
      VAR_16);
 if (FUNC_0(VAR_18->devfreq)) {
  FUNC_3(VAR_11,
   "failed to add devfreq dev with passive governor\n");
  VAR_19 = FUNC_1(VAR_18->devfreq);
  goto err;
 }

out:
 VAR_20 = VAR_18->devfreq->profile->max_state;
 VAR_21 = (VAR_18->devfreq->profile->freq_table[0] / 1000);
 VAR_22 = (VAR_18->devfreq->profile->freq_table[VAR_20 - 1] / 1000);
 FUNC_19("exynos-bus: new bus device registered: %s (%6ld KHz ~ %6ld KHz)\n",
   FUNC_4(VAR_11), VAR_21, VAR_22);

 return 0;

err:
 FUNC_5(VAR_11);
 FUNC_2(VAR_18->clk);
err_reg:
 if (!VAR_23) {
  FUNC_6(VAR_18->opp_table);
  VAR_18->opp_table = ((void*)0);
 }

 return VAR_19;
}
