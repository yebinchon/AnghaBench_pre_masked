
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct bcm_kp {int kpcr; unsigned int n_rows; int n_cols; unsigned int imr0_val; unsigned int imr1_val; unsigned int kpemr; int kpior; TYPE_2__* input_dev; } ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct device*,char*,int,int,unsigned int,int,unsigned int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,unsigned int*,int*) ;
 scalar_t__ FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct bcm_kp *VAR_14)
{
 struct device *VAR_15 = VAR_14->input_dev->dev.parent;
 struct device_node *VAR_16 = VAR_15->of_node;
 int VAR_17;
 unsigned int VAR_18;
 unsigned int VAR_19;
 unsigned int VAR_20, VAR_21, VAR_22;


 VAR_14->kpcr = VAR_7 | VAR_1;

 VAR_17 = FUNC_2(VAR_15, &VAR_14->n_rows, &VAR_14->n_cols);
 if (VAR_17) {
  FUNC_1(VAR_15, "failed to parse kp params\n");
  return VAR_17;
 }


 VAR_14->kpcr |= (VAR_14->n_rows - 1) << VAR_6;


 VAR_14->kpcr |= (VAR_14->n_cols - 1) << VAR_4;
 VAR_21 = (1 << (VAR_14->n_cols)) - 1;
 VAR_20 = VAR_14->n_rows;


 VAR_14->imr0_val = VAR_21;

 VAR_22 = 1;
 while (--VAR_20 && VAR_22++ < 4)
  VAR_14->imr0_val |= VAR_14->imr0_val << VAR_13;


 VAR_14->imr1_val = 0;
 if (VAR_20) {
  VAR_14->imr1_val = VAR_21;
  while (--VAR_20)
   VAR_14->imr1_val |= VAR_14->imr1_val << VAR_13;
 }



 VAR_14->kpemr = 0;
 for (VAR_19 = 0; VAR_19 <= 30; VAR_19 += 2)
  VAR_14->kpemr |= (VAR_10 << VAR_19);





 FUNC_4(VAR_16, "status-debounce-filter-period", &VAR_18);

 if (VAR_18 > VAR_8) {
  FUNC_1(VAR_15, "Invalid Status filter debounce value %d\n",
   VAR_18);
  return -VAR_0;
 }

 VAR_14->kpcr |= VAR_18 << VAR_9;





 FUNC_4(VAR_16, "col-debounce-filter-period", &VAR_18);

 if (VAR_18 > VAR_2) {
  FUNC_1(VAR_15, "Invalid Column filter debounce value %d\n",
   VAR_18);
  return -VAR_0;
 }

 VAR_14->kpcr |= VAR_18 << VAR_3;





 if (FUNC_3(VAR_16, "row-output-enabled")) {




  VAR_14->kpior = ((1 << VAR_14->n_rows) - 1) <<
    VAR_12;
 } else {
  VAR_14->kpior = ((1 << VAR_14->n_cols) - 1) <<
    VAR_11;
 }




 if (FUNC_3(VAR_16, "pull-up-enabled"))
  VAR_14->kpcr |= VAR_5;

 FUNC_0(VAR_15, "n_rows=%d n_col=%d kpcr=%x kpior=%x kpemr=%x\n",
  VAR_14->n_rows, VAR_14->n_cols,
  VAR_14->kpcr, VAR_14->kpior, VAR_14->kpemr);

 return 0;
}
