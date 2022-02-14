
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2,
          bool VAR_3, u8 *VAR_4)
{
 int VAR_5;
 u8 VAR_6[3];

 VAR_5 = FUNC_0(VAR_2,
      VAR_3 ? VAR_0 :
       VAR_1,
      VAR_6);
 if (VAR_5)
  return VAR_5;

 *VAR_4 = FUNC_1((__le16 *)VAR_6);

 return 0;
}
