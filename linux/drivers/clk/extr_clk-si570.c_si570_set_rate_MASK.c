
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct clk_si570 {unsigned long max_freq; unsigned long frequency; struct i2c_client* i2c_client; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 long long FUNC_0 (unsigned long) ;
 int FUNC_1 (int *,char*,unsigned long) ;
 int FUNC_2 (long long,unsigned long) ;
 int FUNC_3 (struct clk_si570*,unsigned long) ;
 int FUNC_4 (struct clk_si570*,unsigned long) ;
 struct clk_si570* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_2, unsigned long VAR_3,
  unsigned long VAR_4)
{
 struct clk_si570 *VAR_5 = FUNC_5(VAR_2);
 struct i2c_client *VAR_6 = VAR_5->i2c_client;
 int VAR_7;

 if (VAR_3 < VAR_1 || VAR_3 > VAR_5->max_freq) {
  FUNC_1(&VAR_6->dev,
   "requested frequency %lu Hz is out of range\n", VAR_3);
  return -VAR_0;
 }

 if (FUNC_2(FUNC_0(VAR_3 - VAR_5->frequency) * 10000LL,
    VAR_5->frequency) < 35)
  VAR_7 = FUNC_4(VAR_5, VAR_3);
 else
  VAR_7 = FUNC_3(VAR_5, VAR_3);

 if (VAR_7)
  return VAR_7;

 VAR_5->frequency = VAR_3;

 return 0;
}
