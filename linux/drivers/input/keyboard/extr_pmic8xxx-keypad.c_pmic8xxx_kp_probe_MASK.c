
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct pmic8xxx_kp {unsigned int num_rows; unsigned int num_cols; scalar_t__ key_sense_irq; scalar_t__ key_stuck_irq; unsigned int ctrl_reg; TYPE_3__* input; int regmap; int stuckstate; int keystate; int keycodes; TYPE_2__* dev; } ;
struct TYPE_14__ {int parent; struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_13__ {int version; int product; int vendor; int bustype; } ;
struct TYPE_15__ {char* name; char* phys; int evbit; int close; int open; TYPE_1__ id; } ;


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
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_2__*,int) ;
 TYPE_3__* FUNC_4 (TYPE_2__*) ;
 struct pmic8xxx_kp* FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (TYPE_2__*,int,int ,int ,char*,struct pmic8xxx_kp*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int ,int ) ;
 int FUNC_9 (TYPE_3__*,struct pmic8xxx_kp*) ;
 int FUNC_10 (int *,int *,unsigned int,unsigned int,int ,TYPE_3__*) ;
 int FUNC_11 (TYPE_2__*,unsigned int*,unsigned int*) ;
 int FUNC_12 (int ,int,int) ;
 scalar_t__ FUNC_13 (struct device_node*,char*) ;
 void* FUNC_14 (struct platform_device*,int) ;
 int FUNC_15 (struct platform_device*,struct pmic8xxx_kp*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_16 (struct pmic8xxx_kp*,struct platform_device*) ;
 int FUNC_17 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_17)
{
 struct device_node *VAR_18 = VAR_17->dev.of_node;
 unsigned int VAR_19, VAR_20;
 bool VAR_21;
 bool VAR_22;
 struct pmic8xxx_kp *VAR_23;
 int VAR_24;
 unsigned int VAR_25;

 VAR_24 = FUNC_11(&VAR_17->dev, &VAR_19, &VAR_20);
 if (VAR_24)
  return VAR_24;

 if (VAR_20 > VAR_10 || VAR_19 > VAR_11 ||
     VAR_20 < VAR_12) {
  FUNC_1(&VAR_17->dev, "invalid platform data\n");
  return -VAR_1;
 }

 VAR_21 = !FUNC_13(VAR_18, "linux,input-no-autorepeat");

 VAR_22 = FUNC_13(VAR_18, "wakeup-source") ||

   FUNC_13(VAR_18, "linux,keypad-wakeup");

 VAR_23 = FUNC_5(&VAR_17->dev, sizeof(*VAR_23), VAR_6);
 if (!VAR_23)
  return -VAR_3;

 VAR_23->regmap = FUNC_2(VAR_17->dev.parent, ((void*)0));
 if (!VAR_23->regmap)
  return -VAR_2;

 FUNC_15(VAR_17, VAR_23);

 VAR_23->num_rows = VAR_19;
 VAR_23->num_cols = VAR_20;
 VAR_23->dev = &VAR_17->dev;

 VAR_23->input = FUNC_4(&VAR_17->dev);
 if (!VAR_23->input) {
  FUNC_1(&VAR_17->dev, "unable to allocate input device\n");
  return -VAR_3;
 }

 VAR_23->key_sense_irq = FUNC_14(VAR_17, 0);
 if (VAR_23->key_sense_irq < 0)
  return VAR_23->key_sense_irq;

 VAR_23->key_stuck_irq = FUNC_14(VAR_17, 1);
 if (VAR_23->key_stuck_irq < 0)
  return VAR_23->key_stuck_irq;

 VAR_23->input->name = "PMIC8XXX keypad";
 VAR_23->input->phys = "pmic8xxx_keypad/input0";

 VAR_23->input->id.bustype = VAR_0;
 VAR_23->input->id.version = 0x0001;
 VAR_23->input->id.product = 0x0001;
 VAR_23->input->id.vendor = 0x0001;

 VAR_23->input->open = VAR_15;
 VAR_23->input->close = VAR_13;

 VAR_24 = FUNC_10(((void*)0), ((void*)0),
     VAR_11, VAR_10,
     VAR_23->keycodes, VAR_23->input);
 if (VAR_24) {
  FUNC_1(&VAR_17->dev, "failed to build keymap\n");
  return VAR_24;
 }

 if (VAR_21)
  FUNC_0(VAR_5, VAR_23->input->evbit);
 FUNC_8(VAR_23->input, VAR_4, VAR_9);

 FUNC_9(VAR_23->input, VAR_23);


 FUNC_12(VAR_23->keystate, 0xff, sizeof(VAR_23->keystate));
 FUNC_12(VAR_23->stuckstate, 0xff, sizeof(VAR_23->stuckstate));

 VAR_24 = FUNC_16(VAR_23, VAR_17);
 if (VAR_24 < 0) {
  FUNC_1(&VAR_17->dev, "unable to initialize keypad controller\n");
  return VAR_24;
 }

 VAR_24 = FUNC_6(&VAR_17->dev, VAR_23->key_sense_irq,
   VAR_14, VAR_7, "pmic-keypad",
   VAR_23);
 if (VAR_24 < 0) {
  FUNC_1(&VAR_17->dev, "failed to request keypad sense irq\n");
  return VAR_24;
 }

 VAR_24 = FUNC_6(&VAR_17->dev, VAR_23->key_stuck_irq,
   VAR_16, VAR_7,
   "pmic-keypad-stuck", VAR_23);
 if (VAR_24 < 0) {
  FUNC_1(&VAR_17->dev, "failed to request keypad stuck irq\n");
  return VAR_24;
 }

 VAR_24 = FUNC_17(VAR_23->regmap, VAR_8, &VAR_25);
 if (VAR_24 < 0) {
  FUNC_1(&VAR_17->dev, "failed to read KEYP_CTRL register\n");
  return VAR_24;
 }

 VAR_23->ctrl_reg = VAR_25;

 VAR_24 = FUNC_7(VAR_23->input);
 if (VAR_24 < 0) {
  FUNC_1(&VAR_17->dev, "unable to register keypad input device\n");
  return VAR_24;
 }

 FUNC_3(&VAR_17->dev, VAR_22);

 return 0;
}
