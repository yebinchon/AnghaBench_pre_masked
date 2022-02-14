
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct tps6507x_ts {int dev; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct tps6507x_ts*,int ,int*) ;
 scalar_t__ FUNC_3 (struct tps6507x_ts*,int ,int) ;

__attribute__((used)) static s32 FUNC_4(struct tps6507x_ts *VAR_7,
       u8 VAR_8, u16 *VAR_9)
{
 s32 VAR_10;
 u8 VAR_11;
 u8 VAR_12;



 VAR_10 = FUNC_3(VAR_7, VAR_6, VAR_8);
 if (VAR_10) {
  FUNC_1(VAR_7->dev, "TSC mode read failed\n");
  goto err;
 }



 VAR_10 = FUNC_3(VAR_7, VAR_2,
    VAR_0);
 if (VAR_10) {
  FUNC_1(VAR_7->dev, "ADC config write failed\n");
  return VAR_10;
 }

 do {
  VAR_10 = FUNC_2(VAR_7, VAR_2,
           &VAR_11);
  if (VAR_10) {
   FUNC_1(VAR_7->dev, "ADC config read failed\n");
   goto err;
  }
 } while (VAR_11 & VAR_1);

 VAR_10 = FUNC_2(VAR_7, VAR_4, &VAR_12);
 if (VAR_10) {
  FUNC_1(VAR_7->dev, "ADC result 2 read failed\n");
  goto err;
 }

 *VAR_9 = (VAR_12 & VAR_5) << 8;

 VAR_10 = FUNC_2(VAR_7, VAR_3, &VAR_12);
 if (VAR_10) {
  FUNC_1(VAR_7->dev, "ADC result 1 read failed\n");
  goto err;
 }

 *VAR_9 |= VAR_12;

 FUNC_0(VAR_7->dev, "TSC channel %d = 0x%X\n", VAR_8, *VAR_9);

err:
 return VAR_10;
}
