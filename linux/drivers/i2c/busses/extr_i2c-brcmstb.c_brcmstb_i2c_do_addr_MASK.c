
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int addr; } ;
struct brcmstb_i2c_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct brcmstb_i2c_dev*,unsigned char*,int ) ;
 int FUNC_1 (struct brcmstb_i2c_dev*,int) ;
 int FUNC_2 (struct brcmstb_i2c_dev*,unsigned char,int ) ;
 int VAR_5 ;
 unsigned char FUNC_3 (struct i2c_msg*) ;

__attribute__((used)) static int FUNC_4(struct brcmstb_i2c_dev *VAR_6,
          struct i2c_msg *VAR_7)
{
 unsigned char VAR_8;

 if (VAR_7->flags & VAR_4) {

  VAR_8 = 0xF0 | ((VAR_7->addr & 0x300) >> 7);
  FUNC_2(VAR_6, VAR_8, VAR_5);


  VAR_8 = VAR_7->addr & 0xFF;
  if (FUNC_0(VAR_6, &VAR_8, 0) < 0)
   return -VAR_2;

  if (VAR_7->flags & VAR_3) {

   FUNC_1(VAR_6, VAR_1
         | VAR_0);

   VAR_8 = 0xF0 | ((VAR_7->addr & 0x300) >> 7) | 0x01;
   if (FUNC_0(VAR_6, &VAR_8, 0) < 0)
    return -VAR_2;

  }
 } else {
  VAR_8 = FUNC_3(VAR_7);

  FUNC_2(VAR_6, VAR_8, VAR_5);
 }

 return 0;
}
