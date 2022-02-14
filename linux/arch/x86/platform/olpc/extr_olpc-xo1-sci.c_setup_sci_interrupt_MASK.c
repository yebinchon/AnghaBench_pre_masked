
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 (int,int ,int ,int ,struct platform_device*) ;
 int VAR_7 ;
 int FUNC_8 (int,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_9)
{
 u32 VAR_10, VAR_11;
 u32 VAR_12;
 int VAR_13;

 FUNC_6(0x51400020, VAR_10, VAR_11);
 VAR_7 = (VAR_10 >> 20) & 15;

 if (VAR_7) {
  FUNC_1(&VAR_9->dev, "SCI is mapped to IRQ %d\n", VAR_7);
 } else {

  FUNC_1(&VAR_9->dev, "SCI unmapped. Mapping to IRQ 3\n");
  VAR_7 = 3;
  VAR_10 |= 0x00300000;
  FUNC_8(0x51400020, VAR_10);
 }


 if (VAR_7 < 8) {
  VAR_10 = FUNC_2(VAR_0);
  VAR_10 |= 1 << VAR_7;
  FUNC_4(VAR_10, VAR_0);
 } else {
  VAR_10 = FUNC_2(VAR_1);
  VAR_10 |= 1 << (VAR_7 - 8);
  FUNC_4(VAR_10, VAR_1);
 }


 VAR_12 = FUNC_3(VAR_6 + VAR_2);
 FUNC_5(((VAR_3 | VAR_4) << 16) | 0xffff,
      VAR_6 + VAR_2);

 VAR_13 = FUNC_7(VAR_7, VAR_8, 0, VAR_5, VAR_9);
 if (VAR_13)
  FUNC_0(&VAR_9->dev, "can't request interrupt\n");

 return VAR_13;
}
