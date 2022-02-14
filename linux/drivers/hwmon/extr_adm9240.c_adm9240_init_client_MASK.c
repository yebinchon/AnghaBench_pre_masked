
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct adm9240_data {int vrm; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char*,int,int) ;
 struct adm9240_data* FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct i2c_client*,int ,int) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct i2c_client *VAR_2)
{
 struct adm9240_data *VAR_3 = FUNC_5(VAR_2);
 u8 VAR_4 = FUNC_6(VAR_2, VAR_0);
 u8 VAR_5 = FUNC_6(VAR_2, VAR_1) & 3;

 VAR_3->vrm = FUNC_8();

 FUNC_4(&VAR_2->dev, "Using VRM: %d.%d\n", VAR_3->vrm / 10,
   VAR_3->vrm % 10);

 if (VAR_4 & 1) {

  FUNC_4(&VAR_2->dev, "status: config 0x%02x mode %u\n",
    VAR_4, VAR_5);

 } else {
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < 6; VAR_6++) {
   FUNC_7(VAR_2,
     FUNC_2(VAR_6), 0);
   FUNC_7(VAR_2,
     FUNC_1(VAR_6), 255);
  }
  FUNC_7(VAR_2,
    FUNC_0(0), 255);
  FUNC_7(VAR_2,
    FUNC_0(1), 255);
  FUNC_7(VAR_2,
    FUNC_3(0), 127);
  FUNC_7(VAR_2,
    FUNC_3(1), 127);


  FUNC_7(VAR_2, VAR_0, 1);

  FUNC_4(&VAR_2->dev,
    "cold start: config was 0x%02x mode %u\n", VAR_4, VAR_5);
 }
}
