
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32f7_i2c_setup {size_t speed; char* rise_time; int dnf; scalar_t__ analog_filter; int fall_time; int clock_src; int speed_freq; } ;
struct stm32f7_i2c_dev {size_t speed; int dev; int timing; int clk; } ;
struct TYPE_2__ {int rate; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (struct stm32f7_i2c_dev*,struct stm32f7_i2c_setup*,int *) ;

__attribute__((used)) static int FUNC_5(struct stm32f7_i2c_dev *VAR_3,
        struct stm32f7_i2c_setup *VAR_4)
{
 int VAR_5 = 0;

 VAR_4->speed = VAR_3->speed;
 VAR_4->speed_freq = VAR_2[VAR_4->speed].rate;
 VAR_4->clock_src = FUNC_0(VAR_3->clk);

 if (!VAR_4->clock_src) {
  FUNC_2(VAR_3->dev, "clock rate is 0\n");
  return -VAR_0;
 }

 do {
  VAR_5 = FUNC_4(VAR_3, VAR_4,
       &VAR_3->timing);
  if (VAR_5) {
   FUNC_2(VAR_3->dev,
    "failed to compute I2C timings.\n");
   if (VAR_3->speed > VAR_1) {
    VAR_3->speed--;
    VAR_4->speed = VAR_3->speed;
    VAR_4->speed_freq =
     VAR_2[VAR_4->speed].rate;
    FUNC_3(VAR_3->dev,
      "downgrade I2C Speed Freq to (%i)\n",
      VAR_2[VAR_4->speed].rate);
   } else {
    break;
   }
  }
 } while (VAR_5);

 if (VAR_5) {
  FUNC_2(VAR_3->dev, "Impossible to compute I2C timings.\n");
  return VAR_5;
 }

 FUNC_1(VAR_3->dev, "I2C Speed(%i), Freq(%i), Clk Source(%i)\n",
  VAR_4->speed, VAR_4->speed_freq, VAR_4->clock_src);
 FUNC_1(VAR_3->dev, "I2C Rise(%i) and Fall(%i) Time\n",
  VAR_4->rise_time, VAR_4->fall_time);
 FUNC_1(VAR_3->dev, "I2C Analog Filter(%s), DNF(%i)\n",
  (VAR_4->analog_filter ? "On" : "Off"), VAR_4->dnf);

 return 0;
}
