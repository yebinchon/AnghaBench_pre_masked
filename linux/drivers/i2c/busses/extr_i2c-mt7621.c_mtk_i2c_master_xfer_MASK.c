
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mtk_i2c {scalar_t__ base; } ;
struct i2c_msg {int flags; int addr; int len; int* buf; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct i2c_msg*) ;
 struct mtk_i2c* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (struct mtk_i2c*,int) ;
 int FUNC_7 (struct mtk_i2c*) ;
 int FUNC_8 (struct mtk_i2c*,int,int) ;
 int FUNC_9 (struct mtk_i2c*) ;
 int FUNC_10 (struct mtk_i2c*) ;
 int FUNC_11 (struct mtk_i2c*) ;
 int FUNC_12 (struct mtk_i2c*) ;

__attribute__((used)) static int FUNC_13(struct i2c_adapter *VAR_9, struct i2c_msg *VAR_10,
          int VAR_11)
{
 struct mtk_i2c *VAR_12;
 struct i2c_msg *VAR_13;
 u16 VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 u32 VAR_20;
 u32 VAR_21[2];

 VAR_12 = FUNC_2(VAR_9);

 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
  VAR_13 = &VAR_10[VAR_15];


  VAR_17 = FUNC_12(VAR_12);
  if (VAR_17)
   goto err_timeout;


  VAR_17 = FUNC_9(VAR_12);
  if (VAR_17)
   goto err_timeout;


  if (VAR_13->flags & VAR_3) {

   VAR_14 = 0xf0 | ((VAR_13->addr >> 7) & 0x06);
   VAR_14 |= (VAR_13->addr & 0xff) << 8;
   if (VAR_13->flags & VAR_2)
    VAR_14 |= 1;
   FUNC_4(VAR_14, VAR_12->base + VAR_4);
   VAR_17 = FUNC_8(VAR_12, VAR_8, 2);
   if (VAR_17)
    goto err_timeout;
  } else {

   VAR_14 = FUNC_1(VAR_13);
   FUNC_4(VAR_14, VAR_12->base + VAR_4);
   VAR_17 = FUNC_8(VAR_12, VAR_8, 1);
   if (VAR_17)
    goto err_timeout;
  }


  if (!(VAR_13->flags & VAR_1)) {
   VAR_17 = FUNC_6(VAR_12, FUNC_0(0));
   if (VAR_17)
    goto err_ack;
  }


  for (VAR_18 = VAR_13->len, VAR_16 = 0; VAR_18 > 0; VAR_18 -= 8, VAR_16 += 8) {
   VAR_19 = (VAR_18 >= 8) ? 8 : VAR_18;

   if (VAR_13->flags & VAR_2) {
    VAR_20 = (VAR_18 > 8) ?
     VAR_6 : VAR_7;
   } else {
    FUNC_5(VAR_21, &VAR_13->buf[VAR_16], VAR_19);
    FUNC_4(VAR_21[0], VAR_12->base + VAR_4);
    FUNC_4(VAR_21[1], VAR_12->base + VAR_5);
    VAR_20 = VAR_8;
   }

   VAR_17 = FUNC_8(VAR_12, VAR_20, VAR_19);
   if (VAR_17)
    goto err_timeout;

   if (VAR_13->flags & VAR_2) {
    VAR_21[0] = FUNC_3(VAR_12->base + VAR_4);
    VAR_21[1] = FUNC_3(VAR_12->base + VAR_5);
    FUNC_5(&VAR_13->buf[VAR_16], VAR_21, VAR_19);
   } else {
    if (!(VAR_13->flags & VAR_1)) {
     VAR_17 = FUNC_6(VAR_12,
        (1 << VAR_19)
        - 1);
     if (VAR_17)
      goto err_ack;
    }
   }
  }
 }

 VAR_17 = FUNC_10(VAR_12);
 if (VAR_17)
  goto err_timeout;


 return VAR_15;

err_ack:
 VAR_17 = FUNC_10(VAR_12);
 if (VAR_17)
  goto err_timeout;
 return -VAR_0;

err_timeout:
 FUNC_7(VAR_12);
 FUNC_11(VAR_12);
 return VAR_17;
}
