
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inno_hdmi_i2c {int lock; } ;
struct inno_hdmi {int dev; struct inno_hdmi_i2c* i2c; } ;
struct i2c_msg {int flags; int len; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (int ,char*,int,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inno_hdmi*,int ,int ) ;
 struct inno_hdmi* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct inno_hdmi*,struct i2c_msg*) ;
 int FUNC_4 (struct inno_hdmi*,struct i2c_msg*) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_4,
         struct i2c_msg *VAR_5, int VAR_6)
{
 struct inno_hdmi *VAR_7 = FUNC_2(VAR_4);
 struct inno_hdmi_i2c *VAR_8 = VAR_7->i2c;
 int VAR_9, VAR_10 = 0;

 FUNC_5(&VAR_8->lock);


 FUNC_1(VAR_7, VAR_0, VAR_3);
 FUNC_1(VAR_7, VAR_1, VAR_3);

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  FUNC_0(VAR_7->dev,
         "xfer: num: %d/%d, len: %d, flags: %#x\n",
         VAR_9 + 1, VAR_6, VAR_5[VAR_9].len, VAR_5[VAR_9].flags);

  if (VAR_5[VAR_9].flags & VAR_2)
   VAR_10 = FUNC_3(VAR_7, &VAR_5[VAR_9]);
  else
   VAR_10 = FUNC_4(VAR_7, &VAR_5[VAR_9]);

  if (VAR_10 < 0)
   break;
 }

 if (!VAR_10)
  VAR_10 = VAR_6;


 FUNC_1(VAR_7, VAR_0, 0);

 FUNC_6(&VAR_8->lock);

 return VAR_10;
}
