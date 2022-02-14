
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_hdmi_ddc {int dummy; } ;
struct i2c_msg {int flags; int len; int addr; } ;
struct TYPE_2__ {struct device* parent; } ;
struct i2c_adapter {TYPE_1__ dev; struct mtk_hdmi_ddc* algo_data; } ;
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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct mtk_hdmi_ddc*,int ) ;
 int FUNC_1 (struct device*,char*,int ,int,int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct mtk_hdmi_ddc*,struct i2c_msg*) ;
 int FUNC_4 (struct mtk_hdmi_ddc*,struct i2c_msg*) ;
 scalar_t__ FUNC_5 (struct mtk_hdmi_ddc*,int ,int ) ;
 int FUNC_6 (struct mtk_hdmi_ddc*,int ,int ) ;
 int FUNC_7 (struct mtk_hdmi_ddc*,int ,int ) ;
 int FUNC_8 (struct mtk_hdmi_ddc*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct i2c_adapter *VAR_13,
        struct i2c_msg *VAR_14, int VAR_15)
{
 struct mtk_hdmi_ddc *VAR_16 = VAR_13->algo_data;
 struct device *VAR_17 = VAR_13->dev.parent;
 int VAR_18;
 int VAR_19;

 if (!VAR_16) {
  FUNC_2(VAR_17, "invalid arguments\n");
  return -VAR_10;
 }

 FUNC_7(VAR_16, VAR_7, VAR_3);
 FUNC_7(VAR_16, VAR_7, VAR_4);
 FUNC_6(VAR_16, VAR_7, VAR_2);

 if (FUNC_5(VAR_16, VAR_8, VAR_6)) {
  FUNC_2(VAR_17, "ddc line is busy!\n");
  return -VAR_9;
 }

 FUNC_8(VAR_16, VAR_7, VAR_0,
         VAR_1, VAR_12);

 for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19++) {
  struct i2c_msg *VAR_20 = &VAR_14[VAR_19];

  FUNC_1(VAR_17, "i2c msg, adr:0x%x, flags:%d, len :0x%x\n",
   VAR_20->addr, VAR_20->flags, VAR_20->len);

  if (VAR_20->flags & VAR_11)
   VAR_18 = FUNC_3(VAR_16, VAR_20);
  else
   VAR_18 = FUNC_4(VAR_16, VAR_20);
  if (VAR_18 < 0)
   goto xfer_end;
 }

 FUNC_0(VAR_16, VAR_5);

 return VAR_19;

xfer_end:
 FUNC_0(VAR_16, VAR_5);
 FUNC_2(VAR_17, "ddc failed!\n");
 return VAR_18;
}
