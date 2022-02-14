
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int len; int flags; int addr; int * buf; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct i2c_adapter*,int ,int) ;
 int FUNC_2 (struct i2c_adapter*,int *) ;
 int FUNC_3 (struct i2c_adapter*,int ) ;
 int FUNC_4 (struct i2c_adapter*,int) ;

__attribute__((used)) static int
FUNC_5(struct i2c_adapter *VAR_1,
       struct i2c_msg *VAR_2,
       int VAR_3)
{
 int VAR_4 = 0;
 bool VAR_5 = 0;
 int VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  u16 VAR_8 = VAR_2[VAR_6].len;
  u8 *VAR_9 = VAR_2[VAR_6].buf;
  VAR_5 = (VAR_2[VAR_6].flags & VAR_0) != 0;
  VAR_4 = FUNC_1(VAR_1, VAR_2[VAR_6].addr, VAR_5);
  if (VAR_4 < 0)
   break;
  if (VAR_5) {
   for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
    VAR_4 = FUNC_2(VAR_1, &VAR_9[VAR_7]);
    if (VAR_4 < 0)
     break;
   }
  } else {
   for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
    VAR_4 = FUNC_3(VAR_1, VAR_9[VAR_7]);
    if (VAR_4 < 0)
     break;
   }
  }
  if (VAR_4 < 0)
   break;
 }
 if (VAR_4 >= 0)
  VAR_4 = VAR_3;
 FUNC_4(VAR_1, VAR_5);
 FUNC_0("dp_aux_xfer return %d\n", VAR_4);
 return VAR_4;
}
