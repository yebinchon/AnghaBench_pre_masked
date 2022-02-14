
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oaktrail_hdmi_dev {struct hdmi_i2c_dev* i2c_dev; } ;
struct i2c_msg {int flags; scalar_t__ buf; scalar_t__ len; } ;
struct i2c_adapter {int dummy; } ;
struct hdmi_i2c_dev {int i2c_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct oaktrail_hdmi_dev*) ;
 int FUNC_2 (struct oaktrail_hdmi_dev*) ;
 struct oaktrail_hdmi_dev* FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct i2c_adapter*,struct i2c_msg*) ;
 int FUNC_7 (struct i2c_adapter*,struct i2c_msg*) ;

__attribute__((used)) static int FUNC_8(struct i2c_adapter *VAR_2,
    struct i2c_msg *VAR_3,
    int VAR_4)
{
 struct oaktrail_hdmi_dev *VAR_5 = FUNC_3(VAR_2);
 struct hdmi_i2c_dev *VAR_6 = VAR_5->i2c_dev;
 int VAR_7;

 FUNC_4(&VAR_6->i2c_lock);


 FUNC_0(VAR_0, 0x00008760);


 FUNC_2(VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  if (VAR_3->len && VAR_3->buf) {
   if (VAR_3->flags & VAR_1)
    FUNC_6(VAR_2, VAR_3);
   else
    FUNC_7(VAR_2, VAR_3);
  }
  VAR_3++;
 }


 FUNC_1(VAR_5);

 FUNC_5(&VAR_6->i2c_lock);

 return VAR_7;
}
