
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i2c_msg {int len; int flags; int addr; int * buf; } ;
struct i2c_adapter {int dummy; } ;
struct brcmstb_i2c_dev {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct brcmstb_i2c_dev*,struct i2c_msg*) ;
 int FUNC_1 (struct brcmstb_i2c_dev*) ;
 int FUNC_2 (struct brcmstb_i2c_dev*,int *,int,struct i2c_msg*) ;
 int FUNC_3 (struct brcmstb_i2c_dev*,int) ;
 int FUNC_4 (int ,char*,int,int,int,...) ;
 struct brcmstb_i2c_dev* FUNC_5 (struct i2c_adapter*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_5,
       struct i2c_msg VAR_6[], int VAR_7)
{
 struct brcmstb_i2c_dev *VAR_8 = FUNC_5(VAR_5);
 struct i2c_msg *VAR_9;
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;
 u8 *VAR_13;
 int VAR_14 = 0;
 int VAR_15 = FUNC_1(VAR_8);
 u32 VAR_16, VAR_17;


 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  VAR_9 = &VAR_6[VAR_11];
  VAR_14 = VAR_9->len;
  VAR_13 = VAR_9->buf;

  FUNC_4(VAR_8->device,
   "msg# %d/%d flg %x buf %x len %d\n", VAR_11,
   VAR_7 - 1, VAR_9->flags,
   VAR_9->buf ? VAR_9->buf[0] : '0', VAR_9->len);

  if (VAR_11 < (VAR_7 - 1) && (VAR_6[VAR_11 + 1].flags & VAR_4))
   VAR_16 = ~VAR_3;
  else
   VAR_16 = VAR_2 | VAR_1;

  FUNC_3(VAR_8, VAR_16);


  if (!(VAR_9->flags & VAR_4)) {
   VAR_10 = FUNC_0(VAR_8, VAR_9);
   if (VAR_10 < 0) {
    FUNC_4(VAR_8->device,
     "NACK for addr %2.2x msg#%d rc = %d\n",
     VAR_9->addr, VAR_11, VAR_10);
    goto out;
   }
  }

  VAR_17 = VAR_16;


  while (VAR_14) {
   VAR_12 = FUNC_6(VAR_14, VAR_15);

   if (VAR_14 <= VAR_15) {
    if (VAR_11 == (VAR_7 - 1))
     VAR_17 = VAR_17 &
      ~(VAR_2 | VAR_1);
    else
     VAR_17 = VAR_16;
   } else {
    VAR_17 = (VAR_17 & ~VAR_2) |
     VAR_1;
   }

   FUNC_3(VAR_8, VAR_17);

   VAR_10 = FUNC_2(VAR_8, VAR_13,
             VAR_12, VAR_9);
   if (VAR_10 < 0)
    goto out;

   VAR_14 -= VAR_12;
   VAR_13 += VAR_12;

   VAR_17 = VAR_0 | VAR_1;
  }
 }

 VAR_10 = VAR_7;
out:
 return VAR_10;

}
