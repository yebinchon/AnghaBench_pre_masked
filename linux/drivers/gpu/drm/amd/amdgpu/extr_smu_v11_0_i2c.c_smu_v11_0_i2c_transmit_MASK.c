
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
 int VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int,int ,int ,int) ;
 int VAR_13 ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (int ,int ,int ,int) ;
 int VAR_17 ;
 unsigned long VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned long FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int ,int,int,int*,int,int) ;
 int FUNC_8 (struct i2c_adapter*) ;
 int FUNC_9 (struct i2c_adapter*,int) ;
 int FUNC_10 (struct i2c_adapter*) ;
 int FUNC_11 (struct i2c_adapter*,int) ;
 scalar_t__ FUNC_12 (unsigned long,unsigned long) ;
 struct amdgpu_device* FUNC_13 (struct i2c_adapter*) ;

__attribute__((used)) static uint32_t FUNC_14(struct i2c_adapter *VAR_21,
      uint8_t VAR_22, uint8_t *VAR_23,
      uint32_t VAR_24, uint32_t VAR_25)
{
 struct amdgpu_device *VAR_26 = FUNC_13(VAR_21);
 uint32_t VAR_27, VAR_28, VAR_29 = 0;
 unsigned long VAR_30;

 VAR_27 = 0;

 FUNC_0("I2C_Transmit(), address = %x, bytes = %d , data: ",
   (uint16_t)VAR_22, VAR_24);

 if (VAR_17 & VAR_4) {
  FUNC_7(VAR_12, "data: ", VAR_5,
          16, 1, VAR_23, VAR_24, 0);
 }


 FUNC_11(VAR_21, VAR_22);

 FUNC_9(VAR_21, 1);


 FUNC_8(VAR_21);


 VAR_30 = VAR_18 + FUNC_6(20);

 while (VAR_24 > 0) {
  VAR_28 = FUNC_4(VAR_14, 0, VAR_20);
  if (FUNC_2(VAR_28, VAR_1, VAR_16)) {
   do {
    VAR_28 = 0;




    if (VAR_27 == 0)
     VAR_28 = FUNC_3(VAR_28, VAR_0, VAR_13,
           (VAR_25 & VAR_10) ? 1 : 0);
    VAR_28 = FUNC_3(VAR_28, VAR_0, VAR_3, VAR_23[VAR_27]);


    if (VAR_24 == 1)

     VAR_28 = FUNC_3(VAR_28, VAR_0, VAR_15,
           (VAR_25 & VAR_8) ? 0 : 1);

    VAR_28 = FUNC_3(VAR_28, VAR_0, VAR_2, 0);
    FUNC_5(VAR_14, 0, VAR_19, VAR_28);


    VAR_27++;
    VAR_24--;

    VAR_28 = FUNC_4(VAR_14, 0, VAR_20);

   } while (VAR_24 && FUNC_2(VAR_28, VAR_1, VAR_16));
  }





  if (FUNC_12(VAR_18, VAR_30)) {
   VAR_29 |= VAR_11;
   goto Err;
  }
 }

 VAR_29 = FUNC_10(VAR_21);

Err:

 if (VAR_29 != VAR_9) {
  if (VAR_29 & VAR_11)
   FUNC_1("TIMEOUT ERROR !!!");

  if (VAR_29 & VAR_6)
   FUNC_1("Received I2C_NAK_7B_ADDR_NOACK !!!");


  if (VAR_29 & VAR_7)
   FUNC_1("Received I2C_NAK_TXDATA_NOACK !!!");
 }

 return VAR_29;
}
