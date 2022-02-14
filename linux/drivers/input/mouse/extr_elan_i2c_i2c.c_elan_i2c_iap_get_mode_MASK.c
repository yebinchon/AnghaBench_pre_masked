
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dev; } ;
typedef enum tp_mode { ____Placeholder_tp_mode } tp_mode ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct i2c_client*,int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4, enum tp_mode *VAR_5)
{
 int VAR_6;
 u16 VAR_7;
 u8 VAR_8[3];

 VAR_6 = FUNC_2(VAR_4, VAR_0, VAR_8);
 if (VAR_6) {
  FUNC_1(&VAR_4->dev,
   "failed to read iap control register: %d\n",
   VAR_6);
  return VAR_6;
 }

 VAR_7 = FUNC_3((__le16 *)VAR_8);
 FUNC_0(&VAR_4->dev, "iap control reg: 0x%04x.\n", VAR_7);

 *VAR_5 = (VAR_7 & VAR_1) ? VAR_3 : VAR_2;

 return 0;
}
