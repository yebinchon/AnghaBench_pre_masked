
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct ds1621_data {int valid; int update_lock; scalar_t__ last_updated; int conf; int * temp; scalar_t__ update_interval; struct i2c_client* client; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int *,char*) ;
 struct ds1621_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct ds1621_data *FUNC_9(struct device *VAR_5)
{
 struct ds1621_data *VAR_6 = FUNC_2(VAR_5);
 struct i2c_client *VAR_7 = VAR_6->client;
 u8 VAR_8;

 FUNC_6(&VAR_6->update_lock);

 if (FUNC_8(VAR_4, VAR_6->last_updated + VAR_6->update_interval) ||
     !VAR_6->valid) {
  int VAR_9;

  FUNC_1(&VAR_7->dev, "Starting ds1621 update\n");

  VAR_6->conf = FUNC_3(VAR_7, VAR_2);

  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6->temp); VAR_9++)
   VAR_6->temp[VAR_9] = FUNC_4(VAR_7,
        VAR_3[VAR_9]);


  VAR_8 = VAR_6->conf;
  if (VAR_6->temp[0] > VAR_6->temp[1])
   VAR_8 &= ~VAR_1;
  if (VAR_6->temp[0] < VAR_6->temp[2])
   VAR_8 &= ~VAR_0;
  if (VAR_6->conf != VAR_8)
   FUNC_5(VAR_7, VAR_2,
        VAR_8);

  VAR_6->last_updated = VAR_4;
  VAR_6->valid = 1;
 }

 FUNC_7(&VAR_6->update_lock);

 return VAR_6;
}
