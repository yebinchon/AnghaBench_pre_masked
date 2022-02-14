
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct mc13xxx_buttons_platform_data {int b1on_flags; int b2on_flags; int b3on_flags; scalar_t__ b1on_key; scalar_t__ b2on_key; scalar_t__ b3on_key; } ;
struct mc13xxx {int dummy; } ;
struct mc13783_pwrb {scalar_t__* keymap; int flags; struct mc13xxx* mc13783; struct input_dev* pwr; } ;
struct TYPE_5__ {TYPE_2__* parent; } ;
struct input_dev {char* name; char* phys; scalar_t__* keycode; int keycodesize; int evbit; int keycodemax; TYPE_1__ dev; int keybit; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_21 ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 struct mc13xxx* FUNC_4 (int ) ;
 struct mc13xxx_buttons_platform_data* FUNC_5 (TYPE_2__*) ;
 struct input_dev* FUNC_6 () ;
 int FUNC_7 (struct input_dev*) ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (struct mc13783_pwrb*) ;
 struct mc13783_pwrb* FUNC_10 (int,int ) ;
 int FUNC_11 (struct mc13xxx*,int ,struct mc13783_pwrb*) ;
 int FUNC_12 (struct mc13xxx*,int ,int ,char*,struct mc13783_pwrb*) ;
 int FUNC_13 (struct mc13xxx*) ;
 int FUNC_14 (struct mc13xxx*,int ,int,int) ;
 int FUNC_15 (struct mc13xxx*) ;
 int FUNC_16 (struct platform_device*,struct mc13783_pwrb*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_22)
{
 const struct mc13xxx_buttons_platform_data *VAR_23;
 struct mc13xxx *VAR_24 = FUNC_4(VAR_22->dev.parent);
 struct input_dev *VAR_25;
 struct mc13783_pwrb *VAR_26;
 int VAR_27 = 0;
 int VAR_28 = 0;

 VAR_23 = FUNC_5(&VAR_22->dev);
 if (!VAR_23) {
  FUNC_3(&VAR_22->dev, "missing platform data\n");
  return -VAR_0;
 }

 VAR_25 = FUNC_6();
 if (!VAR_25) {
  FUNC_2(&VAR_22->dev, "Can't allocate power button\n");
  return -VAR_1;
 }

 VAR_26 = FUNC_10(sizeof(*VAR_26), VAR_3);
 if (!VAR_26) {
  VAR_27 = -VAR_1;
  FUNC_2(&VAR_22->dev, "Can't allocate power button\n");
  goto free_input_dev;
 }

 VAR_28 |= (VAR_23->b1on_flags & 0x3) << VAR_11;
 VAR_28 |= (VAR_23->b2on_flags & 0x3) << VAR_13;
 VAR_28 |= (VAR_23->b3on_flags & 0x3) << VAR_15;

 VAR_26->pwr = VAR_25;
 VAR_26->mc13783 = VAR_24;

 FUNC_13(VAR_24);

 if (VAR_23->b1on_flags & VAR_5) {
  VAR_26->keymap[0] = VAR_23->b1on_key;
  if (VAR_23->b1on_key != VAR_4)
   FUNC_1(VAR_23->b1on_key, VAR_25->keybit);

  if (VAR_23->b1on_flags & VAR_6)
   VAR_26->flags |= VAR_17;

  if (VAR_23->b1on_flags & VAR_7)
   VAR_28 |= VAR_12;

  VAR_27 = FUNC_12(VAR_24, VAR_8,
       VAR_21, "b1on", VAR_26);
  if (VAR_27) {
   FUNC_2(&VAR_22->dev, "Can't request irq\n");
   goto free_priv;
  }
 }

 if (VAR_23->b2on_flags & VAR_5) {
  VAR_26->keymap[1] = VAR_23->b2on_key;
  if (VAR_23->b2on_key != VAR_4)
   FUNC_1(VAR_23->b2on_key, VAR_25->keybit);

  if (VAR_23->b2on_flags & VAR_6)
   VAR_26->flags |= VAR_18;

  if (VAR_23->b2on_flags & VAR_7)
   VAR_28 |= VAR_14;

  VAR_27 = FUNC_12(VAR_24, VAR_9,
       VAR_21, "b2on", VAR_26);
  if (VAR_27) {
   FUNC_2(&VAR_22->dev, "Can't request irq\n");
   goto free_irq_b1;
  }
 }

 if (VAR_23->b3on_flags & VAR_5) {
  VAR_26->keymap[2] = VAR_23->b3on_key;
  if (VAR_23->b3on_key != VAR_4)
   FUNC_1(VAR_23->b3on_key, VAR_25->keybit);

  if (VAR_23->b3on_flags & VAR_6)
   VAR_26->flags |= VAR_19;

  if (VAR_23->b3on_flags & VAR_7)
   VAR_28 |= VAR_16;

  VAR_27 = FUNC_12(VAR_24, VAR_10,
       VAR_21, "b3on", VAR_26);
  if (VAR_27) {
   FUNC_2(&VAR_22->dev, "Can't request irq: %d\n", VAR_27);
   goto free_irq_b2;
  }
 }

 FUNC_14(VAR_24, VAR_20, 0x3FE, VAR_28);

 FUNC_15(VAR_24);

 VAR_25->name = "mc13783_pwrbutton";
 VAR_25->phys = "mc13783_pwrbutton/input0";
 VAR_25->dev.parent = &VAR_22->dev;

 VAR_25->keycode = VAR_26->keymap;
 VAR_25->keycodemax = FUNC_0(VAR_26->keymap);
 VAR_25->keycodesize = sizeof(VAR_26->keymap[0]);
 FUNC_1(VAR_2, VAR_25->evbit);

 VAR_27 = FUNC_8(VAR_25);
 if (VAR_27) {
  FUNC_2(&VAR_22->dev, "Can't register power button: %d\n", VAR_27);
  goto free_irq;
 }

 FUNC_16(VAR_22, VAR_26);

 return 0;

free_irq:
 FUNC_13(VAR_24);

 if (VAR_23->b3on_flags & VAR_5)
  FUNC_11(VAR_24, VAR_10, VAR_26);

free_irq_b2:
 if (VAR_23->b2on_flags & VAR_5)
  FUNC_11(VAR_24, VAR_9, VAR_26);

free_irq_b1:
 if (VAR_23->b1on_flags & VAR_5)
  FUNC_11(VAR_24, VAR_8, VAR_26);

free_priv:
 FUNC_15(VAR_24);
 FUNC_9(VAR_26);

free_input_dev:
 FUNC_7(VAR_25);

 return VAR_27;
}
