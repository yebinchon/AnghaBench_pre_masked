
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mcp3021_data {int sar_shift; int sar_mask; } ;
struct i2c_client {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct mcp3021_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1)
{
 struct mcp3021_data *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;
 u16 VAR_4;
 __be16 VAR_5;

 VAR_3 = FUNC_2(VAR_1, (char *)&VAR_5, 2);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_3 != 2)
  return -VAR_0;


 VAR_4 = FUNC_0(VAR_5);





 VAR_4 = (VAR_4 >> VAR_2->sar_shift) & VAR_2->sar_mask;

 return VAR_4;
}
