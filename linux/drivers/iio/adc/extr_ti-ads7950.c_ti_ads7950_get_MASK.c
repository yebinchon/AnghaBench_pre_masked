
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_ads7950_state {int gpio_cmd_settings_bitmask; int cmd_settings_bitmask; int single_rx; int slock; int scan_single_msg; int spi; void* single_tx; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 void* FUNC_1 (struct ti_ads7950_state*) ;
 struct ti_ads7950_state* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct ti_ads7950_state *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 FUNC_3(&VAR_3->slock);


 if (VAR_3->gpio_cmd_settings_bitmask & FUNC_0(VAR_2)) {
  VAR_4 = VAR_3->cmd_settings_bitmask & FUNC_0(VAR_2);
  goto out;
 }


 VAR_3->cmd_settings_bitmask |= VAR_0;
 VAR_3->single_tx = FUNC_1(VAR_3);
 VAR_4 = FUNC_5(VAR_3->spi, &VAR_3->scan_single_msg);
 if (VAR_4)
  goto out;

 VAR_4 = ((VAR_3->single_rx >> 12) & FUNC_0(VAR_2)) ? 1 : 0;


 VAR_3->cmd_settings_bitmask &= ~VAR_0;
 VAR_3->single_tx = FUNC_1(VAR_3);
 VAR_4 = FUNC_5(VAR_3->spi, &VAR_3->scan_single_msg);
 if (VAR_4)
  goto out;

out:
 FUNC_4(&VAR_3->slock);

 return VAR_4;
}
