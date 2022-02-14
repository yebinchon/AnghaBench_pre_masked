
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;
typedef int data ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct i2c_client*,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0, u16 VAR_1)
{
 __be16 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, &VAR_2, sizeof(VAR_2));
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_0(VAR_2);
}
