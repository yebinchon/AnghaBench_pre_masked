
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct palmas_pwron_config {int long_press_time_val; int pwron_debounce_val; } ;
struct palmas_pwron {int irq; int input_work; struct input_dev* input_dev; struct palmas* palmas; } ;
struct palmas {int dummy; } ;
struct TYPE_2__ {struct device* parent; } ;
struct input_dev {char* name; char* phys; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct palmas* FUNC_4 (int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,int) ;
 int FUNC_7 (int ,struct palmas_pwron*) ;
 struct input_dev* FUNC_8 () ;
 int FUNC_9 (struct input_dev*) ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct input_dev*,int ,int ) ;
 int FUNC_12 (struct palmas_pwron*) ;
 struct palmas_pwron* FUNC_13 (int,int ) ;
 int VAR_11 ;
 int FUNC_14 (struct device*,struct palmas_pwron_config*) ;
 int FUNC_15 (struct palmas*,int ,int ,int,int) ;
 int FUNC_16 (struct platform_device*,int ) ;
 int FUNC_17 (struct platform_device*,struct palmas_pwron*) ;
 int VAR_12 ;
 int FUNC_18 (int ,int *,int ,int,int ,struct palmas_pwron*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_13)
{
 struct palmas *VAR_14 = FUNC_4(VAR_13->dev.parent);
 struct device *VAR_15 = &VAR_13->dev;
 struct input_dev *VAR_16;
 struct palmas_pwron *VAR_17;
 struct palmas_pwron_config VAR_18;
 int VAR_19;
 int VAR_20;

 FUNC_14(VAR_15, &VAR_18);

 VAR_17 = FUNC_13(sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_0;

 VAR_16 = FUNC_8();
 if (!VAR_16) {
  FUNC_3(VAR_15, "Can't allocate power button\n");
  VAR_20 = -VAR_0;
  goto err_free_mem;
 }

 VAR_16->name = "palmas_pwron";
 VAR_16->phys = "palmas_pwron/input0";
 VAR_16->dev.parent = VAR_15;

 FUNC_11(VAR_16, VAR_1, VAR_6);





 VAR_19 = VAR_18.long_press_time_val << FUNC_1(VAR_8);
 VAR_19 |= VAR_18.pwron_debounce_val << FUNC_1(VAR_10);
 VAR_20 = FUNC_15(VAR_14, VAR_9,
       VAR_7,
       VAR_8 |
     VAR_10,
       VAR_19);
 if (VAR_20) {
  FUNC_3(VAR_15, "LONG_PRESS_KEY_UPDATE failed: %d\n", VAR_20);
  goto err_free_input;
 }

 VAR_17->palmas = VAR_14;
 VAR_17->input_dev = VAR_16;

 FUNC_0(&VAR_17->input_work, VAR_11);

 VAR_17->irq = FUNC_16(VAR_13, 0);
 VAR_20 = FUNC_18(VAR_17->irq, ((void*)0), VAR_12,
         VAR_4 |
     VAR_5 |
     VAR_3,
         FUNC_5(VAR_15), VAR_17);
 if (VAR_20) {
  FUNC_3(VAR_15, "Can't get IRQ for pwron: %d\n", VAR_20);
  goto err_free_input;
 }

 VAR_20 = FUNC_10(VAR_16);
 if (VAR_20) {
  FUNC_3(VAR_15, "Can't register power button: %d\n", VAR_20);
  goto err_free_irq;
 }

 FUNC_17(VAR_13, VAR_17);
 FUNC_6(VAR_15, 1);

 return 0;

err_free_irq:
 FUNC_2(&VAR_17->input_work);
 FUNC_7(VAR_17->irq, VAR_17);
err_free_input:
 FUNC_9(VAR_16);
err_free_mem:
 FUNC_12(VAR_17);
 return VAR_20;
}
