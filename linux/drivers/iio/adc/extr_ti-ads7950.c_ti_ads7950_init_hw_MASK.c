
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_ads7950_state {int gpio_cmd_settings_bitmask; int slock; int scan_single_msg; int spi; int single_tx; int cmd_settings_bitmask; } ;


 int VAR_0 ;
 int FUNC_0 (struct ti_ads7950_state*) ;
 int FUNC_1 (struct ti_ads7950_state*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct ti_ads7950_state *VAR_1)
{
 int VAR_2 = 0;

 FUNC_2(&VAR_1->slock);



 VAR_1->cmd_settings_bitmask = VAR_0;
 VAR_1->single_tx = FUNC_1(VAR_1);
 VAR_2 = FUNC_4(VAR_1->spi, &VAR_1->scan_single_msg);
 if (VAR_2)
  goto out;


 VAR_1->gpio_cmd_settings_bitmask = 0x0;
 VAR_1->single_tx = FUNC_0(VAR_1);
 VAR_2 = FUNC_4(VAR_1->spi, &VAR_1->scan_single_msg);

out:
 FUNC_3(&VAR_1->slock);

 return VAR_2;
}
