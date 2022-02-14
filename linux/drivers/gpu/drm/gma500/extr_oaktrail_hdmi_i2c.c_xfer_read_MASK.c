
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct oaktrail_hdmi_dev {struct hdmi_i2c_dev* i2c_dev; } ;
struct i2c_msg {int len; } ;
struct i2c_adapter {int dummy; } ;
struct hdmi_i2c_dev {scalar_t__ status; int complete; scalar_t__ buf_offset; struct i2c_msg* msg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct oaktrail_hdmi_dev* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_6, struct i2c_msg *VAR_7)
{
 struct oaktrail_hdmi_dev *VAR_8 = FUNC_2(VAR_6);
 struct hdmi_i2c_dev *VAR_9 = VAR_8->i2c_dev;
 u32 VAR_10;

 VAR_9->status = VAR_4;
 VAR_9->msg = VAR_7;
 VAR_9->buf_offset = 0;
 FUNC_3(&VAR_9->complete);


 VAR_10 = ((VAR_7->len) << 20) | VAR_1 | VAR_2;
 FUNC_1(VAR_0, VAR_10);
 FUNC_0(VAR_0);

 while (VAR_9->status != VAR_5)
  FUNC_4(&VAR_9->complete,
        10 * VAR_3);

 return 0;
}
