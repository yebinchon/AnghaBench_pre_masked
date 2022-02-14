
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_timings {int bus_freq_hz; } ;
struct dw_i2c_dev {int functionality; int master_cfg; int mode; struct i2c_timings timings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_0(struct dw_i2c_dev *VAR_9)
{
 struct i2c_timings *VAR_10 = &VAR_9->timings;

 VAR_9->functionality = VAR_8 | VAR_6;

 VAR_9->master_cfg = VAR_0 | VAR_2 |
     VAR_1;

 VAR_9->mode = VAR_7;

 switch (VAR_10->bus_freq_hz) {
 case 100000:
  VAR_9->master_cfg |= VAR_5;
  break;
 case 3400000:
  VAR_9->master_cfg |= VAR_4;
  break;
 default:
  VAR_9->master_cfg |= VAR_3;
 }
}
