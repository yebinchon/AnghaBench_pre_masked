
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct pmc_type {scalar_t__ has_deep_sleep; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {struct pmc_type* data; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (scalar_t__,struct platform_device*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (struct device_node*,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_10 ;
 int FUNC_7 (struct device_node*,int,struct resource*) ;
 int FUNC_8 (struct device_node*) ;
 struct of_device_id* FUNC_9 (int ,TYPE_1__*) ;
 struct platform_device* VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int FUNC_10 (scalar_t__,int ,int ,char*,struct platform_device*) ;
 int FUNC_11 (int *) ;
 void* VAR_16 ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_17)
{
 const struct of_device_id *VAR_18;
 struct device_node *VAR_19 = VAR_17->dev.of_node;
 struct resource VAR_20;
 const struct pmc_type *VAR_21;
 int VAR_22 = 0;

 VAR_18 = FUNC_9(VAR_14, &VAR_17->dev);
 if (!VAR_18)
  return -VAR_1;

 VAR_21 = VAR_18->data;

 if (!FUNC_8(VAR_19))
  return -VAR_2;

 VAR_7 = VAR_21->has_deep_sleep;
 VAR_8 = FUNC_1();
 VAR_11 = VAR_17;

 VAR_9 = FUNC_5();
 if (VAR_9 < 0)
  return VAR_9;

 VAR_22 = FUNC_7(VAR_19, 0, &VAR_20);
 if (VAR_22)
  return -VAR_2;

 VAR_12 = FUNC_4(VAR_19, 0);
 if (VAR_12) {
  VAR_22 = FUNC_10(VAR_12, VAR_13, VAR_5,
                    "pmc", VAR_17);

  if (VAR_22)
   return -VAR_0;
 }

 VAR_15 = FUNC_2(VAR_20.start, sizeof(*VAR_15));

 if (!VAR_15) {
  VAR_22 = -VAR_3;
  goto out;
 }

 VAR_22 = FUNC_7(VAR_19, 1, &VAR_20);
 if (VAR_22) {
  VAR_22 = -VAR_2;
  goto out_pmc;
 }

 VAR_6 = FUNC_2(VAR_20.start, sizeof(*VAR_6));

 if (!VAR_6) {
  VAR_22 = -VAR_3;
  goto out_pmc;
 }

 if (VAR_7) {
  VAR_16 = FUNC_2(VAR_8 + VAR_4,
         sizeof(*VAR_16));
  if (!VAR_16) {
   VAR_22 = -VAR_3;
   goto out_syscr;
  }
 }

 if (VAR_9)
  FUNC_6();

 FUNC_11(&VAR_10);
 return 0;

out_syscr:
 FUNC_3(VAR_6);
out_pmc:
 FUNC_3(VAR_15);
out:
 if (VAR_12)
  FUNC_0(VAR_12, VAR_17);

 return VAR_22;
}
