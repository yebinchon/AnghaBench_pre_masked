
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int touchbuf ;
struct rpi_ts {int prop; struct input_polled_dev* poll_dev; scalar_t__ fw_regs_phys; int fw_regs_va; struct platform_device* pdev; } ;
struct rpi_firmware {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct input_polled_dev {struct rpi_ts* private; int poll; int poll_interval; struct input_dev* input; } ;
struct TYPE_2__ {int bustype; } ;
struct input_dev {char* name; TYPE_1__ id; } ;
struct device_node {int dummy; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,int ,struct rpi_ts*) ;
 struct input_polled_dev* FUNC_3 (struct device*) ;
 struct rpi_ts* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int ,scalar_t__*,int ) ;
 int FUNC_6 (struct input_dev*,int ,int ) ;
 int FUNC_7 (struct input_polled_dev*) ;
 int FUNC_8 (struct input_dev*,int ,int ,int ,int ,int ) ;
 struct device_node* FUNC_9 (struct device_node*) ;
 int FUNC_10 (struct device_node*) ;
 struct rpi_firmware* FUNC_11 (struct device_node*) ;
 int FUNC_12 (struct rpi_firmware*,int ,scalar_t__*,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_13 (struct input_dev*,int,int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_16)
{
 struct device *VAR_17 = &VAR_16->dev;
 struct device_node *VAR_18 = VAR_17->of_node;
 struct input_polled_dev *VAR_19;
 struct device_node *VAR_20;
 struct rpi_firmware *VAR_21;
 struct input_dev *VAR_22;
 struct rpi_ts *VAR_23;
 u32 VAR_24;
 int VAR_25;

 VAR_20 = FUNC_9(VAR_18);
 if (!VAR_20) {
  FUNC_0(VAR_17, "Missing firmware node\n");
  return -VAR_3;
 }

 VAR_21 = FUNC_11(VAR_20);
 FUNC_10(VAR_20);
 if (!VAR_21)
  return -VAR_5;

 VAR_23 = FUNC_4(VAR_17, sizeof(*VAR_23), VAR_6);
 if (!VAR_23)
  return -VAR_4;
 VAR_23->pdev = VAR_16;

 VAR_23->fw_regs_va = FUNC_5(VAR_17, VAR_8, &VAR_23->fw_regs_phys,
         VAR_6);
 if (!VAR_23->fw_regs_va) {
  FUNC_0(VAR_17, "failed to dma_alloc_coherent\n");
  return -VAR_4;
 }

 VAR_25 = FUNC_2(VAR_17, VAR_14, VAR_23);
 if (VAR_25) {
  FUNC_0(VAR_17, "failed to devm_add_action_or_reset, %d\n", VAR_25);
  return VAR_25;
 }


 VAR_24 = (u32)VAR_23->fw_regs_phys;
 VAR_25 = FUNC_12(VAR_21, VAR_9,
          &VAR_24, sizeof(VAR_24));

 if (VAR_25 || VAR_24 != 0) {
  FUNC_1(VAR_17, "Failed to set touchbuf, %d\n", VAR_25);
  return VAR_25;
 }

 VAR_19 = FUNC_3(VAR_17);
 if (!VAR_19) {
  FUNC_0(VAR_17, "Failed to allocate input device\n");
  return -VAR_4;
 }
 VAR_23->poll_dev = VAR_19;
 VAR_22 = VAR_19->input;

 VAR_22->name = "raspberrypi-ts";
 VAR_22->id.bustype = VAR_2;
 VAR_19->poll_interval = VAR_13;
 VAR_19->poll = VAR_15;
 VAR_19->private = VAR_23;

 FUNC_8(VAR_22, VAR_0, 0,
        VAR_11, 0, 0);
 FUNC_8(VAR_22, VAR_1, 0,
        VAR_10, 0, 0);
 FUNC_13(VAR_22, 1, &VAR_23->prop);

 VAR_25 = FUNC_6(VAR_22, VAR_12,
        VAR_7);
 if (VAR_25) {
  FUNC_0(VAR_17, "could not init mt slots, %d\n", VAR_25);
  return VAR_25;
 }

 VAR_25 = FUNC_7(VAR_19);
 if (VAR_25) {
  FUNC_0(VAR_17, "could not register input device, %d\n", VAR_25);
  return VAR_25;
 }

 return 0;
}
