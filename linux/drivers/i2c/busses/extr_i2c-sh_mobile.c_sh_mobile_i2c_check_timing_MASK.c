
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sh_mobile_i2c_data {int flags; scalar_t__ iccl; scalar_t__ icch; int dev; int icic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct sh_mobile_i2c_data *VAR_4)
{
 u16 VAR_5 = VAR_4->flags & VAR_3 ? 0x1ff : 0xff;

 if (VAR_4->iccl > VAR_5 || VAR_4->icch > VAR_5) {
  FUNC_1(VAR_4->dev, "timing values out of range: L/H=0x%x/0x%x\n",
   VAR_4->iccl, VAR_4->icch);
  return -VAR_0;
 }


 if (VAR_4->iccl & 0x100)
  VAR_4->icic |= VAR_2;
 else
  VAR_4->icic &= ~VAR_2;


 if (VAR_4->icch & 0x100)
  VAR_4->icic |= VAR_1;
 else
  VAR_4->icic &= ~VAR_1;

 FUNC_0(VAR_4->dev, "timing values: L/H=0x%x/0x%x\n", VAR_4->iccl, VAR_4->icch);
 return 0;
}
