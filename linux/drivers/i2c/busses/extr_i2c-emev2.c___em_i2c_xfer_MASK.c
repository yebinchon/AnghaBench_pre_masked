
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int len; int * buf; } ;
struct i2c_adapter {int dummy; } ;
struct em_i2c_device {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct em_i2c_device*,int,int,int ) ;
 int FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (struct em_i2c_device*) ;
 int FUNC_3 (struct em_i2c_device*) ;
 int FUNC_4 (struct i2c_msg*) ;
 struct em_i2c_device* FUNC_5 (struct i2c_adapter*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct i2c_adapter *VAR_9, struct i2c_msg *VAR_10,
    int VAR_11)
{
 struct em_i2c_device *VAR_12 = FUNC_5(VAR_9);
 int VAR_13, VAR_14, VAR_15 = !!(VAR_10->flags & VAR_6);


 FUNC_0(VAR_12, 0, VAR_2 | VAR_5, VAR_8);
 FUNC_0(VAR_12, 0, VAR_3, VAR_8);


 FUNC_7(FUNC_4(VAR_10), VAR_12->base + VAR_7);


 VAR_14 = FUNC_3(VAR_12);
 if (VAR_14 < 0)
  goto out_reset;


 if (!(VAR_14 & VAR_1)) {
  FUNC_2(VAR_12);
  goto out;
 }


 if (VAR_15) {

  FUNC_0(VAR_12, VAR_5, VAR_2, VAR_8);
  FUNC_0(VAR_12, VAR_5, VAR_4, VAR_8);


  VAR_14 = FUNC_3(VAR_12);
  if (VAR_14 < 0)
   goto out_reset;
 }


 for (VAR_13 = 0; VAR_13 < VAR_10->len; VAR_13++) {
  if (VAR_15) {
   VAR_10->buf[VAR_13] = FUNC_6(VAR_12->base + VAR_7);
   FUNC_0(VAR_12, 0, VAR_4, VAR_8);

  } else {

   if (!(VAR_14 & VAR_1)) {
    FUNC_2(VAR_12);
    goto out;
   }


   FUNC_7(VAR_10->buf[VAR_13], VAR_12->base + VAR_7);
  }


  VAR_14 = FUNC_3(VAR_12);
  if (VAR_14 < 0)
   goto out_reset;
 }

 if (VAR_11)
  FUNC_2(VAR_12);

 return VAR_13;

out_reset:
 FUNC_1(VAR_9);
out:
 return VAR_14 < 0 ? VAR_14 : -VAR_0;
}
