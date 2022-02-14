
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;
struct adm1275_data {scalar_t__ have_power_sampling; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_2(const struct adm1275_data *VAR_7,
        struct i2c_client *VAR_8, bool VAR_9)
{
 int VAR_10, VAR_11;
 u16 VAR_12;






 if (VAR_7->have_power_sampling) {
  VAR_11 = FUNC_1(VAR_8, VAR_0);
  VAR_12 = VAR_9 ? VAR_3 : VAR_5;
  VAR_10 = VAR_9 ? VAR_4 : VAR_6;
 } else {
  VAR_11 = FUNC_0(VAR_8, VAR_0);
  VAR_12 = VAR_1;
  VAR_10 = VAR_2;
 }
 if (VAR_11 < 0)
  return VAR_11;

 return (VAR_11 & VAR_12) >> VAR_10;
}
