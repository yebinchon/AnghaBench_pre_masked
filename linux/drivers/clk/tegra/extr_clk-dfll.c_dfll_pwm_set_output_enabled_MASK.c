
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dfll {int dev; int pwm_disable_state; int pwm_pin; int pwm_rate; int ref_rate; int pwm_enable_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct tegra_dfll*,int ) ;
 int FUNC_4 (struct tegra_dfll*) ;
 int FUNC_5 (struct tegra_dfll*,int,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct tegra_dfll *VAR_5, bool VAR_6)
{
 int VAR_7;
 u32 VAR_8, VAR_9;

 if (VAR_6) {
  VAR_7 = FUNC_6(VAR_5->pwm_pin, VAR_5->pwm_enable_state);
  if (VAR_7 < 0) {
   FUNC_1(VAR_5->dev, "setting enable state failed\n");
   return -VAR_4;
  }
  VAR_8 = FUNC_3(VAR_5, VAR_0);
  VAR_8 &= ~VAR_1;
  VAR_9 = FUNC_0(VAR_5->ref_rate, VAR_5->pwm_rate);
  VAR_8 |= (VAR_9 << VAR_2)
    & VAR_1;
  FUNC_5(VAR_5, VAR_8, VAR_0);
  FUNC_4(VAR_5);

  VAR_8 |= VAR_3;
  FUNC_5(VAR_5, VAR_8, VAR_0);
  FUNC_4(VAR_5);
 } else {
  VAR_7 = FUNC_6(VAR_5->pwm_pin, VAR_5->pwm_disable_state);
  if (VAR_7 < 0)
   FUNC_2(VAR_5->dev, "setting disable state failed\n");

  VAR_8 = FUNC_3(VAR_5, VAR_0);
  VAR_8 &= ~VAR_3;
  FUNC_5(VAR_5, VAR_8, VAR_0);
  FUNC_4(VAR_5);
 }

 return 0;
}
