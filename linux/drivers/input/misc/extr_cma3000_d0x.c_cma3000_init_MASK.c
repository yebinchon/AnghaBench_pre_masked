
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bustype; } ;
struct input_dev {char* name; int evbit; int close; int open; TYPE_1__ id; } ;
struct device {int dummy; } ;
struct cma3000_platform_data {scalar_t__ mode; int g_range; int irqflags; int fuzz_z; int fuzz_y; int fuzz_x; } ;
struct cma3000_bus_ops {int bustype; } ;
struct cma3000_accl_data {int irq; scalar_t__ mode; int g_range; struct input_dev* input_dev; int mutex; struct cma3000_platform_data const* pdata; struct cma3000_bus_ops const* bus_ops; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cma3000_accl_data*,int ,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct cma3000_accl_data* FUNC_1 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct cma3000_accl_data*) ;
 int VAR_16 ;
 int FUNC_4 (struct device*,char*) ;
 struct cma3000_platform_data* FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (int,struct cma3000_accl_data*) ;
 struct input_dev* FUNC_9 () ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct input_dev*) ;
 int FUNC_12 (struct input_dev*,int ,int,int,int ,int ) ;
 int FUNC_13 (struct input_dev*,struct cma3000_accl_data*) ;
 int FUNC_14 (struct cma3000_accl_data*) ;
 struct cma3000_accl_data* FUNC_15 (int,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*,int) ;
 int FUNC_18 (int,int *,int ,int,char*,struct cma3000_accl_data*) ;

struct cma3000_accl_data *FUNC_19(struct device *VAR_17, int VAR_18,
           const struct cma3000_bus_ops *VAR_19)
{
 const struct cma3000_platform_data *VAR_20 = FUNC_5(VAR_17);
 struct cma3000_accl_data *VAR_21;
 struct input_dev *VAR_22;
 int VAR_23;
 int VAR_24;

 if (!VAR_20) {
  FUNC_4(VAR_17, "platform data not found\n");
  VAR_24 = -VAR_9;
  goto err_out;
 }



 if (VAR_18 == 0) {
  VAR_24 = -VAR_9;
  goto err_out;
 }

 VAR_21 = FUNC_15(sizeof(struct cma3000_accl_data), VAR_12);
 VAR_22 = FUNC_9();
 if (!VAR_21 || !VAR_22) {
  VAR_24 = -VAR_10;
  goto err_free_mem;
 }

 VAR_21->dev = VAR_17;
 VAR_21->input_dev = VAR_22;
 VAR_21->bus_ops = VAR_19;
 VAR_21->pdata = VAR_20;
 VAR_21->irq = VAR_18;
 FUNC_16(&VAR_21->mutex);

 VAR_21->mode = VAR_20->mode;
 if (VAR_21->mode > VAR_6) {
  VAR_21->mode = VAR_5;
  FUNC_7(VAR_17,
    "Invalid mode specified, assuming Motion Detect\n");
 }

 VAR_21->g_range = VAR_20->g_range;
 if (VAR_21->g_range != VAR_7 && VAR_21->g_range != VAR_8) {
  FUNC_6(VAR_17,
    "Invalid G range specified, assuming 8G\n");
  VAR_21->g_range = VAR_8;
 }

 VAR_22->name = "cma3000-accelerometer";
 VAR_22->id.bustype = VAR_19->bustype;
 VAR_22->open = VAR_15;
 VAR_22->close = VAR_14;

  FUNC_2(VAR_11, VAR_22->evbit);

 FUNC_12(VAR_22, VAR_1,
   -VAR_21->g_range, VAR_21->g_range, VAR_20->fuzz_x, 0);
 FUNC_12(VAR_22, VAR_2,
   -VAR_21->g_range, VAR_21->g_range, VAR_20->fuzz_y, 0);
 FUNC_12(VAR_22, VAR_3,
   -VAR_21->g_range, VAR_21->g_range, VAR_20->fuzz_z, 0);
 FUNC_12(VAR_22, VAR_0, 0, 1, 0, 0);

 FUNC_13(VAR_22, VAR_21);

 VAR_24 = FUNC_3(VAR_21);
 if (VAR_24)
  goto err_free_mem;

 VAR_23 = FUNC_0(VAR_21, VAR_4, "Revid");
 if (VAR_23 < 0) {
  VAR_24 = VAR_23;
  goto err_free_mem;
 }

 FUNC_17("CMA3000 Accelerometer: Revision %x\n", VAR_23);

 VAR_24 = FUNC_18(VAR_18, ((void*)0), VAR_16,
         VAR_20->irqflags | VAR_13,
         "cma3000_d0x", VAR_21);
 if (VAR_24) {
  FUNC_4(VAR_17, "request_threaded_irq failed\n");
  goto err_free_mem;
 }

 VAR_24 = FUNC_11(VAR_21->input_dev);
 if (VAR_24) {
  FUNC_4(VAR_17, "Unable to register input device\n");
  goto err_free_irq;
 }

 return VAR_21;

err_free_irq:
 FUNC_8(VAR_18, VAR_21);
err_free_mem:
 FUNC_10(VAR_22);
 FUNC_14(VAR_21);
err_out:
 return FUNC_1(VAR_24);
}
