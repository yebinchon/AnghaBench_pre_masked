
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_gpadc {unsigned int extended_delay; unsigned int ch0_current; unsigned int ch3_current; int dev; int palmas; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,unsigned int,unsigned int) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct palmas_gpadc *VAR_13, int VAR_14,
          int VAR_15)
{
 unsigned int VAR_16, VAR_17;
 int VAR_18;

 if (VAR_15) {
  VAR_17 = (VAR_13->extended_delay
   << VAR_9);
  VAR_18 = FUNC_1(VAR_13->palmas, VAR_0,
     VAR_7,
     VAR_8, VAR_17);
  if (VAR_18 < 0) {
   FUNC_0(VAR_13->dev, "RT_CTRL update failed: %d\n", VAR_18);
   return VAR_18;
  }

  VAR_16 = (VAR_2 |
   VAR_4 |
   VAR_6);
  VAR_17 = (VAR_13->ch0_current
   << VAR_3);
  VAR_17 |= (VAR_13->ch3_current
   << VAR_5);
  VAR_17 |= VAR_6;
  VAR_18 = FUNC_1(VAR_13->palmas, VAR_0,
    VAR_1, VAR_16, VAR_17);
  if (VAR_18 < 0) {
   FUNC_0(VAR_13->dev,
    "Failed to update current setting: %d\n", VAR_18);
   return VAR_18;
  }

  VAR_16 = (VAR_11 |
   VAR_12);
  VAR_17 = (VAR_14 | VAR_12);
  VAR_18 = FUNC_1(VAR_13->palmas, VAR_0,
    VAR_10, VAR_16, VAR_17);
  if (VAR_18 < 0) {
   FUNC_0(VAR_13->dev, "SW_SELECT update failed: %d\n", VAR_18);
   return VAR_18;
  }
 } else {
  VAR_18 = FUNC_2(VAR_13->palmas, VAR_0,
    VAR_10, 0);
  if (VAR_18 < 0)
   FUNC_0(VAR_13->dev, "SW_SELECT write failed: %d\n", VAR_18);

  VAR_18 = FUNC_1(VAR_13->palmas, VAR_0,
    VAR_1,
    VAR_6, 0);
  if (VAR_18 < 0) {
   FUNC_0(VAR_13->dev, "CTRL1 update failed: %d\n", VAR_18);
   return VAR_18;
  }
 }

 return VAR_18;
}
