
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pm8xxx_vib {unsigned int reg_vib_drv; struct input_dev* vib_input_dev; struct pm8xxx_regs const* regs; int regmap; int work; } ;
struct pm8xxx_regs {unsigned int drv_en_manual_mask; int drv_addr; } ;
struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_6__ {int version; } ;
struct input_dev {char* name; int close; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int ,int *) ;
 struct input_dev* FUNC_3 (TYPE_2__*) ;
 struct pm8xxx_vib* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (struct input_dev*,int *,int ) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*,int ,int ) ;
 int FUNC_8 (struct input_dev*,struct pm8xxx_vib*) ;
 struct pm8xxx_regs* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct platform_device*,struct pm8xxx_vib*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int ,int ,unsigned int*) ;
 int FUNC_12 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_8)
{
 struct pm8xxx_vib *VAR_9;
 struct input_dev *VAR_10;
 int VAR_11;
 unsigned int VAR_12;
 const struct pm8xxx_regs *VAR_13;

 VAR_9 = FUNC_4(&VAR_8->dev, sizeof(*VAR_9), VAR_4);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->regmap = FUNC_2(VAR_8->dev.parent, ((void*)0));
 if (!VAR_9->regmap)
  return -VAR_0;

 VAR_10 = FUNC_3(&VAR_8->dev);
 if (!VAR_10)
  return -VAR_1;

 FUNC_0(&VAR_9->work, VAR_7);
 VAR_9->vib_input_dev = VAR_10;

 VAR_13 = FUNC_9(&VAR_8->dev);


 VAR_11 = FUNC_11(VAR_9->regmap, VAR_13->drv_addr, &VAR_12);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_12 &= VAR_13->drv_en_manual_mask;
 VAR_11 = FUNC_12(VAR_9->regmap, VAR_13->drv_addr, VAR_12);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_9->regs = VAR_13;
 VAR_9->reg_vib_drv = VAR_12;

 VAR_10->name = "pm8xxx_vib_ffmemless";
 VAR_10->id.version = 1;
 VAR_10->close = VAR_5;
 FUNC_8(VAR_10, VAR_9);
 FUNC_7(VAR_9->vib_input_dev, VAR_2, VAR_3);

 VAR_11 = FUNC_5(VAR_10, ((void*)0),
     VAR_6);
 if (VAR_11) {
  FUNC_1(&VAR_8->dev,
   "couldn't register vibrator as FF device\n");
  return VAR_11;
 }

 VAR_11 = FUNC_6(VAR_10);
 if (VAR_11) {
  FUNC_1(&VAR_8->dev, "couldn't register input device\n");
  return VAR_11;
 }

 FUNC_10(VAR_8, VAR_9);
 return 0;
}
