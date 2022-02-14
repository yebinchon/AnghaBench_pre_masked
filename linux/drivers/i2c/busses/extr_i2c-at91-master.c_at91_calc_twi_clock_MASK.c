
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_timings {int bus_freq_hz; int sda_hold_ns; } ;
struct at91_twi_pdata {int clk_offset; int clk_max_div; scalar_t__ has_hold_field; } ;
struct at91_twi_dev {int twi_cwgr_reg; int dev; int clk; struct at91_twi_pdata* pdata; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int,int,int) ;
 int FUNC_4 (int ,char*,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,struct i2c_timings*,int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void FUNC_8(struct at91_twi_dev *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5 = 0;
 struct at91_twi_pdata *VAR_6 = VAR_1->pdata;
 int VAR_7 = VAR_6->clk_offset;
 int VAR_8 = VAR_6->clk_max_div;
 struct i2c_timings VAR_9, *VAR_10 = &VAR_9;

 FUNC_6(VAR_1->dev, VAR_10, 1);

 VAR_4 = FUNC_7(0, (int)FUNC_1(FUNC_2(VAR_1->clk),
           2 * VAR_10->bus_freq_hz) - VAR_7);
 VAR_2 = FUNC_5(VAR_4 >> 8);
 VAR_3 = VAR_4 >> VAR_2;

 if (VAR_2 > VAR_8) {
  FUNC_4(VAR_1->dev, "%d exceeds ckdiv max value which is %d.\n",
    VAR_2, VAR_8);
  VAR_2 = VAR_8;
  VAR_3 = 255;
 }

 if (VAR_6->has_hold_field) {





  VAR_5 = FUNC_1(VAR_10->sda_hold_ns
        * (FUNC_2(VAR_1->clk) / 1000), 1000000);
  VAR_5 -= 3;
  if (VAR_5 < 0)
   VAR_5 = 0;
  if (VAR_5 > VAR_0) {
   FUNC_4(VAR_1->dev,
     "HOLD field set to its maximum value (%d instead of %d)\n",
     VAR_0, VAR_5);
   VAR_5 = VAR_0;
  }
 }

 VAR_1->twi_cwgr_reg = (VAR_2 << 16) | (VAR_3 << 8) | VAR_3
       | FUNC_0(VAR_5);

 FUNC_3(VAR_1->dev, "cdiv %d ckdiv %d hold %d (%d ns)\n",
  VAR_3, VAR_2, VAR_5, VAR_10->sda_hold_ns);
}
