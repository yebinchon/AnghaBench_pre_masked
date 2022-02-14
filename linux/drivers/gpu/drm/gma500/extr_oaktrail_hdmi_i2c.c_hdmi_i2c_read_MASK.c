
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct oaktrail_hdmi_dev {struct hdmi_i2c_dev* i2c_dev; } ;
struct i2c_msg {int * buf; } ;
struct hdmi_i2c_dev {int buf_offset; int status; struct i2c_msg* msg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int*,int) ;

__attribute__((used)) static void FUNC_3(struct oaktrail_hdmi_dev *VAR_6)
{
 struct hdmi_i2c_dev *VAR_7 = VAR_6->i2c_dev;
 struct i2c_msg *VAR_8 = VAR_7->msg;
 u8 *VAR_9 = VAR_8->buf;
 u32 VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = VAR_7->buf_offset;
 for (VAR_11 = 0; VAR_11 < 0x10; VAR_11++) {
  VAR_10 = FUNC_0(VAR_1 + (VAR_11 * 4));
  FUNC_2(VAR_9 + (VAR_12 + VAR_11 * 4), &VAR_10, 4);
 }
 VAR_7->buf_offset += (0x10 * 4);


 VAR_10 = FUNC_0(VAR_2);
 FUNC_1(VAR_2, VAR_10 | VAR_3);
 FUNC_0(VAR_2);


 VAR_10 = FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_10 | VAR_4);
 FUNC_0(VAR_0);

 VAR_7->status = VAR_5;
 return;
}
