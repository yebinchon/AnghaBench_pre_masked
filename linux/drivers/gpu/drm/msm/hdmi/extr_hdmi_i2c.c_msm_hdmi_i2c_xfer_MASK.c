
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct i2c_msg {int addr; int flags; int len; int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct hdmi_i2c_adapter {int ddc_event; struct hdmi* hdmi; } ;
struct hdmi {struct drm_device* dev; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int (*) (int)) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_5 ;




 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct hdmi_i2c_adapter*) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (struct hdmi*,int ) ;
 int FUNC_13 (struct hdmi*,int ,int) ;
 int FUNC_14 (struct hdmi_i2c_adapter*) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (struct hdmi_i2c_adapter*) ;
 struct hdmi_i2c_adapter* FUNC_17 (struct i2c_adapter*) ;
 int FUNC_18 (int ,int ,int) ;

__attribute__((used)) static int FUNC_19(struct i2c_adapter *VAR_17,
  struct i2c_msg *VAR_18, int VAR_19)
{
 struct hdmi_i2c_adapter *VAR_20 = FUNC_17(VAR_17);
 struct hdmi *VAR_21 = VAR_20->hdmi;
 struct drm_device *VAR_22 = VAR_21->dev;
 static const uint32_t VAR_23[] = {
   131, 130,
   129, 128,
 };
 int VAR_24[VAR_10];
 int VAR_25, VAR_26, VAR_27, VAR_28 = 0;
 uint32_t VAR_29, VAR_30, VAR_31;

 VAR_19 = FUNC_15(VAR_19, VAR_10);

 FUNC_9(!(FUNC_12(VAR_21, VAR_11) & VAR_3));

 if (VAR_19 == 0)
  return VAR_19;

 FUNC_14(VAR_20);

 VAR_25 = FUNC_10(VAR_20);
 if (VAR_25)
  return VAR_25;

 for (VAR_26 = 0; VAR_26 < VAR_19; VAR_26++) {
  struct i2c_msg *VAR_32 = &VAR_18[VAR_26];
  uint32_t VAR_33 = VAR_32->addr << 1;

  if (VAR_32->flags & VAR_9)
   VAR_33 |= 1;

  VAR_30 = FUNC_3(VAR_33) |
    FUNC_4(VAR_1);

  if (VAR_26 == 0) {
   VAR_30 |= FUNC_5(0) |
     VAR_5;
  }

  FUNC_13(VAR_21, VAR_13, VAR_30);
  VAR_28++;

  VAR_24[VAR_26] = VAR_28;

  if (VAR_32->flags & VAR_9) {
   VAR_28 += VAR_32->len;
  } else {
   for (VAR_27 = 0; VAR_27 < VAR_32->len; VAR_27++) {
    VAR_30 = FUNC_3(VAR_32->buf[VAR_27]) |
      FUNC_4(VAR_1);
    FUNC_13(VAR_21, VAR_13, VAR_30);
    VAR_28++;
   }
  }

  VAR_31 = FUNC_6(VAR_32->len) |
    FUNC_7(
      (VAR_32->flags & VAR_9) ? VAR_0 : VAR_1) |
    VAR_6;

  if (VAR_26 == (VAR_19 - 1))
   VAR_31 |= VAR_7;

  FUNC_13(VAR_21, FUNC_8(VAR_26), VAR_31);
 }


 FUNC_13(VAR_21, VAR_12,
   FUNC_2(VAR_19 - 1) |
   VAR_4);

 VAR_25 = FUNC_18(VAR_20->ddc_event, FUNC_16(VAR_20), VAR_8/4);
 if (VAR_25 <= 0) {
  if (VAR_25 == 0)
   VAR_25 = -VAR_2;
  FUNC_11(VAR_22->dev, "DDC timeout: %d\n", VAR_25);
  FUNC_0("sw_status=%08x, hw_status=%08x, int_ctrl=%08x",
    FUNC_12(VAR_21, VAR_16),
    FUNC_12(VAR_21, VAR_14),
    FUNC_12(VAR_21, VAR_15));
  return VAR_25;
 }

 VAR_29 = FUNC_12(VAR_21, VAR_16);


 for (VAR_26 = 0; VAR_26 < VAR_19; VAR_26++) {
  struct i2c_msg *VAR_34 = &VAR_18[VAR_26];

  if (!(VAR_34->flags & VAR_9))
   continue;


  if (VAR_29 & VAR_23[VAR_26]) {
   FUNC_0("ddc_status=%08x", VAR_29);
   break;
  }

  VAR_30 = FUNC_4(VAR_0) |
    FUNC_5(VAR_24[VAR_26]) |
    VAR_5;

  FUNC_13(VAR_21, VAR_13, VAR_30);


  FUNC_12(VAR_21, VAR_13);

  for (VAR_27 = 0; VAR_27 < VAR_34->len; VAR_27++) {
   VAR_30 = FUNC_12(VAR_21, VAR_13);
   VAR_34->buf[VAR_27] = FUNC_1(VAR_30, FUNC_3);
  }
 }

 return VAR_26;
}
