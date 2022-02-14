
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct device* parent; } ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {char* name; int close; int open; TYPE_2__ dev; TYPE_1__ id; int phys; } ;
struct device {int dummy; } ;
struct cyttsp_bus_ops {int bustype; } ;
struct cyttsp {int irq; struct device* dev; int phys; int bl_ready; int reset_gpio; struct cyttsp_bus_ops const* bus_ops; struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cyttsp* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int FUNC_3 (struct cyttsp*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct cyttsp*) ;
 int FUNC_5 (struct cyttsp*) ;
 int FUNC_6 (struct device*,char*,...) ;
 char* FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*,char*,int ) ;
 struct input_dev* FUNC_9 (struct device*) ;
 struct cyttsp* FUNC_10 (struct device*,int,int ) ;
 int FUNC_11 (struct device*,int,int *,int ,int,char*,struct cyttsp*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct input_dev*,int ,int ) ;
 int FUNC_15 (struct input_dev*) ;
 int FUNC_16 (struct input_dev*,int ,int ) ;
 int FUNC_17 (struct input_dev*,struct cyttsp*) ;
 int FUNC_18 (int ,int,char*,char*) ;
 int FUNC_19 (struct input_dev*,int,int *) ;

struct cyttsp *FUNC_20(const struct cyttsp_bus_ops *VAR_12,
       struct device *VAR_13, int VAR_14, size_t VAR_15)
{
 struct cyttsp *VAR_16;
 struct input_dev *VAR_17;
 int VAR_18;

 VAR_16 = FUNC_10(VAR_13, sizeof(*VAR_16) + VAR_15, VAR_5);
 if (!VAR_16)
  return FUNC_0(-VAR_3);

 VAR_17 = FUNC_9(VAR_13);
 if (!VAR_17)
  return FUNC_0(-VAR_3);

 VAR_16->dev = VAR_13;
 VAR_16->input = VAR_17;
 VAR_16->bus_ops = VAR_12;
 VAR_16->irq = VAR_14;

 VAR_16->reset_gpio = FUNC_8(VAR_13, "reset", VAR_6);
 if (FUNC_1(VAR_16->reset_gpio)) {
  VAR_18 = FUNC_2(VAR_16->reset_gpio);
  FUNC_6(VAR_13, "Failed to request reset gpio, error %d\n", VAR_18);
  return FUNC_0(VAR_18);
 }

 VAR_18 = FUNC_4(VAR_16);
 if (VAR_18)
  return FUNC_0(VAR_18);

 FUNC_13(&VAR_16->bl_ready);
 FUNC_18(VAR_16->phys, sizeof(VAR_16->phys), "%s/input0", FUNC_7(VAR_13));

 VAR_17->name = "Cypress TTSP TouchScreen";
 VAR_17->phys = VAR_16->phys;
 VAR_17->id.bustype = VAR_12->bustype;
 VAR_17->dev.parent = VAR_16->dev;

 VAR_17->open = VAR_11;
 VAR_17->close = VAR_9;

 FUNC_17(VAR_17, VAR_16);

 FUNC_16(VAR_17, VAR_4, VAR_0);
 FUNC_16(VAR_17, VAR_4, VAR_1);
 FUNC_19(VAR_17, 1, ((void*)0));

 VAR_18 = FUNC_14(VAR_17, VAR_2, 0);
 if (VAR_18) {
  FUNC_6(VAR_13, "Unable to init MT slots.\n");
  return FUNC_0(VAR_18);
 }

 VAR_18 = FUNC_11(VAR_13, VAR_16->irq, ((void*)0), VAR_10,
       VAR_8 | VAR_7,
       "cyttsp", VAR_16);
 if (VAR_18) {
  FUNC_6(VAR_16->dev, "failed to request IRQ %d, err: %d\n",
   VAR_16->irq, VAR_18);
  return FUNC_0(VAR_18);
 }

 FUNC_12(VAR_16->irq);

 FUNC_3(VAR_16);

 VAR_18 = FUNC_5(VAR_16);
 if (VAR_18)
  return FUNC_0(VAR_18);

 VAR_18 = FUNC_15(VAR_17);
 if (VAR_18) {
  FUNC_6(VAR_16->dev, "failed to register input device: %d\n",
   VAR_18);
  return FUNC_0(VAR_18);
 }

 return VAR_16;
}
