
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct dib3000mc_state* demodulator_priv; } ;
struct dibx000_agc_config {int agc1_max; int agc1_min; int agc2_max; int agc2_min; int agc1_pt1; int agc1_pt2; int agc1_slope1; int agc1_slope2; int agc2_pt1; int agc2_pt2; int agc2_slope1; int agc2_slope2; } ;
struct dib3000mc_state {TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__ phase_noise_mode; int max_time; int agc_command1; int agc_command2; int pwm3_value; int ln_adc_level; scalar_t__ mobile_mode; struct dibx000_agc_config* agc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dib3000mc_state*,int) ;
 int FUNC_1 (struct dib3000mc_state*,int ,int ) ;
 int FUNC_2 (struct dib3000mc_state*,int ) ;
 int FUNC_3 (struct dib3000mc_state*) ;
 int FUNC_4 (struct dib3000mc_state*,int,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_2)
{
 struct dib3000mc_state *VAR_3 = VAR_2->demodulator_priv;
 struct dibx000_agc_config *VAR_4 = VAR_3->cfg->agc;


 FUNC_4(VAR_3, 1027, 0x8000);
 FUNC_4(VAR_3, 1027, 0x0000);


 FUNC_4(VAR_3, 140, 0x0000);
 FUNC_4(VAR_3, 1031, 0);

 if (VAR_3->cfg->mobile_mode) {
  FUNC_4(VAR_3, 139, 0x0000);
  FUNC_4(VAR_3, 141, 0x0000);
  FUNC_4(VAR_3, 175, 0x0002);
  FUNC_4(VAR_3, 1032, 0x0000);
 } else {
  FUNC_4(VAR_3, 139, 0x0001);
  FUNC_4(VAR_3, 141, 0x0000);
  FUNC_4(VAR_3, 175, 0x0000);
  FUNC_4(VAR_3, 1032, 0x012C);
 }
 FUNC_4(VAR_3, 1033, 0x0000);


 FUNC_4(VAR_3, 1037, 0x3130);




 FUNC_4(VAR_3, 33, (5 << 0));
 FUNC_4(VAR_3, 88, (1 << 10) | (0x10 << 0));



 FUNC_4(VAR_3, 99, (1 << 9) | (0x20 << 0));

 if (VAR_3->cfg->phase_noise_mode == 0)
  FUNC_4(VAR_3, 111, 0x00);
 else
  FUNC_4(VAR_3, 111, 0x02);


 FUNC_4(VAR_3, 50, 0x8000);


 FUNC_3(VAR_3);


 FUNC_4(VAR_3, 53, 0x87);

 FUNC_4(VAR_3, 54, 0x87);


 FUNC_4(VAR_3, 36, VAR_3->cfg->max_time);
 FUNC_4(VAR_3, 37, (VAR_3->cfg->agc_command1 << 13) | (VAR_3->cfg->agc_command2 << 12) | (0x1d << 0));
 FUNC_4(VAR_3, 38, VAR_3->cfg->pwm3_value);
 FUNC_4(VAR_3, 39, VAR_3->cfg->ln_adc_level);


 FUNC_4(VAR_3, 40, 0x0179);
 FUNC_4(VAR_3, 41, 0x03f0);

 FUNC_4(VAR_3, 42, VAR_4->agc1_max);
 FUNC_4(VAR_3, 43, VAR_4->agc1_min);
 FUNC_4(VAR_3, 44, VAR_4->agc2_max);
 FUNC_4(VAR_3, 45, VAR_4->agc2_min);
 FUNC_4(VAR_3, 46, (VAR_4->agc1_pt1 << 8) | VAR_4->agc1_pt2);
 FUNC_4(VAR_3, 47, (VAR_4->agc1_slope1 << 8) | VAR_4->agc1_slope2);
 FUNC_4(VAR_3, 48, (VAR_4->agc2_pt1 << 8) | VAR_4->agc2_pt2);
 FUNC_4(VAR_3, 49, (VAR_4->agc2_slope1 << 8) | VAR_4->agc2_slope2);



 FUNC_4(VAR_3, 110, 3277);

 FUNC_4(VAR_3, 26, 0x6680);

 FUNC_4(VAR_3, 1, 4);

 FUNC_4(VAR_3, 2, 4);

 FUNC_4(VAR_3, 3, 0x1000);

 FUNC_4(VAR_3, 5, 1);

 FUNC_0(VAR_3, 8000);


 FUNC_4(VAR_3, 4, 0x814);

 FUNC_4(VAR_3, 21, (1 << 9) | 0x164);
 FUNC_4(VAR_3, 22, 0x463d);



 FUNC_4(VAR_3, 120, 0x200f);

 FUNC_4(VAR_3, 134, 0);


 FUNC_4(VAR_3, 195, 0x10);


 FUNC_4(VAR_3, 180, 0x2FF0);


 FUNC_1(VAR_3, 0, VAR_1);


 FUNC_2(VAR_3, VAR_0);


 FUNC_4(VAR_3, 769, (1 << 7) );

 return 0;
}
