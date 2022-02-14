
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct max9611_dev {int lock; int dev; int i2c_client; } ;
typedef enum max9611_conf_ids { ____Placeholder_max9611_conf_ids } max9611_conf_ids ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int** VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct max9611_dev *VAR_3,
          enum max9611_conf_ids VAR_4,
          u16 *VAR_5)
{
 int VAR_6;

 u8 VAR_7 = VAR_2[VAR_4][0] & VAR_0;
 u8 VAR_8 = VAR_2[VAR_4][1];





 FUNC_3(&VAR_3->lock);
 VAR_6 = FUNC_2(VAR_3->i2c_client,
     VAR_1, VAR_7);
 if (VAR_6) {
  FUNC_0(VAR_3->dev, "i2c write byte failed: 0x%2x - 0x%2x\n",
   VAR_1, VAR_7);
  FUNC_4(&VAR_3->lock);
  return VAR_6;
 }





 FUNC_5(1000, 2000);

 VAR_6 = FUNC_1(VAR_3->i2c_client, VAR_8);
 if (VAR_6 < 0) {
  FUNC_0(VAR_3->dev, "i2c read word from 0x%2x failed\n",
   VAR_8);
  FUNC_4(&VAR_3->lock);
  return VAR_6;
 }

 *VAR_5 = VAR_6;
 FUNC_4(&VAR_3->lock);

 return 0;
}
