
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct dib3000mc_state {TYPE_2__* cfg; } ;
struct TYPE_4__ {scalar_t__ use_pwm3; scalar_t__ pwm3_inversion; TYPE_1__* agc; } ;
struct TYPE_3__ {int setup; } ;


 int FUNC_0 (struct dib3000mc_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dib3000mc_state *VAR_0)
{
 u16 VAR_1, VAR_2 = VAR_0->cfg->agc->setup & 0xfefb;
 if (VAR_0->cfg->pwm3_inversion) {
  VAR_1 = (2 << 14) | (0 << 10) | (7 << 6) | (2 << 2) | (2 << 0);
  VAR_2 |= (1 << 2);
 } else {
  VAR_1 = (2 << 14) | (4 << 10) | (7 << 6) | (2 << 2) | (2 << 0);
  VAR_2 |= (1 << 8);
 }
 FUNC_0(VAR_0, 51, VAR_1);
 FUNC_0(VAR_0, 52, VAR_2);

 if (VAR_0->cfg->use_pwm3)
  FUNC_0(VAR_0, 245, (1 << 3) | (1 << 0));
 else
  FUNC_0(VAR_0, 245, 0);

 FUNC_0(VAR_0, 1040, 0x3);
 return 0;
}
