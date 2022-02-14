
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pwm_freq_div; int gpio_pwm_pos; } ;
struct dib7000p_state {TYPE_1__ cfg; int gpio_val; int gpio_dir; } ;


 int FUNC_0 (struct dib7000p_state*,int,int ) ;
 int FUNC_1 (char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dib7000p_state *VAR_0)
{

 FUNC_1("gpio dir: %x: val: %x, pwm_pos: %x\n", VAR_0->gpio_dir, VAR_0->gpio_val, VAR_0->cfg.gpio_pwm_pos);

 FUNC_0(VAR_0, 1029, VAR_0->gpio_dir);
 FUNC_0(VAR_0, 1030, VAR_0->gpio_val);



 FUNC_0(VAR_0, 1032, VAR_0->cfg.gpio_pwm_pos);

 FUNC_0(VAR_0, 1037, VAR_0->cfg.pwm_freq_div);
 return 0;
}
