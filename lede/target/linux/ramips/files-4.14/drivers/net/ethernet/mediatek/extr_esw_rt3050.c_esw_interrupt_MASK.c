
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt305x_esw {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct rt305x_esw*,int ) ;
 int FUNC_2 (struct rt305x_esw*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct rt305x_esw *VAR_8 = (struct rt305x_esw *)VAR_7;
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_8, VAR_4);
 if (VAR_9 & VAR_3) {
  u32 VAR_10 = FUNC_1(VAR_8, VAR_5);

  VAR_10 >>= VAR_2;
  VAR_10 &= VAR_1;
  FUNC_0(VAR_8->dev, "link changed 0x%02X\n", VAR_10);
 }
 FUNC_2(VAR_8, VAR_9, VAR_4);

 return VAR_0;
}
