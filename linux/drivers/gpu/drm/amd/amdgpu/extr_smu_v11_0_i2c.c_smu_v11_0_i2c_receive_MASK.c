
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct i2c_adapter {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int,int ,int ,int) ;
 int VAR_12 ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ,int ,int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int ,char*,int ,int,int,int*,int,int) ;
 int FUNC_7 (struct i2c_adapter*) ;
 int FUNC_8 (struct i2c_adapter*,int) ;
 int FUNC_9 (struct i2c_adapter*) ;
 int FUNC_10 (struct i2c_adapter*,int) ;
 struct amdgpu_device* FUNC_11 (struct i2c_adapter*) ;

__attribute__((used)) static uint32_t FUNC_12(struct i2c_adapter *VAR_17,
     uint8_t VAR_18, uint8_t *VAR_19,
     uint32_t VAR_20, uint8_t VAR_21)
{
 struct amdgpu_device *VAR_22 = FUNC_11(VAR_17);
 uint32_t VAR_23, VAR_24 = VAR_8;

 VAR_23 = 0;


 FUNC_10(VAR_17, VAR_18);


 FUNC_8(VAR_17, 1);

 while (VAR_20 > 0) {
  uint32_t VAR_25 = 0;

  FUNC_7(VAR_17);





  if (VAR_23 == 0)
   VAR_25 = FUNC_3(VAR_25, VAR_0, VAR_12,
         (VAR_21 & VAR_9) ? 1 : 0);

  VAR_25 = FUNC_3(VAR_25, VAR_0, VAR_2, 0);

  VAR_25 = FUNC_3(VAR_25, VAR_0, VAR_1, 1);


  if (VAR_20 == 1)

   VAR_25 = FUNC_3(VAR_25, VAR_0, VAR_14,
         (VAR_21 & VAR_7) ? 0 : 1);

  FUNC_5(VAR_13, 0, VAR_16, VAR_25);

  VAR_24 = FUNC_9(VAR_17);


  if (VAR_24 != VAR_8) {
   if (VAR_24 & VAR_10)
    FUNC_1("TIMEOUT ERROR !!!");

   if (VAR_24 & VAR_5)
    FUNC_1("Received I2C_NAK_7B_ADDR_NOACK !!!");

   if (VAR_24 & VAR_6)
    FUNC_1("Received I2C_NAK_TXDATA_NOACK !!!");

   break;
  }

  VAR_25 = FUNC_4(VAR_13, 0, VAR_16);
  VAR_19[VAR_23] = FUNC_2(VAR_25, VAR_0, VAR_2);


  VAR_23++;
  VAR_20--;
 }

 FUNC_0("I2C_Receive(), address = %x, bytes = %d, data :",
    (uint16_t)VAR_18, VAR_23);

 if (VAR_15 & VAR_3) {
  FUNC_6(VAR_11, "data: ", VAR_4,
          16, 1, VAR_19, VAR_23, 0);
 }

 return VAR_24;
}
