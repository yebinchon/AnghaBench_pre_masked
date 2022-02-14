
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct adm9240_data {int valid; int* in; int alarms; int temp; int* fan; int* fan_div; int* fan_min; int* in_min; int* in_max; int* temp_max; int vid; int aout; int update_lock; void* last_updated_config; void* last_updated_measure; struct i2c_client* client; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct i2c_client*,int,int) ;
 struct adm9240_data* FUNC_8 (struct device*) ;
 int FUNC_9 (struct i2c_client*,int ) ;
 void* VAR_6 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (void*,void*) ;

__attribute__((used)) static struct adm9240_data *FUNC_13(struct device *VAR_7)
{
 struct adm9240_data *VAR_8 = FUNC_8(VAR_7);
 struct i2c_client *VAR_9 = VAR_8->client;
 int VAR_10;

 FUNC_10(&VAR_8->update_lock);


 if (FUNC_12(VAR_6, VAR_8->last_updated_measure + (VAR_5 * 7 / 4))
   || !VAR_8->valid) {

  for (VAR_10 = 0; VAR_10 < 6; VAR_10++) {
   VAR_8->in[VAR_10] = FUNC_9(VAR_9,
     FUNC_2(VAR_10));
  }
  VAR_8->alarms = FUNC_9(VAR_9,
     FUNC_3(0)) |
     FUNC_9(VAR_9,
     FUNC_3(1)) << 8;






  VAR_8->temp = (FUNC_9(VAR_9,
     VAR_1) << 8) |
     FUNC_9(VAR_9,
     VAR_2);

  for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
   VAR_8->fan[VAR_10] = FUNC_9(VAR_9,
     FUNC_0(VAR_10));


   if (VAR_8->valid && VAR_8->fan[VAR_10] == 255 &&
     VAR_8->fan_div[VAR_10] < 3) {

    FUNC_7(VAR_9, VAR_10,
      ++VAR_8->fan_div[VAR_10]);


    if (VAR_8->fan_min[VAR_10] < 255 &&
      VAR_8->fan_min[VAR_10] >= 2)
     VAR_8->fan_min[VAR_10] /= 2;
   }
  }
  VAR_8->last_updated_measure = VAR_6;
 }


 if (FUNC_12(VAR_6, VAR_8->last_updated_config + (VAR_5 * 300))
   || !VAR_8->valid) {

  for (VAR_10 = 0; VAR_10 < 6; VAR_10++) {
   VAR_8->in_min[VAR_10] = FUNC_9(VAR_9,
     FUNC_5(VAR_10));
   VAR_8->in_max[VAR_10] = FUNC_9(VAR_9,
     FUNC_4(VAR_10));
  }
  for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
   VAR_8->fan_min[VAR_10] = FUNC_9(VAR_9,
     FUNC_1(VAR_10));
  }
  VAR_8->temp_max[0] = FUNC_9(VAR_9,
    FUNC_6(0));
  VAR_8->temp_max[1] = FUNC_9(VAR_9,
    FUNC_6(1));


  VAR_10 = FUNC_9(VAR_9, VAR_4);
  VAR_8->fan_div[0] = (VAR_10 >> 4) & 3;
  VAR_8->fan_div[1] = (VAR_10 >> 6) & 3;
  VAR_8->vid = VAR_10 & 0x0f;
  VAR_8->vid |= (FUNC_9(VAR_9,
     VAR_3) & 1) << 4;

  VAR_8->aout = FUNC_9(VAR_9,
    VAR_0);

  VAR_8->last_updated_config = VAR_6;
  VAR_8->valid = 1;
 }
 FUNC_11(&VAR_8->update_lock);
 return VAR_8;
}
