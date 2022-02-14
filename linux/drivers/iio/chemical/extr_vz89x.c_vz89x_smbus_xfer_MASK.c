
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vz89x_data {int* buffer; TYPE_1__* chip; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int read_size; } ;


 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct vz89x_data *VAR_0, u8 VAR_1)
{
 struct i2c_client *VAR_2 = VAR_0->client;
 int VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_2, VAR_1, 0);
 if (VAR_3 < 0)
  return VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_0->chip->read_size; VAR_4++) {
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3 < 0)
   return VAR_3;
  VAR_0->buffer[VAR_4] = VAR_3;
 }

 return 0;
}
