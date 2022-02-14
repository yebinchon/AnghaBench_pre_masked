
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct bu21013_ts {struct i2c_client* client; } ;


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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct bu21013_ts *VAR_46)
{
 struct i2c_client *VAR_47 = VAR_46->client;
 int VAR_48;

 VAR_48 = FUNC_1(VAR_47, VAR_28,
       VAR_27);
 if (VAR_48) {
  FUNC_0(&VAR_47->dev, "BU21013_RESET reg write failed\n");
  return VAR_48;
 }
 FUNC_2(VAR_45);

 VAR_48 = FUNC_1(VAR_47, VAR_32,
       VAR_29);
 if (VAR_48) {
  FUNC_0(&VAR_47->dev, "BU21013_SENSOR_0_7 reg write failed\n");
  return VAR_48;
 }

 VAR_48 = FUNC_1(VAR_47, VAR_34,
       VAR_31);
 if (VAR_48) {
  FUNC_0(&VAR_47->dev, "BU21013_SENSOR_8_15 reg write failed\n");
  return VAR_48;
 }

 VAR_48 = FUNC_1(VAR_47, VAR_33,
       VAR_30);
 if (VAR_48) {
  FUNC_0(&VAR_47->dev, "BU21013_SENSOR_16_23 reg write failed\n");
  return VAR_48;
 }

 VAR_48 = FUNC_1(VAR_47, VAR_20,
       VAR_18 |
      VAR_19);
 if (VAR_48) {
  FUNC_0(&VAR_47->dev, "BU21013_POS_MODE1 reg write failed\n");
  return VAR_48;
 }

 VAR_48 = FUNC_1(VAR_47, VAR_25,
       VAR_26 |
      VAR_21 |
      VAR_22 |
      VAR_23 |
      VAR_24);
 if (VAR_48) {
  FUNC_0(&VAR_47->dev, "BU21013_POS_MODE2 reg write failed\n");
  return VAR_48;
 }

 VAR_48 = FUNC_1(VAR_47, VAR_2,
       VAR_1 |
      VAR_0);
 if (VAR_48) {
  FUNC_0(&VAR_47->dev, "BU21013_CLK_MODE reg write failed\n");
  return VAR_48;
 }

 VAR_48 = FUNC_1(VAR_47, VAR_13,
       VAR_11 |
      VAR_12);
 if (VAR_48) {
  FUNC_0(&VAR_47->dev, "BU21013_IDLE reg write failed\n");
  return VAR_48;
 }

 VAR_48 = FUNC_1(VAR_47, VAR_15,
       VAR_14);
 if (VAR_48) {
  FUNC_0(&VAR_47->dev, "BU21013_INT_MODE reg write failed\n");
  return VAR_48;
 }

 VAR_48 = FUNC_1(VAR_47, VAR_7,
       VAR_3 |
      VAR_6);
 if (VAR_48) {
  FUNC_0(&VAR_47->dev, "BU21013_FILTER reg write failed\n");
  return VAR_48;
 }

 VAR_48 = FUNC_1(VAR_47, VAR_39,
       VAR_38);
 if (VAR_48) {
  FUNC_0(&VAR_47->dev, "BU21013_TH_ON reg write failed\n");
  return VAR_48;
 }

 VAR_48 = FUNC_1(VAR_47, VAR_37,
       VAR_36 | VAR_35);
 if (VAR_48) {
  FUNC_0(&VAR_47->dev, "BU21013_TH_OFF reg write failed\n");
  return VAR_48;
 }

 VAR_48 = FUNC_1(VAR_47, VAR_10,
       VAR_8 | VAR_9);
 if (VAR_48) {
  FUNC_0(&VAR_47->dev, "BU21013_GAIN reg write failed\n");
  return VAR_48;
 }

 VAR_48 = FUNC_1(VAR_47, VAR_17,
       VAR_16);
 if (VAR_48) {
  FUNC_0(&VAR_47->dev, "BU21013_OFFSET_MODE reg write failed\n");
  return VAR_48;
 }

 VAR_48 = FUNC_1(VAR_47, VAR_40,
       VAR_41 |
      VAR_42 |
      VAR_43 |
      VAR_44);
 if (VAR_48) {
  FUNC_0(&VAR_47->dev, "BU21013_XY_EDGE reg write failed\n");
  return VAR_48;
 }

 VAR_48 = FUNC_1(VAR_47, VAR_5,
       VAR_4);
 if (VAR_48) {
  FUNC_0(&VAR_47->dev, "BU21013_REG_DONE reg write failed\n");
  return VAR_48;
 }

 return 0;
}
