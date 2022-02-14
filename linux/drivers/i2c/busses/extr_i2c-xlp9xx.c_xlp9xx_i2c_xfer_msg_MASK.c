
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlp9xx_i2c_dev {int msg_buf_remaining; int msg_len; int msg_err; int msg_read; int len_recv; int client_pec; int dev; int msg_complete; int msg_buf; } ;
struct i2c_msg {int len; int flags; int addr; int buf; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (int ,char*,...) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct xlp9xx_i2c_dev*) ;
 int FUNC_5 (struct xlp9xx_i2c_dev*) ;
 int FUNC_6 (struct xlp9xx_i2c_dev*,int) ;
 int FUNC_7 (struct xlp9xx_i2c_dev*) ;
 int FUNC_8 (struct xlp9xx_i2c_dev*,int ) ;
 int FUNC_9 (struct xlp9xx_i2c_dev*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct xlp9xx_i2c_dev *VAR_32, struct i2c_msg *VAR_33,
          int VAR_34)
{
 unsigned long VAR_35;
 u32 VAR_36, VAR_37, VAR_38, VAR_39;

 VAR_32->msg_buf = VAR_33->buf;
 VAR_32->msg_buf_remaining = VAR_32->msg_len = VAR_33->len;
 VAR_32->msg_err = 0;
 VAR_32->msg_read = (VAR_33->flags & VAR_5);
 FUNC_2(&VAR_32->msg_complete);


 FUNC_9(VAR_32, VAR_26,
        VAR_27);


 FUNC_9(VAR_32, VAR_28,
        (VAR_33->addr << VAR_29) |
        (VAR_32->msg_read ? VAR_30 : 0));


 VAR_38 = FUNC_8(VAR_32, VAR_14);
 if (!VAR_32->msg_read)
  VAR_38 &= ~VAR_16;
 else
  VAR_38 |= VAR_16;

 if (VAR_33->flags & VAR_7)
  VAR_38 |= VAR_15;
 else
  VAR_38 &= ~VAR_15;

 VAR_32->len_recv = VAR_33->flags & VAR_6;
 VAR_39 = VAR_32->len_recv ? VAR_8 + 2 : VAR_33->len;
 VAR_32->client_pec = VAR_33->flags & VAR_4;


 if (VAR_32->msg_read)
  FUNC_7(VAR_32);


 VAR_38 = (VAR_38 & ~VAR_17) |
       (VAR_39 << VAR_18);
 FUNC_9(VAR_32, VAR_14, VAR_38);


 if (!VAR_32->msg_read)
  FUNC_4(VAR_32);


 VAR_36 = (VAR_19 | VAR_20 |
       VAR_24 | VAR_21);

 if (VAR_32->msg_read) {
  VAR_36 |= VAR_23;
  if (VAR_33->len == 0)
   VAR_36 |= VAR_25;
 } else {
  if (VAR_33->len == 0)
   VAR_36 |= VAR_25;
  else
   VAR_36 |= VAR_22;
 }
 FUNC_6(VAR_32, VAR_36);


 VAR_37 = VAR_11;
 if (VAR_33->len)
  VAR_37 |= (VAR_32->msg_read ?
   VAR_10 : VAR_13);
 if (VAR_34)
  VAR_37 |= VAR_12;

 FUNC_9(VAR_32, VAR_9, VAR_37);

 VAR_35 = FUNC_1(VAR_31);
 VAR_35 = FUNC_3(&VAR_32->msg_complete, VAR_35);

 if (VAR_32->msg_err & VAR_20) {
  FUNC_0(VAR_32->dev, "transfer error %x!\n", VAR_32->msg_err);
  FUNC_9(VAR_32, VAR_9, VAR_12);
  return -VAR_0;
 } else if (VAR_32->msg_err & VAR_24) {
  return -VAR_1;
 }

 if (VAR_35 == 0) {
  FUNC_0(VAR_32->dev, "i2c transfer timed out!\n");
  FUNC_5(VAR_32);
  return -VAR_3;
 }


 if (VAR_33->flags & VAR_6) {
  if (!VAR_32->msg_len)
   return -VAR_2;
  VAR_33->len = VAR_32->msg_len;
 }
 return 0;
}
