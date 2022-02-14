
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts4800_ts {int pendown; int dev; int bit; int reg; int regmap; int debounce; } ;
struct input_polled_dev {struct ts4800_ts* private; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct input_polled_dev *VAR_1)
{
 struct ts4800_ts *VAR_2 = VAR_1->private;
 int VAR_3;

 VAR_2->pendown = 0;
 VAR_2->debounce = VAR_0;

 VAR_3 = FUNC_1(VAR_2->regmap, VAR_2->reg, VAR_2->bit, VAR_2->bit);
 if (VAR_3)
  FUNC_0(VAR_2->dev, "Failed to enable touchscreen\n");
}
