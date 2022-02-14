
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max44009_data {struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
typedef int s64 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct max44009_data *VAR_4,
       int VAR_5, int VAR_6)
{
 struct i2c_client *VAR_7 = VAR_4->client;
 int VAR_8, VAR_9, VAR_10;
 s64 VAR_11;

 VAR_11 = VAR_5 * VAR_2 + VAR_6;
 VAR_9 = FUNC_1(
   VAR_11,
   VAR_3,
   FUNC_0(VAR_3));

 VAR_8 = FUNC_2(VAR_7, VAR_1);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_10 = VAR_8;
 VAR_10 &= VAR_9;





 VAR_10 |= VAR_0;

 return FUNC_3(VAR_7, VAR_1, VAR_10);
}
