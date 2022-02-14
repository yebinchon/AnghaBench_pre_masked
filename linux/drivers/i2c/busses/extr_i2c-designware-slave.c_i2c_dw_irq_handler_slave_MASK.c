
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dw_i2c_dev {int slave; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct dw_i2c_dev*,int ) ;
 int FUNC_3 (struct dw_i2c_dev*,int,int ) ;
 int FUNC_4 (struct dw_i2c_dev*) ;
 int FUNC_5 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_6(struct dw_i2c_dev *VAR_19)
{
 u32 VAR_20, VAR_21, VAR_22;
 u8 VAR_23, VAR_24;

 VAR_21 = FUNC_2(VAR_19, VAR_9);
 VAR_22 = FUNC_2(VAR_19, VAR_4);
 VAR_20 = FUNC_2(VAR_19, VAR_11);
 VAR_24 = ((FUNC_2(VAR_19, VAR_12) &
  VAR_13) >> 6);

 if (!VAR_22 || !(VAR_20 & ~VAR_5) || !VAR_19->slave)
  return 0;

 FUNC_0(VAR_19->dev,
  "%#x STATUS SLAVE_ACTIVITY=%#x : RAW_INTR_STAT=%#x : INTR_STAT=%#x\n",
  VAR_22, VAR_24, VAR_20, VAR_21);

 if ((VAR_21 & VAR_8) && (VAR_21 & VAR_10))
  FUNC_5(VAR_19->slave, VAR_18, &VAR_23);

 if (VAR_21 & VAR_6) {
  if (VAR_24) {
   if (VAR_21 & VAR_8) {
    VAR_23 = FUNC_2(VAR_19, VAR_3);

    if (!FUNC_5(VAR_19->slave,
           VAR_17,
           &VAR_23)) {
     FUNC_1(VAR_19->dev, "Byte %X acked!",
       VAR_23);
    }
    FUNC_2(VAR_19, VAR_0);
    VAR_21 = FUNC_4(VAR_19);
   } else {
    FUNC_2(VAR_19, VAR_0);
    FUNC_2(VAR_19, VAR_2);
    VAR_21 = FUNC_4(VAR_19);
   }
   if (!FUNC_5(VAR_19->slave,
          VAR_15,
          &VAR_23))
    FUNC_3(VAR_19, VAR_23, VAR_3);
  }
 }

 if (VAR_21 & VAR_7) {
  if (!FUNC_5(VAR_19->slave, VAR_14,
         &VAR_23))
   FUNC_2(VAR_19, VAR_1);

  FUNC_5(VAR_19->slave, VAR_16, &VAR_23);
  VAR_21 = FUNC_4(VAR_19);
  return 1;
 }

 if (VAR_21 & VAR_8) {
  VAR_23 = FUNC_2(VAR_19, VAR_3);
  if (!FUNC_5(VAR_19->slave, VAR_17,
         &VAR_23))
   FUNC_1(VAR_19->dev, "Byte %X acked!", VAR_23);
 } else {
  FUNC_5(VAR_19->slave, VAR_16, &VAR_23);
  VAR_21 = FUNC_4(VAR_19);
 }

 return 1;
}
