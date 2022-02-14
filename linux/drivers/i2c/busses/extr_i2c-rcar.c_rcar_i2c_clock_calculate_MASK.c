
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct rcar_i2c_priv {int devtype; unsigned int icccr; int clk; } ;
struct i2c_timings {int bus_freq_hz; int scl_fall_ns; int scl_rise_ns; int scl_int_delay_ns; } ;
struct device {int dummy; } ;


 int VAR_0 ;



 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,unsigned int,unsigned int,unsigned long,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct device* FUNC_3 (struct rcar_i2c_priv*) ;

__attribute__((used)) static int FUNC_4(struct rcar_i2c_priv *VAR_1, struct i2c_timings *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned long VAR_10;
 struct device *VAR_11 = FUNC_3(VAR_1);


 VAR_2->bus_freq_hz = VAR_2->bus_freq_hz ?: 100000;
 VAR_2->scl_fall_ns = VAR_2->scl_fall_ns ?: 35;
 VAR_2->scl_rise_ns = VAR_2->scl_rise_ns ?: 200;
 VAR_2->scl_int_delay_ns = VAR_2->scl_int_delay_ns ?: 50;

 switch (VAR_1->devtype) {
 case 130:
  VAR_9 = 2;
  break;
 case 129:
 case 128:
  VAR_9 = 3;
  break;
 default:
  FUNC_2(VAR_11, "device type error\n");
  return -VAR_0;
 }
 VAR_10 = FUNC_0(VAR_1->clk);
 VAR_4 = VAR_10 / 20000000;
 if (VAR_4 >= 1U << VAR_9) {
  FUNC_2(VAR_11, "Input clock %lu too high\n", VAR_10);
  return -VAR_0;
 }
 VAR_6 = VAR_10 / (VAR_4 + 1);
 VAR_7 = VAR_2->scl_fall_ns + VAR_2->scl_rise_ns + VAR_2->scl_int_delay_ns;
 VAR_5 = (VAR_6 + 500000) / 1000000 * VAR_7;
 VAR_5 = (VAR_5 + 500) / 1000;
 for (VAR_3 = 0; VAR_3 < 0x40; VAR_3++) {
  VAR_8 = VAR_6 / (20 + (VAR_3 * 8) + VAR_5);
  if (VAR_8 <= VAR_2->bus_freq_hz)
   goto scgd_find;
 }
 FUNC_2(VAR_11, "it is impossible to calculate best SCL\n");
 return -VAR_0;

scgd_find:
 FUNC_1(VAR_11, "clk %d/%d(%lu), round %u, CDF:0x%x, SCGD: 0x%x\n",
  VAR_8, VAR_2->bus_freq_hz, FUNC_0(VAR_1->clk), VAR_5, VAR_4, VAR_3);


 VAR_1->icccr = VAR_3 << VAR_9 | VAR_4;

 return 0;
}
