
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
typedef enum raydium_bl_ack { ____Placeholder_raydium_bl_ack } raydium_bl_ack ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int ,void const*,size_t) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2,
        const void *VAR_3, size_t VAR_4,
        enum raydium_bl_ack VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_1, VAR_3, VAR_4);
 if (VAR_6) {
  FUNC_0(&VAR_2->dev, "WRT obj command failed: %d\n",
   VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_2, VAR_0, ((void*)0), 0);
 if (VAR_6) {
  FUNC_0(&VAR_2->dev, "Ack obj command failed: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_1(VAR_2, VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_2->dev, "BL check state failed: %d\n", VAR_6);
  return VAR_6;
 }
 return 0;
}
