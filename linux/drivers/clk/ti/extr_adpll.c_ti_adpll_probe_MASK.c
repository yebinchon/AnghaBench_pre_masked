
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_adpll_platform_data {int dummy; } ;
struct ti_adpll_data {int outputs; struct device_node* np; int clocks; struct device* dev; int iobase; int pa; int lock; struct ti_adpll_platform_data const* c; } ;
struct ti_adpll_clock {int dummy; } ;
struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {struct ti_adpll_platform_data* data; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,struct ti_adpll_data*) ;
 int FUNC_5 (struct device*,struct resource*) ;
 int FUNC_6 (struct device*,int ,int,int ) ;
 struct ti_adpll_data* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device_node*,int ,int *) ;
 int VAR_5 ;
 struct of_device_id* FUNC_9 (int ,struct device*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ti_adpll_data*) ;
 int FUNC_13 (struct ti_adpll_data*) ;
 int FUNC_14 (struct ti_adpll_data*) ;
 int FUNC_15 (struct ti_adpll_data*) ;
 int FUNC_16 (struct ti_adpll_data*) ;
 int FUNC_17 (struct ti_adpll_data*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct device *VAR_9 = &VAR_7->dev;
 const struct of_device_id *VAR_10;
 const struct ti_adpll_platform_data *VAR_11;
 struct ti_adpll_data *VAR_12;
 struct resource *VAR_13;
 int VAR_14;

 VAR_10 = FUNC_9(VAR_6, VAR_9);
 if (VAR_10)
  VAR_11 = VAR_10->data;
 else
  return -VAR_0;

 VAR_12 = FUNC_7(VAR_9, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;
 VAR_12->dev = VAR_9;
 VAR_12->np = VAR_8;
 VAR_12->c = VAR_11;
 FUNC_4(VAR_12->dev, VAR_12);
 FUNC_11(&VAR_12->lock);

 VAR_13 = FUNC_10(VAR_7, VAR_3, 0);
 if (!VAR_13)
  return -VAR_0;
 VAR_12->pa = VAR_13->start;

 VAR_12->iobase = FUNC_5(VAR_9, VAR_13);
 if (FUNC_0(VAR_12->iobase)) {
  FUNC_3(VAR_9, "could not get IO base: %li\n",
   FUNC_1(VAR_12->iobase));
  return FUNC_1(VAR_12->iobase);
 }

 VAR_14 = FUNC_17(VAR_12);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_16(VAR_12);
 if (VAR_14)
  return VAR_14;

 VAR_12->clocks = FUNC_6(VAR_12->dev,
     VAR_4,
     sizeof(struct ti_adpll_clock),
     VAR_2);
 if (!VAR_12->clocks)
  return -VAR_1;

 VAR_14 = FUNC_15(VAR_12);
 if (VAR_14) {
  FUNC_3(VAR_9, "could not register dco: %i\n", VAR_14);
  goto free;
 }

 VAR_14 = FUNC_14(VAR_12);
 if (VAR_14)
  goto free;
 VAR_14 = FUNC_13(VAR_12);
 if (VAR_14)
  goto free;

 VAR_14 = FUNC_8(VAR_12->np, VAR_5, &VAR_12->outputs);
 if (VAR_14)
  goto free;

 return 0;

free:
 FUNC_2(1);
 FUNC_12(VAR_12);

 return VAR_14;
}
