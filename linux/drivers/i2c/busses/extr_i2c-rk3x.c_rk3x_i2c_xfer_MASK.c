
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rk3x_i2c {int is_last_msg; int error; int lock; int clk; int pclk; int state; int dev; int busy; int wait; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {scalar_t__ algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct rk3x_i2c*,int ) ;
 int FUNC_4 (struct rk3x_i2c*,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rk3x_i2c*,struct i2c_msg*,int) ;
 int FUNC_7 (struct rk3x_i2c*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 unsigned long FUNC_10 (int ,int,int ) ;

__attribute__((used)) static int FUNC_11(struct i2c_adapter *VAR_9,
    struct i2c_msg *VAR_10, int VAR_11)
{
 struct rk3x_i2c *VAR_12 = (struct rk3x_i2c *)VAR_9->algo_data;
 unsigned long VAR_13, VAR_14;
 u32 VAR_15;
 int VAR_16 = 0;
 int VAR_17;

 FUNC_8(&VAR_12->lock, VAR_14);

 FUNC_1(VAR_12->clk);
 FUNC_1(VAR_12->pclk);

 VAR_12->is_last_msg = 0;





 for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17 += VAR_16) {
  VAR_16 = FUNC_6(VAR_12, VAR_10 + VAR_17, VAR_11 - VAR_17);

  if (VAR_16 < 0) {
   FUNC_2(VAR_12->dev, "rk3x_i2c_setup() failed\n");
   break;
  }

  if (VAR_17 + VAR_16 >= VAR_11)
   VAR_12->is_last_msg = 1;

  FUNC_9(&VAR_12->lock, VAR_14);

  FUNC_7(VAR_12);

  VAR_13 = FUNC_10(VAR_12->wait, !VAR_12->busy,
          FUNC_5(VAR_8));

  FUNC_8(&VAR_12->lock, VAR_14);

  if (VAR_13 == 0) {
   FUNC_2(VAR_12->dev, "timeout, ipd: 0x%02x, state: %d\n",
    FUNC_3(VAR_12, VAR_6), VAR_12->state);


   FUNC_4(VAR_12, 0, VAR_5);
   VAR_15 = FUNC_3(VAR_12, VAR_1) & VAR_4;
   VAR_15 |= VAR_2 | VAR_3;
   FUNC_4(VAR_12, VAR_15, VAR_1);

   VAR_12->state = VAR_7;

   VAR_16 = -VAR_0;
   break;
  }

  if (VAR_12->error) {
   VAR_16 = VAR_12->error;
   break;
  }
 }

 FUNC_0(VAR_12->pclk);
 FUNC_0(VAR_12->clk);

 FUNC_9(&VAR_12->lock, VAR_14);

 return VAR_16 < 0 ? VAR_16 : VAR_11;
}
