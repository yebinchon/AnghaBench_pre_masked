
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scaler_data {int num_clk; int * clk_name; } ;
struct scaler_context {int * clock; struct scaler_data* scaler_data; int regs; struct device* dev; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int ) ;
 int FUNC_5 (struct device*,struct resource*) ;
 struct scaler_context* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int,int *,int ,int ,char*,struct scaler_context*) ;
 scalar_t__ FUNC_8 (struct device*) ;
 int FUNC_9 (struct platform_device*,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct scaler_context*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*,int ) ;
 int FUNC_16 (struct device*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct resource *VAR_9;
 struct scaler_context *VAR_10;
 int VAR_11;
 int VAR_12, VAR_13;

 VAR_10 = FUNC_6(VAR_8, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->scaler_data =
  (struct scaler_data *)FUNC_8(VAR_8);

 VAR_10->dev = VAR_8;
 VAR_9 = FUNC_10(VAR_7, VAR_2, 0);
 VAR_10->regs = FUNC_5(VAR_8, VAR_9);
 if (FUNC_0(VAR_10->regs))
  return FUNC_1(VAR_10->regs);

 VAR_11 = FUNC_9(VAR_7, 0);
 if (VAR_11 < 0) {
  FUNC_3(VAR_8, "failed to get irq\n");
  return VAR_11;
 }

 VAR_12 = FUNC_7(VAR_8, VAR_11, ((void*)0), VAR_6,
     VAR_3, "drm_scaler", VAR_10);
 if (VAR_12 < 0) {
  FUNC_3(VAR_8, "failed to request irq\n");
  return VAR_12;
 }

 for (VAR_13 = 0; VAR_13 < VAR_10->scaler_data->num_clk; ++VAR_13) {
  VAR_10->clock[VAR_13] = FUNC_4(VAR_8,
           VAR_10->scaler_data->clk_name[VAR_13]);
  if (FUNC_0(VAR_10->clock[VAR_13])) {
   FUNC_3(VAR_8, "failed to get clock\n");
   return FUNC_1(VAR_10->clock[VAR_13]);
  }
 }

 FUNC_16(VAR_8);
 FUNC_15(VAR_8, VAR_4);
 FUNC_14(VAR_8);
 FUNC_11(VAR_7, VAR_10);

 VAR_12 = FUNC_2(VAR_8, &VAR_5);
 if (VAR_12)
  goto err_ippdrv_register;

 return 0;

err_ippdrv_register:
 FUNC_13(VAR_8);
 FUNC_12(VAR_8);
 return VAR_12;
}
