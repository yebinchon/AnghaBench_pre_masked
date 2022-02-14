
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct silead_ts_data {int chip_id; } ;
struct i2c_client {int dev; } ;
typedef int chip_id ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int ) ;
 struct silead_ts_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,int,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_1)
{
 struct silead_ts_data *VAR_2 = FUNC_2(VAR_1);
 __le32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_0,
           sizeof(VAR_3), (u8 *)&VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_1->dev, "Chip ID read error %d\n", VAR_4);
  return VAR_4;
 }

 VAR_2->chip_id = FUNC_4(VAR_3);
 FUNC_1(&VAR_1->dev, "Silead chip ID: 0x%8X", VAR_2->chip_id);

 return 0;
}
