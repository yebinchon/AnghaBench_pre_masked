
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucd9000_data {int** fan_data; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*) ;
 struct ucd9000_data* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 struct ucd9000_data *VAR_4
   = FUNC_1(FUNC_0(VAR_1));

 if (VAR_4->fan_data[VAR_2][3] & 1)
  VAR_3 |= VAR_0;


 VAR_3 |= (VAR_4->fan_data[VAR_2][3] & 0x06) >> 1;

 return VAR_3;
}
