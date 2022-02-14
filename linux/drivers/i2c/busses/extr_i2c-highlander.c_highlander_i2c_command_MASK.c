
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct highlander_i2c_dev {int dev; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct highlander_i2c_dev *VAR_1,
       u8 VAR_2, int VAR_3)
{
 unsigned int VAR_4;
 u16 VAR_5 = (VAR_2 << 8) | VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4 += 2) {
  if (VAR_3 - VAR_4 == 1)
   VAR_5 = VAR_2 << 8;
  FUNC_1(VAR_5, VAR_1->base + VAR_0 + VAR_4);
  FUNC_0(VAR_1->dev, "command data[%x] 0x%04x\n", VAR_4/2, VAR_5);
 }
}
