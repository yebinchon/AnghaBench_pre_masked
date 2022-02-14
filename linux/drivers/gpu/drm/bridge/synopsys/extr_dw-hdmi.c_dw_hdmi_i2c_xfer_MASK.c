
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int addr; int len; int flags; int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct dw_hdmi_i2c {int is_regaddr; int is_segment; int lock; } ;
struct dw_hdmi {int dev; struct dw_hdmi_i2c* i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (struct dw_hdmi*,int*,int) ;
 int FUNC_2 (struct dw_hdmi*,int*,int) ;
 int FUNC_3 (struct dw_hdmi*,int,int ) ;
 struct dw_hdmi* FUNC_4 (struct i2c_adapter*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_9,
       struct i2c_msg *VAR_10, int VAR_11)
{
 struct dw_hdmi *VAR_12 = FUNC_4(VAR_9);
 struct dw_hdmi_i2c *VAR_13 = VAR_12->i2c;
 u8 VAR_14 = VAR_10[0].addr;
 int VAR_15, VAR_16 = 0;

 FUNC_0(VAR_12->dev, "xfer: num: %d, addr: %#x\n", VAR_11, VAR_14);

 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
  if (VAR_10[VAR_15].len == 0) {
   FUNC_0(VAR_12->dev,
    "unsupported transfer %d/%d, no data\n",
    VAR_15 + 1, VAR_11);
   return -VAR_1;
  }
 }

 FUNC_5(&VAR_13->lock);


 FUNC_3(VAR_12, 0x00, VAR_7);


 FUNC_3(VAR_12, VAR_14, VAR_4);


 VAR_13->is_regaddr = 0;


 VAR_13->is_segment = 0;

 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
  FUNC_0(VAR_12->dev, "xfer: num: %d/%d, len: %d, flags: %#x\n",
   VAR_15 + 1, VAR_11, VAR_10[VAR_15].len, VAR_10[VAR_15].flags);
  if (VAR_10[VAR_15].addr == VAR_0 && VAR_10[VAR_15].len == 1) {
   VAR_13->is_segment = 1;
   FUNC_3(VAR_12, VAR_0, VAR_2);
   FUNC_3(VAR_12, *VAR_10[VAR_15].buf, VAR_3);
  } else {
   if (VAR_10[VAR_15].flags & VAR_8)
    VAR_16 = FUNC_1(VAR_12, VAR_10[VAR_15].buf,
             VAR_10[VAR_15].len);
   else
    VAR_16 = FUNC_2(VAR_12, VAR_10[VAR_15].buf,
       VAR_10[VAR_15].len);
  }
  if (VAR_16 < 0)
   break;
 }

 if (!VAR_16)
  VAR_16 = VAR_11;


 FUNC_3(VAR_12, VAR_6 | VAR_5,
      VAR_7);

 FUNC_6(&VAR_13->lock);

 return VAR_16;
}
