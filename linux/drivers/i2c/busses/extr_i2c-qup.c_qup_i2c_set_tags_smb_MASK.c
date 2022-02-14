
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qup_i2c_dev {scalar_t__ is_smbus_read; } ;
struct i2c_msg {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qup_i2c_dev*) ;

__attribute__((used)) static int FUNC_1(u16 VAR_4, u8 *VAR_5, struct qup_i2c_dev *VAR_6,
   struct i2c_msg *VAR_7)
{
 int VAR_8 = 0;

 if (VAR_6->is_smbus_read) {
  VAR_5[VAR_8++] = VAR_2;
  VAR_5[VAR_8++] = FUNC_0(VAR_6);
 } else {
  VAR_5[VAR_8++] = VAR_3;
  VAR_5[VAR_8++] = VAR_4 & 0xff;

  if (VAR_7->flags & VAR_0)
   VAR_5[VAR_8++] = VAR_4 >> 8;

  VAR_5[VAR_8++] = VAR_1;

  VAR_5[VAR_8++] = 1;
 }
 return VAR_8;
}
