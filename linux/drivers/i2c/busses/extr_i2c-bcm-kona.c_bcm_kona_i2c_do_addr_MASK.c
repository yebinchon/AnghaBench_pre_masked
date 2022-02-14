
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int addr; } ;
struct bcm_kona_i2c_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct bcm_kona_i2c_dev*,unsigned char,int ) ;
 scalar_t__ FUNC_1 (struct bcm_kona_i2c_dev*,int ) ;
 unsigned char FUNC_2 (struct i2c_msg*) ;

__attribute__((used)) static int FUNC_3(struct bcm_kona_i2c_dev *VAR_4,
         struct i2c_msg *VAR_5)
{
 unsigned char VAR_6;

 if (VAR_5->flags & VAR_3) {

  VAR_6 = 0xF0 | ((VAR_5->addr & 0x300) >> 7);
  if (FUNC_0(VAR_4, VAR_6, 0) < 0)
   return -VAR_1;


  VAR_6 = VAR_5->addr & 0xFF;
  if (FUNC_0(VAR_4, VAR_6, 0) < 0)
   return -VAR_1;

  if (VAR_5->flags & VAR_2) {

   if (FUNC_1(VAR_4, VAR_0) < 0)
    return -VAR_1;


   VAR_6 = 0xF0 | ((VAR_5->addr & 0x300) >> 7) | 0x01;
   if (FUNC_0(VAR_4, VAR_6, 0) < 0)
    return -VAR_1;
  }
 } else {
  VAR_6 = FUNC_2(VAR_5);

  if (FUNC_0(VAR_4, VAR_6, 0) < 0)
   return -VAR_1;
 }

 return 0;
}
