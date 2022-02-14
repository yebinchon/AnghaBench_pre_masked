
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_eq_table {struct hns_roce_eq* eq; } ;
struct hns_roce_eq {int eqn; int eq_period; int eq_max_cnt; int irq; int eqe_size; int entries; int type_flag; struct hns_roce_dev* hr_dev; } ;
struct TYPE_2__ {int num_other_vectors; int num_comp_vectors; int num_aeq_vectors; int aeqe_depth; int ceqe_depth; } ;
struct hns_roce_dev {int irq_workq; int * irq; TYPE_1__ caps; struct device* dev; struct hns_roce_eq_table eq_table; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (struct hns_roce_dev*) ;
 int FUNC_1 (struct hns_roce_dev*,int,int,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct hns_roce_dev*,struct hns_roce_eq*,unsigned int) ;
 int FUNC_5 (struct hns_roce_dev*,struct hns_roce_eq*) ;
 int FUNC_6 (struct hns_roce_dev*,int,int ) ;
 struct hns_roce_eq* FUNC_7 (int,int,int ) ;
 int FUNC_8 (struct hns_roce_eq*) ;

__attribute__((used)) static int FUNC_9(struct hns_roce_dev *VAR_14)
{
 struct hns_roce_eq_table *VAR_15 = &VAR_14->eq_table;
 struct device *VAR_16 = VAR_14->dev;
 struct hns_roce_eq *VAR_17;
 unsigned int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;

 VAR_21 = VAR_14->caps.num_other_vectors;
 VAR_22 = VAR_14->caps.num_comp_vectors;
 VAR_23 = VAR_14->caps.num_aeq_vectors;

 VAR_20 = VAR_22 + VAR_23;
 VAR_19 = VAR_20 + VAR_21;

 VAR_15->eq = FUNC_7(VAR_20, sizeof(*VAR_15->eq), VAR_3);
 if (!VAR_15->eq)
  return -VAR_0;


 for (VAR_24 = 0; VAR_24 < VAR_20; VAR_24++) {
  VAR_17 = &VAR_15->eq[VAR_24];
  VAR_17->hr_dev = VAR_14;
  VAR_17->eqn = VAR_24;
  if (VAR_24 < VAR_22) {

   VAR_18 = VAR_13;
   VAR_17->type_flag = VAR_8;
   VAR_17->entries = VAR_14->caps.ceqe_depth;
   VAR_17->eqe_size = VAR_11;
   VAR_17->irq = VAR_14->irq[VAR_24 + VAR_21 + VAR_23];
   VAR_17->eq_max_cnt = VAR_9;
   VAR_17->eq_period = VAR_10;
  } else {

   VAR_18 = VAR_12;
   VAR_17->type_flag = VAR_4;
   VAR_17->entries = VAR_14->caps.aeqe_depth;
   VAR_17->eqe_size = VAR_7;
   VAR_17->irq = VAR_14->irq[VAR_24 - VAR_22 + VAR_21];
   VAR_17->eq_max_cnt = VAR_5;
   VAR_17->eq_period = VAR_6;
  }

  VAR_25 = FUNC_4(VAR_14, VAR_17, VAR_18);
  if (VAR_25) {
   FUNC_3(VAR_16, "eq create failed.\n");
   goto err_create_eq_fail;
  }
 }


 FUNC_6(VAR_14, VAR_20, VAR_2);

 VAR_25 = FUNC_1(VAR_14, VAR_19, VAR_22,
         VAR_23, VAR_21);
 if (VAR_25) {
  FUNC_3(VAR_16, "Request irq failed.\n");
  goto err_request_irq_fail;
 }

 VAR_14->irq_workq =
  FUNC_2("hns_roce_irq_workqueue");
 if (!VAR_14->irq_workq) {
  FUNC_3(VAR_16, "Create irq workqueue failed!\n");
  VAR_25 = -VAR_0;
  goto err_create_wq_fail;
 }

 return 0;

err_create_wq_fail:
 FUNC_0(VAR_14);

err_request_irq_fail:
 FUNC_6(VAR_14, VAR_20, VAR_1);

err_create_eq_fail:
 for (VAR_24 -= 1; VAR_24 >= 0; VAR_24--)
  FUNC_5(VAR_14, &VAR_15->eq[VAR_24]);
 FUNC_8(VAR_15->eq);

 return VAR_25;
}
