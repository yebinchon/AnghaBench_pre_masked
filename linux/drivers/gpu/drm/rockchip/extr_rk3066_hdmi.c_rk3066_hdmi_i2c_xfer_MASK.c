
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk3066_hdmi_i2c {int i2c_lock; scalar_t__ stat; } ;
struct rk3066_hdmi {int dev; struct rk3066_hdmi_i2c* i2c; } ;
struct i2c_msg {int flags; int len; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (int ,char*,int,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rk3066_hdmi*,int ,int ,int ) ;
 struct rk3066_hdmi* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rk3066_hdmi*) ;
 int FUNC_6 (struct rk3066_hdmi*,struct i2c_msg*) ;
 int FUNC_7 (struct rk3066_hdmi*,struct i2c_msg*) ;

__attribute__((used)) static int FUNC_8(struct i2c_adapter *VAR_3,
    struct i2c_msg *VAR_4, int VAR_5)
{
 struct rk3066_hdmi *VAR_6 = FUNC_2(VAR_3);
 struct rk3066_hdmi_i2c *VAR_7 = VAR_6->i2c;
 int VAR_8, VAR_9 = 0;

 FUNC_3(&VAR_7->i2c_lock);

 FUNC_5(VAR_6);


 FUNC_1(VAR_6, VAR_1,
    VAR_0, VAR_0);
 VAR_7->stat = 0;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  FUNC_0(VAR_6->dev,
         "xfer: num: %d/%d, len: %d, flags: %#x\n",
         VAR_8 + 1, VAR_5, VAR_4[VAR_8].len, VAR_4[VAR_8].flags);

  if (VAR_4[VAR_8].flags & VAR_2)
   VAR_9 = FUNC_6(VAR_6, &VAR_4[VAR_8]);
  else
   VAR_9 = FUNC_7(VAR_6, &VAR_4[VAR_8]);

  if (VAR_9 < 0)
   break;
 }

 if (!VAR_9)
  VAR_9 = VAR_5;


 FUNC_1(VAR_6, VAR_1, VAR_0, 0);

 FUNC_4(&VAR_7->i2c_lock);

 return VAR_9;
}
