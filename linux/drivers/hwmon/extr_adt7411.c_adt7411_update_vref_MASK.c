
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct adt7411_data {int vref_cached; scalar_t__ next_update; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,int ,int*) ;
 struct adt7411_data* FUNC_1 (struct device*) ;
 int VAR_3 ;
 int FUNC_2 (struct i2c_client*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5)
{
 struct adt7411_data *VAR_6 = FUNC_1(VAR_5);
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8;

 if (FUNC_3(VAR_4, VAR_6->next_update)) {
  VAR_8 = FUNC_2(VAR_7, VAR_1);
  if (VAR_8 < 0)
   return VAR_8;

  if (VAR_8 & VAR_0) {
   VAR_8 = FUNC_0(VAR_5, VAR_3,
        &VAR_6->vref_cached);
   if (VAR_8 < 0)
    return VAR_8;
  } else {
   VAR_6->vref_cached = 2250;
  }

  VAR_6->next_update = VAR_4 + VAR_2;
 }

 return 0;
}
