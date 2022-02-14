
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_msg {int flags; int len; scalar_t__* buf; } ;
struct i2c_diolan_u2c {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct i2c_diolan_u2c*,int,scalar_t__*) ;
 int FUNC_1 (struct i2c_diolan_u2c*,scalar_t__) ;
 int FUNC_2 (struct i2c_diolan_u2c*) ;
 int FUNC_3 (struct i2c_diolan_u2c*) ;
 int FUNC_4 (struct i2c_diolan_u2c*) ;
 scalar_t__ FUNC_5 (struct i2c_msg*) ;
 struct i2c_diolan_u2c* FUNC_6 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_4, struct i2c_msg *VAR_5,
      int VAR_6)
{
 struct i2c_diolan_u2c *VAR_7 = FUNC_6(VAR_4);
 struct i2c_msg *VAR_8;
 int VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_3(VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_8 = &VAR_5[VAR_9];
  if (VAR_9) {
   VAR_11 = FUNC_2(VAR_7);
   if (VAR_11 < 0)
    goto abort;
  }
  VAR_11 = FUNC_1(VAR_7,
           FUNC_5(VAR_8));
  if (VAR_11 < 0)
   goto abort;
  if (VAR_8->flags & VAR_1) {
   for (VAR_10 = 0; VAR_10 < VAR_8->len; VAR_10++) {
    u8 VAR_13;
    bool VAR_14 = VAR_10 < VAR_8->len - 1;





    if (VAR_10 == 0 && (VAR_8->flags & VAR_2))
     VAR_14 = 1;

    VAR_11 = FUNC_0(VAR_7, VAR_14, &VAR_13);
    if (VAR_11 < 0)
     goto abort;



    if (VAR_10 == 0 && (VAR_8->flags & VAR_2)) {
     if (VAR_13 == 0
         || VAR_13 > VAR_3) {
      VAR_11 = -VAR_0;
      goto abort;
     }
     VAR_8->len += VAR_13;
    }
    VAR_8->buf[VAR_10] = VAR_13;
   }
  } else {
   for (VAR_10 = 0; VAR_10 < VAR_8->len; VAR_10++) {
    VAR_11 = FUNC_1(VAR_7,
             VAR_8->buf[VAR_10]);
    if (VAR_11 < 0)
     goto abort;
   }
  }
 }
 VAR_11 = VAR_6;
abort:
 VAR_12 = FUNC_4(VAR_7);
 if (VAR_12 < 0 && VAR_11 >= 0)
  VAR_11 = VAR_12;
 return VAR_11;
}
