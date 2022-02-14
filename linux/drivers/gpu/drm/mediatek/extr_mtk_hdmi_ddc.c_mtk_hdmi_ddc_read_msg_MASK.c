
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
struct i2c_msg {int addr; int len; void** buf; } ;
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
 int FUNC_0 (struct mtk_hdmi_ddc*,int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,...) ;
 void* FUNC_3 (struct mtk_hdmi_ddc*,int,int,int) ;
 int FUNC_4 (struct mtk_hdmi_ddc*,int,int,int ,int) ;

__attribute__((used)) static int FUNC_5(struct mtk_hdmi_ddc *VAR_12, struct i2c_msg *VAR_13)
{
 struct device *VAR_14 = VAR_12->adap.dev.parent;
 u32 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 u32 VAR_20 = 0;
 u32 VAR_21;
 int VAR_22;

 FUNC_0(VAR_12, VAR_6);
 FUNC_4(VAR_12, VAR_9, 0xff, 0, (VAR_13->addr << 1) | 0x01);
 FUNC_4(VAR_12, VAR_8, VAR_2, VAR_3,
         0x00);
 FUNC_0(VAR_12, VAR_7);
 VAR_21 = FUNC_3(VAR_12, VAR_8, VAR_0, VAR_1);
 FUNC_1(VAR_14, "ack = 0x%x\n", VAR_21);
 if (VAR_21 != 0x01) {
  FUNC_2(VAR_14, "i2c ack err!\n");
  return -VAR_11;
 }

 VAR_15 = VAR_13->len;
 VAR_16 = (VAR_13->len - 1) / 8;
 VAR_17 = 0;

 while (VAR_15 > 0) {
  if (VAR_16 > 0) {
   VAR_18 = 8;
   VAR_17 = 0;
   VAR_16--;
  } else {
   VAR_18 = VAR_15;
   VAR_17 = 1;
  }

  FUNC_4(VAR_12, VAR_8, VAR_2,
          VAR_3, VAR_18 - 1);
  FUNC_0(VAR_12, (VAR_17 == 1) ?
      VAR_5 :
      VAR_4);

  VAR_21 = FUNC_3(VAR_12, VAR_8, VAR_0,
        VAR_1);
  VAR_19 = 0;
  while (((VAR_21 & (1 << VAR_19)) != 0) && (VAR_19 < 8))
   VAR_19++;
  if (((VAR_17 == 1) && (VAR_19 != (VAR_18 - 1))) ||
      ((VAR_17 == 0) && (VAR_19 != VAR_18))) {
   FUNC_2(VAR_14, "Address NACK! ACK(0x%x)\n", VAR_21);
   break;
  }

  for (VAR_22 = VAR_18; VAR_22 >= 1; VAR_22--) {
   int VAR_23;
   int VAR_24;

   if (VAR_22 > 4) {
    VAR_24 = VAR_10;
    VAR_23 = (VAR_22 - 5) * 8;
   } else {
    VAR_24 = VAR_9;
    VAR_23 = (VAR_22 - 1) * 8;
   }

   VAR_13->buf[VAR_20 + VAR_22 - 1] = FUNC_3(VAR_12, VAR_24,
        0xff << VAR_23,
        VAR_23);
  }

  VAR_15 -= VAR_18;
  VAR_20 += VAR_18;
 }

 return 0;
}
