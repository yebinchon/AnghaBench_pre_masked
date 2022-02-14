
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct rk3x_i2c_calced_timings {int tuning; int div_high; int div_low; } ;
struct i2c_timings {int bus_freq_hz; } ;
struct rk3x_i2c {int dev; int pclk; int lock; TYPE_1__* soc_data; struct i2c_timings t; } ;
struct TYPE_2__ {int (* calc_timings ) (unsigned long,struct i2c_timings*,struct rk3x_i2c_calced_timings*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned long,int,int,int) ;
 int FUNC_4 (int,unsigned long) ;
 int FUNC_5 (struct rk3x_i2c*,int ) ;
 int FUNC_6 (struct rk3x_i2c*,int,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (unsigned long,struct i2c_timings*,struct rk3x_i2c_calced_timings*) ;

__attribute__((used)) static void FUNC_10(struct rk3x_i2c *VAR_3, unsigned long VAR_4)
{
 struct i2c_timings *VAR_5 = &VAR_3->t;
 struct rk3x_i2c_calced_timings VAR_6;
 u64 VAR_7, VAR_8;
 unsigned long VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_11 = VAR_3->soc_data->calc_timings(VAR_4, VAR_5, &VAR_6);
 FUNC_0(VAR_11 != 0, "Could not reach SCL freq %u", VAR_5->bus_freq_hz);

 FUNC_2(VAR_3->pclk);

 FUNC_7(&VAR_3->lock, VAR_9);
 VAR_10 = FUNC_5(VAR_3, VAR_1);
 VAR_10 &= ~VAR_2;
 VAR_10 |= VAR_6.tuning;
 FUNC_6(VAR_3, VAR_10, VAR_1);
 FUNC_6(VAR_3, (VAR_6.div_high << 16) | (VAR_6.div_low & 0xffff),
     VAR_0);
 FUNC_8(&VAR_3->lock, VAR_9);

 FUNC_1(VAR_3->pclk);

 VAR_7 = FUNC_4(((u64)VAR_6.div_low + 1) * 8 * 1000000000, VAR_4);
 VAR_8 = FUNC_4(((u64)VAR_6.div_high + 1) * 8 * 1000000000,
       VAR_4);
 FUNC_3(VAR_3->dev,
  "CLK %lukhz, Req %uns, Act low %lluns high %lluns\n",
  VAR_4 / 1000,
  1000000000 / VAR_5->bus_freq_hz,
  VAR_7, VAR_8);
}
