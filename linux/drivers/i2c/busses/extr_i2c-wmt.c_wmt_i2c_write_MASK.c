
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wmt_i2c_dev {scalar_t__ mode; scalar_t__ base; int dev; int complete; } ;
struct i2c_msg {int flags; int len; int* buf; int addr; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,char*) ;
 struct wmt_i2c_dev* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (int *,int ) ;
 int FUNC_6 (struct wmt_i2c_dev*) ;
 int FUNC_7 (struct wmt_i2c_dev*) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct i2c_adapter *VAR_17, struct i2c_msg *VAR_18,
    int VAR_19)
{
 struct wmt_i2c_dev *VAR_20 = FUNC_1(VAR_17);
 u16 VAR_21, VAR_22;
 int VAR_23;
 unsigned long VAR_24;
 int VAR_25 = 0;

 if (!(VAR_18->flags & VAR_8)) {
  VAR_23 = FUNC_7(VAR_20);
  if (VAR_23 < 0)
   return VAR_23;
 }

 if (VAR_18->len == 0) {




  VAR_25 = -1;
  FUNC_8(0, VAR_20->base + VAR_9);
 } else {
  FUNC_8(VAR_18->buf[0] & 0xFF, VAR_20->base + VAR_9);
 }

 if (!(VAR_18->flags & VAR_8)) {
  VAR_21 = FUNC_3(VAR_20->base + VAR_10);
  VAR_21 &= ~VAR_2;
  FUNC_8(VAR_21, VAR_20->base + VAR_10);

  VAR_21 = FUNC_3(VAR_20->base + VAR_10);
  VAR_21 |= VAR_0;
  FUNC_8(VAR_21, VAR_20->base + VAR_10);
 }

 FUNC_4(&VAR_20->complete);

 if (VAR_20->mode == VAR_7)
  VAR_22 = VAR_16;
 else
  VAR_22 = VAR_13;

 VAR_22 |= (VAR_14 | (VAR_18->addr & VAR_15));

 FUNC_8(VAR_22, VAR_20->base + VAR_12);

 if (VAR_18->flags & VAR_8) {
  VAR_21 = FUNC_3(VAR_20->base + VAR_10);
  VAR_21 |= VAR_0;
  FUNC_8(VAR_21, VAR_20->base + VAR_10);
 }

 while (VAR_25 < VAR_18->len) {
  VAR_24 = FUNC_5(&VAR_20->complete,
       FUNC_2(500));

  if (VAR_24 == 0)
   return -VAR_6;

  VAR_23 = FUNC_6(VAR_20);
  if (VAR_23)
   return VAR_23;

  VAR_25++;

  VAR_21 = FUNC_3(VAR_20->base + VAR_11);
  if ((VAR_21 & VAR_3) == VAR_4) {
   FUNC_0(VAR_20->dev, "write RCV NACK error\n");
   return -VAR_5;
  }

  if (VAR_18->len == 0) {
   VAR_21 = VAR_2 | VAR_0 | VAR_1;
   FUNC_8(VAR_21, VAR_20->base + VAR_10);
   break;
  }

  if (VAR_25 == VAR_18->len) {
   if (VAR_19 != 1)
    FUNC_8(VAR_1, VAR_20->base + VAR_10);
  } else {
   FUNC_8(VAR_18->buf[VAR_25] & 0xFF, VAR_20->base +
        VAR_9);
   FUNC_8(VAR_0 | VAR_1, VAR_20->base + VAR_10);
  }
 }

 return 0;
}
