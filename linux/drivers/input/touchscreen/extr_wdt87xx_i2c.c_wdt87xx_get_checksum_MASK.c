
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct i2c_client {int dev; } ;
typedef int pkt_buf ;
typedef int cmd_buf ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct i2c_client*,int *,int) ;
 int FUNC_6 (struct i2c_client*,int ,int) ;
 int FUNC_7 (struct i2c_client*,int *,int) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_10, u16 *VAR_11,
    u32 VAR_12, int VAR_13)
{
 int VAR_14;
 int VAR_15;
 u8 VAR_16[VAR_4];
 u8 VAR_17[VAR_0];

 VAR_14 = FUNC_6(VAR_10, VAR_9, VAR_13);
 if (VAR_14) {
  FUNC_1(&VAR_10->dev, "failed to set checksum length\n");
  return VAR_14;
 }

 VAR_14 = FUNC_6(VAR_10, VAR_8, VAR_12);
 if (VAR_14) {
  FUNC_1(&VAR_10->dev, "failed to set checksum address\n");
  return VAR_14;
 }


 VAR_15 = FUNC_0(VAR_13, 1024);
 FUNC_4(VAR_15 * 30);

 FUNC_3(VAR_17, 0, sizeof(VAR_17));
 VAR_17[VAR_2] = VAR_7;
 VAR_17[VAR_3] = VAR_5;
 VAR_14 = FUNC_7(VAR_10, VAR_17, sizeof(VAR_17));
 if (VAR_14) {
  FUNC_1(&VAR_10->dev, "failed to request checksum\n");
  return VAR_14;
 }

 FUNC_3(VAR_16, 0, sizeof(VAR_16));
 VAR_16[VAR_2] = VAR_6;
 VAR_14 = FUNC_5(VAR_10, VAR_16, sizeof(VAR_16));
 if (VAR_14) {
  FUNC_1(&VAR_10->dev, "failed to read checksum\n");
  return VAR_14;
 }

 *VAR_11 = FUNC_2(&VAR_16[VAR_1]);
 return 0;
}
