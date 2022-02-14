
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct of_phandle_iterator {int cur_count; int * cur; struct device_node* node; } ;
struct device_node {int dummy; } ;
struct device {TYPE_1__* of_node; } ;
struct arm_smmu_device {int dummy; } ;
typedef int __be32 ;
struct TYPE_4__ {int driver; } ;
struct TYPE_3__ {int fwnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 struct device_node* FUNC_0 (struct device*) ;
 struct arm_smmu_device* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (int *,int *,void**,int ) ;
 int FUNC_4 (struct device*,int *,int) ;
 int FUNC_5 (struct device*,int *,int *) ;
 int * FUNC_6 (int,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct device_node*,char*,int *) ;
 int FUNC_9 (struct device_node*) ;
 int FUNC_10 (struct of_phandle_iterator*,int *,int) ;
 int FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (struct device*) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_7,
        struct arm_smmu_device **VAR_8)
{
 struct device *VAR_9;
 struct device_node *VAR_10;
 struct of_phandle_iterator VAR_11;
 void *VAR_12 = &VAR_11;
 u32 *VAR_13;
 __be32 VAR_14;
 int VAR_15;

 VAR_10 = FUNC_0(VAR_7);
 if (!VAR_10 || !FUNC_8(VAR_10, "#stream-id-cells", ((void*)0))) {
  FUNC_9(VAR_10);
  return -VAR_0;
 }

 VAR_11.node = VAR_10;
 VAR_15 = FUNC_3(&VAR_5.driver, ((void*)0), &VAR_12,
         VAR_4);
 VAR_9 = VAR_12;
 FUNC_9(VAR_10);
 if (VAR_15 == 0)
  return -VAR_0;
 if (VAR_15 < 0)
  return VAR_15;

 if (FUNC_2(VAR_7)) {

  FUNC_11(FUNC_12(VAR_7), VAR_3,
           &VAR_14);
  VAR_11.cur = &VAR_14;
  VAR_11.cur_count = 1;
 }

 VAR_15 = FUNC_5(VAR_7, &VAR_9->of_node->fwnode,
    &VAR_6);
 if (VAR_15)
  return VAR_15;

 VAR_13 = FUNC_6(VAR_11.cur_count, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 *VAR_8 = FUNC_1(VAR_9);
 FUNC_10(&VAR_11, VAR_13, VAR_11.cur_count);
 VAR_15 = FUNC_4(VAR_7, VAR_13, VAR_11.cur_count);
 FUNC_7(VAR_13);
 return VAR_15;
}
