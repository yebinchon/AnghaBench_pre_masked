
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
typedef int ack_ok ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct i2c_client*,int*,int) ;
 int FUNC_2 (struct i2c_client*,void const*,int ) ;
 int FUNC_3 (int*,int const*,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3,
        const void *VAR_4)
{
 const u8 VAR_5[] = { 0xaa, 0xaa };
 u8 VAR_6[2];
 int VAR_7;
 int VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_1);
  if (VAR_8) {
   FUNC_0(&VAR_3->dev,
    "IAP Write Page failed: %d\n", VAR_8);
   continue;
  }

  VAR_8 = FUNC_1(VAR_3, VAR_6, 2);
  if (VAR_8) {
   FUNC_0(&VAR_3->dev,
    "IAP Ack read failed: %d\n", VAR_8);
   return VAR_8;
  }

  if (!FUNC_3(VAR_6, VAR_5, sizeof(VAR_5)))
   return 0;

  VAR_8 = -VAR_0;
  FUNC_0(&VAR_3->dev,
   "IAP Get Ack Error [%02x:%02x]\n",
   VAR_6[0], VAR_6[1]);
 }

 return VAR_8;
}
