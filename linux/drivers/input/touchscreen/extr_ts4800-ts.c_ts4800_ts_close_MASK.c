
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts4800_ts {int dev; int bit; int reg; int regmap; } ;
struct input_polled_dev {struct ts4800_ts* private; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct input_polled_dev *VAR_0)
{
 struct ts4800_ts *VAR_1 = VAR_0->private;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->regmap, VAR_1->reg, VAR_1->bit, 0);
 if (VAR_2)
  FUNC_0(VAR_1->dev, "Failed to disable touchscreen\n");

}
