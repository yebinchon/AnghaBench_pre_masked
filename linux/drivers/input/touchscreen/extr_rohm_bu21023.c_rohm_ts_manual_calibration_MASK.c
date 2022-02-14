
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rohm_ts_data {struct i2c_client* client; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
typedef int s32 ;
typedef int buf ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (int ) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct i2c_client*,int ,int*,int) ;

__attribute__((used)) static int FUNC_6(struct rohm_ts_data *VAR_31)
{
 struct i2c_client *VAR_32 = VAR_31->client;
 struct device *VAR_33 = &VAR_32->dev;
 u8 VAR_34[33];

 int VAR_35;
 bool VAR_36 = 0;
 bool VAR_37 = 1;
 bool VAR_38;

 u8 VAR_39, VAR_40, VAR_41;
 s32 VAR_42, VAR_43, VAR_44;
 s32 VAR_45;

 int VAR_46 = 0, VAR_47 = 0;
 int VAR_48, VAR_49;
 int VAR_50, VAR_51;

 int VAR_52, VAR_53;
 int VAR_54;

 VAR_42 = FUNC_2(VAR_32, VAR_4);
 if (VAR_42 < 0)
  return VAR_42;

 VAR_43 = FUNC_2(VAR_32, VAR_5);
 if (VAR_43 < 0)
  return VAR_43;

 VAR_44 = FUNC_2(VAR_32, VAR_6);
 if (VAR_44 < 0)
  return VAR_44;

 VAR_52 = FUNC_3(VAR_32, VAR_17,
       VAR_8 | VAR_25 | VAR_26 |
       VAR_23);
 if (VAR_52)
  goto out;

 VAR_52 = FUNC_3(VAR_32, VAR_27,
       VAR_10);
 if (VAR_52)
  goto out;

 for (VAR_35 = 0; VAR_35 < VAR_7; VAR_35++) {

  FUNC_4(2 * VAR_24);



  VAR_52 = FUNC_5(VAR_32, VAR_19, VAR_34, sizeof(VAR_34));
  if (VAR_52)
   goto out;

  if (VAR_34[((VAR_28) - VAR_19)] & VAR_29)
   continue;

  if (VAR_37) {

   VAR_46 = ((int)VAR_34[((VAR_19) - VAR_19)] << 2 |
    VAR_34[((VAR_20) - VAR_19)]) - VAR_1;
   VAR_47 = ((int)VAR_34[((VAR_21) - VAR_19)] << 2 |
    VAR_34[((VAR_22) - VAR_19)]) - VAR_1;

   VAR_52 = FUNC_3(VAR_32, VAR_27,
    VAR_10 | VAR_9);
   if (VAR_52)
    goto out;

   VAR_37 = 0;
  } else {

   VAR_50 = (int)VAR_34[((VAR_19) - VAR_19)] << 2 |
    VAR_34[((VAR_20) - VAR_19)];
   VAR_51 = (int)VAR_34[((VAR_21) - VAR_19)] << 2 |
    VAR_34[((VAR_22) - VAR_19)];


   if (VAR_50 <= 4)
    VAR_46 -= VAR_0;
   else if (VAR_50 >= 60)
    VAR_46 += VAR_0;


   if (VAR_51 <= 4)
    VAR_47 -= VAR_0;
   else if (VAR_51 >= 60)
    VAR_47 += VAR_0;
  }


  VAR_48 = VAR_46 + ((VAR_46 & 0x200) << 1);
  VAR_49 = VAR_47 + ((VAR_47 & 0x200) << 1);


  VAR_39 = VAR_48 >> 3;
  VAR_40 = (VAR_49 & 0x7) << 4 | (VAR_48 & 0x7);
  VAR_41 = VAR_49 >> 3;

  VAR_52 = FUNC_3(VAR_32,
        VAR_4, VAR_39);
  if (VAR_52)
   goto out;

  VAR_52 = FUNC_3(VAR_32,
        VAR_5, VAR_40);
  if (VAR_52)
   goto out;

  VAR_52 = FUNC_3(VAR_32,
        VAR_6, VAR_41);
  if (VAR_52)
   goto out;




  VAR_52 = FUNC_3(VAR_32, VAR_12,
        VAR_13);
  if (VAR_52)
   goto out;

  VAR_52 = FUNC_3(VAR_32, VAR_12,
        VAR_14);
  if (VAR_52)
   goto out;


  VAR_52 = FUNC_3(VAR_32, VAR_16, 0xff);
  if (VAR_52)
   goto out;




  VAR_38 = 0;

  for (VAR_54 = 0; VAR_54 < 10; VAR_54++) {
   FUNC_4(VAR_24);

   VAR_45 = FUNC_2(VAR_32, VAR_30);
   if (!(VAR_45 & VAR_3)) {
    VAR_38 = 1;
    break;
   } else if (VAR_45 < 0) {
    VAR_52 = VAR_45;
    goto out;
   }
  }

  if (VAR_38) {
   VAR_45 = FUNC_2(VAR_32, VAR_18);
   if (VAR_45 == VAR_2) {
    VAR_36 = 1;
    break;
   } else if (VAR_45 < 0) {
    VAR_52 = VAR_45;
    goto out;
   }
  } else {
   FUNC_1(VAR_33, "calibration timeout\n");
  }
 }

 if (!VAR_36) {
  VAR_52 = FUNC_3(VAR_32, VAR_4,
        VAR_42);
  if (VAR_52)
   goto out;

  VAR_52 = FUNC_3(VAR_32, VAR_5,
        VAR_43);
  if (VAR_52)
   goto out;

  VAR_52 = FUNC_3(VAR_32, VAR_6,
        VAR_44);
  if (VAR_52)
   goto out;


  VAR_52 = FUNC_3(VAR_32, VAR_27,
        VAR_10 |
        VAR_9);
  if (VAR_52)
   goto out;


  FUNC_4(10 * VAR_24);

  VAR_52 = -VAR_11;
 }

out:
 VAR_53 = FUNC_3(VAR_32, VAR_17, VAR_15);
 if (!VAR_53)

  VAR_53 = FUNC_3(VAR_32, VAR_16, 0xff);

 return VAR_52 ? VAR_52 : VAR_53;
}
