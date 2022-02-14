
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {TYPE_1__* parent; } ;
struct platform_device {struct device dev; } ;
struct mxs_lradc_ts {int over_sample_cnt; int over_sample_delay; int settling_delay; int base; struct device* dev; int lock; struct mxs_lradc* lradc; } ;
struct mxs_lradc {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct mxs_lradc* FUNC_3 (TYPE_1__*) ;
 struct mxs_lradc_ts* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (struct device*,int,int ,int ,int ,struct mxs_lradc_ts*) ;
 int FUNC_7 (struct device_node*,int) ;
 int VAR_4 ;
 int FUNC_8 (struct mxs_lradc_ts*) ;
 int * VAR_5 ;
 int FUNC_9 (struct mxs_lradc_ts*) ;
 int FUNC_10 (struct mxs_lradc_ts*) ;
 int FUNC_11 (struct device_node*,char*,int*) ;
 int FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,struct mxs_lradc_ts*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct device_node *VAR_8 = VAR_7->parent->of_node;
 struct mxs_lradc *VAR_9 = FUNC_3(VAR_7->parent);
 struct mxs_lradc_ts *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 u32 VAR_15 = 0, VAR_16;

 VAR_10 = FUNC_4(VAR_7, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 FUNC_13(VAR_6, VAR_10);

 VAR_10->lradc = VAR_9;
 VAR_10->dev = VAR_7;
 FUNC_14(&VAR_10->lock);

 VAR_10->base = FUNC_5(VAR_6, 0);
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 VAR_11 = FUNC_11(VAR_8, "fsl,lradc-touchscreen-wires",
       &VAR_15);
 if (VAR_11)
  return VAR_11;

 if (FUNC_11(VAR_8, "fsl,ave-ctrl", &VAR_16)) {
  VAR_10->over_sample_cnt = 4;
 } else {
  if (VAR_16 >= 1 && VAR_16 <= 32) {
   VAR_10->over_sample_cnt = VAR_16;
  } else {
   FUNC_2(VAR_10->dev, "Invalid sample count (%u)\n",
    VAR_16);
   return -VAR_0;
  }
 }

 if (FUNC_11(VAR_8, "fsl,ave-delay", &VAR_16)) {
  VAR_10->over_sample_delay = 2;
 } else {
  if (VAR_16 >= 2 && VAR_16 <= VAR_3 + 1) {
   VAR_10->over_sample_delay = VAR_16;
  } else {
   FUNC_2(VAR_10->dev, "Invalid sample delay (%u)\n",
    VAR_16);
   return -VAR_0;
  }
 }

 if (FUNC_11(VAR_8, "fsl,settling", &VAR_16)) {
  VAR_10->settling_delay = 10;
 } else {
  if (VAR_16 >= 1 && VAR_16 <= VAR_3) {
   VAR_10->settling_delay = VAR_16;
  } else {
   FUNC_2(VAR_10->dev, "Invalid settling delay (%u)\n",
    VAR_16);
   return -VAR_0;
  }
 }

 VAR_11 = FUNC_15(VAR_10->base);
 if (VAR_11)
  return VAR_11;

 FUNC_8(VAR_10);

 for (VAR_14 = 0; VAR_14 < 3; VAR_14++) {
  VAR_12 = FUNC_12(VAR_6, VAR_5[VAR_14]);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_13 = FUNC_7(VAR_8, VAR_12);

  FUNC_10(VAR_10);

  VAR_11 = FUNC_6(VAR_7, VAR_13,
           VAR_4,
           0, VAR_5[VAR_14], VAR_10);
  if (VAR_11)
   return VAR_11;
 }

 return FUNC_9(VAR_10);
}
