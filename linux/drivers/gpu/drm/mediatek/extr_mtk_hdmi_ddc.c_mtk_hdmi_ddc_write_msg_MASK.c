
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct mtk_hdmi_ddc {TYPE_2__ adap; } ;
struct i2c_msg {int addr; int* buf; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct mtk_hdmi_ddc*,int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct mtk_hdmi_ddc*,int ,int ,int ) ;
 int FUNC_4 (struct mtk_hdmi_ddc*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct mtk_hdmi_ddc *VAR_11, struct i2c_msg *VAR_12)
{
 struct device *VAR_13 = VAR_11->adap.dev.parent;
 u32 VAR_14;

 FUNC_0(VAR_11, VAR_6);
 FUNC_4(VAR_11, VAR_9, VAR_2, 0, VAR_12->addr << 1);
 FUNC_4(VAR_11, VAR_9, VAR_3, 8, VAR_12->buf[0]);
 FUNC_4(VAR_11, VAR_8, VAR_4, VAR_5,
         0x1);
 FUNC_0(VAR_11, VAR_7);

 VAR_14 = FUNC_3(VAR_11, VAR_8, VAR_0, VAR_1);
 FUNC_1(VAR_13, "ack = %d\n", VAR_14);

 if (VAR_14 != 0x03) {
  FUNC_2(VAR_13, "i2c ack err!\n");
  return -VAR_10;
 }

 return 0;
}
