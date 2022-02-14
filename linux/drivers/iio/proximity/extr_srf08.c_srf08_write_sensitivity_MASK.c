
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct srf08_data {unsigned int sensitivity; int lock; TYPE_1__* chip_info; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
typedef int ssize_t ;
struct TYPE_2__ {int num_sensitivity_avail; unsigned int* sensitivity_avail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct srf08_data *VAR_2,
       unsigned int VAR_3)
{
 struct i2c_client *VAR_4 = VAR_2->client;
 int VAR_5, VAR_6;
 u8 VAR_7;

 if (!VAR_3)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_2->chip_info->num_sensitivity_avail; VAR_6++)
  if (VAR_3 && (VAR_3 == VAR_2->chip_info->sensitivity_avail[VAR_6])) {
   VAR_7 = VAR_6;
   break;
  }

 if (VAR_6 >= VAR_2->chip_info->num_sensitivity_avail)
  return -VAR_0;

 FUNC_2(&VAR_2->lock);

 VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_7);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_4->dev, "write_sensitivity - err: %d\n", VAR_5);
  FUNC_3(&VAR_2->lock);
  return VAR_5;
 }

 VAR_2->sensitivity = VAR_3;

 FUNC_3(&VAR_2->lock);

 return 0;
}
