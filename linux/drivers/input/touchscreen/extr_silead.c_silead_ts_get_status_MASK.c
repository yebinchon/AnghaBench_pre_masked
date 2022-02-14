
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i2c_client {int dev; } ;
typedef int status ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ,int,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct i2c_client *VAR_1)
{
 int VAR_2;
 __le32 VAR_3;

 VAR_2 = FUNC_1(VAR_1, VAR_0,
           sizeof(VAR_3), (u8 *)&VAR_3);
 if (VAR_2 < 0) {
  FUNC_0(&VAR_1->dev, "Status read error %d\n", VAR_2);
  return VAR_2;
 }

 return FUNC_2(VAR_3);
}
