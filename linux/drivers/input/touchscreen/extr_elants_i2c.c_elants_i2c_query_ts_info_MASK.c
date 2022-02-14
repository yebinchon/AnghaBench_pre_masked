
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct i2c_client {int dev; } ;
struct elants_data {void* y_max; void* y_res; void* x_max; void* x_res; struct i2c_client* client; } ;
typedef int resp ;
typedef int get_resolution_cmd ;
typedef int get_physical_scan_cmd ;
typedef int get_physical_drive_cmd ;
typedef int get_osr_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,scalar_t__) ;
 void* FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct i2c_client*,int const*,int,int*,int) ;
 scalar_t__ FUNC_6 (int*) ;

__attribute__((used)) static int FUNC_7(struct elants_data *VAR_5)
{
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7;
 u8 VAR_8[17];
 u16 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 const u8 VAR_14[] = {
  VAR_0, 0x00, 0x00, 0x00, 0x00, 0x00
 };
 const u8 VAR_15[] = {
  VAR_1, VAR_2, 0x00, 0x01
 };
 const u8 VAR_16[] = {
  VAR_1, VAR_4, 0x00, 0x01
 };
 const u8 VAR_17[] = {
  VAR_1, VAR_3, 0x00, 0x01
 };


 VAR_7 = FUNC_5(VAR_6,
        VAR_14,
        sizeof(VAR_14),
        VAR_8, sizeof(VAR_8));
 if (VAR_7) {
  FUNC_3(&VAR_6->dev, "get resolution command failed: %d\n",
   VAR_7);
  return VAR_7;
 }

 VAR_11 = VAR_8[2] + VAR_8[6] + VAR_8[10];
 VAR_12 = VAR_8[3] + VAR_8[7] + VAR_8[11];


 VAR_7 = FUNC_5(VAR_6,
        VAR_15, sizeof(VAR_15),
        VAR_8, sizeof(VAR_8));
 if (VAR_7) {
  FUNC_3(&VAR_6->dev, "get osr command failed: %d\n",
   VAR_7);
  return VAR_7;
 }

 VAR_13 = VAR_8[3];

 VAR_7 = FUNC_5(VAR_6,
        VAR_16,
        sizeof(VAR_16),
        VAR_8, sizeof(VAR_8));
 if (VAR_7) {
  FUNC_3(&VAR_6->dev, "get physical scan command failed: %d\n",
   VAR_7);
  return VAR_7;
 }

 VAR_9 = FUNC_6(&VAR_8[2]);

 VAR_7 = FUNC_5(VAR_6,
        VAR_17,
        sizeof(VAR_17),
        VAR_8, sizeof(VAR_8));
 if (VAR_7) {
  FUNC_3(&VAR_6->dev, "get physical drive command failed: %d\n",
   VAR_7);
  return VAR_7;
 }

 VAR_10 = FUNC_6(&VAR_8[2]);

 FUNC_2(&VAR_6->dev, "phy_x=%d, phy_y=%d\n", VAR_9, VAR_10);

 if (VAR_11 == 0 || VAR_12 == 0 || VAR_13 == 0) {
  FUNC_4(&VAR_6->dev,
    "invalid trace number data: %d, %d, %d\n",
    VAR_11, VAR_12, VAR_13);
 } else {

  VAR_5->x_max = FUNC_1(VAR_11, VAR_13);
  VAR_5->x_res = FUNC_0(VAR_5->x_max, VAR_9);
  VAR_5->y_max = FUNC_1(VAR_12, VAR_13);
  VAR_5->y_res = FUNC_0(VAR_5->y_max, VAR_10);
 }

 return 0;
}
