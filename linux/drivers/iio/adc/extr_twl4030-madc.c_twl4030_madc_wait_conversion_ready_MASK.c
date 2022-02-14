
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl4030_madc_data {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct twl4030_madc_data *VAR_5,
           unsigned int VAR_6,
           u8 VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;

 VAR_8 = VAR_4 + FUNC_1(VAR_6);
 do {
  u8 VAR_10;

  VAR_9 = FUNC_3(VAR_3, &VAR_10, VAR_7);
  if (VAR_9) {
   FUNC_0(VAR_5->dev,
    "unable to read status register 0x%X\n",
    VAR_7);
   return VAR_9;
  }
  if (!(VAR_10 & VAR_1) && (VAR_10 & VAR_2))
   return 0;
  FUNC_4(500, 2000);
 } while (!FUNC_2(VAR_4, VAR_8));
 FUNC_0(VAR_5->dev, "conversion timeout!\n");

 return -VAR_0;
}
