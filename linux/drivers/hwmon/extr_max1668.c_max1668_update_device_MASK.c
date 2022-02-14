
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max1668_data {int valid; int alarms; int update_lock; scalar_t__ last_updated; void** temp_min; void** temp_max; void** temp; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
typedef void* s8 ;
typedef int s32 ;


 struct max1668_data* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 struct max1668_data* FUNC_4 (struct device*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct max1668_data *FUNC_10(struct device *VAR_4)
{
 struct max1668_data *VAR_5 = FUNC_4(VAR_4);
 struct i2c_client *VAR_6 = VAR_5->client;
 struct max1668_data *VAR_7 = VAR_5;
 s32 VAR_8;
 int VAR_9;

 FUNC_6(&VAR_5->update_lock);

 if (VAR_5->valid && !FUNC_8(VAR_3,
   VAR_5->last_updated + VAR_0 + VAR_0 / 2))
  goto abort;

 for (VAR_9 = 0; VAR_9 < 5; VAR_9++) {
  VAR_8 = FUNC_5(VAR_6, FUNC_3(VAR_9));
  if (FUNC_9(VAR_8 < 0)) {
   VAR_7 = FUNC_0(VAR_8);
   goto abort;
  }
  VAR_5->temp[VAR_9] = (s8) VAR_8;

  VAR_8 = FUNC_5(VAR_6, FUNC_1(VAR_9));
  if (FUNC_9(VAR_8 < 0)) {
   VAR_7 = FUNC_0(VAR_8);
   goto abort;
  }
  VAR_5->temp_max[VAR_9] = (s8) VAR_8;

  VAR_8 = FUNC_5(VAR_6, FUNC_2(VAR_9));
  if (FUNC_9(VAR_8 < 0)) {
   VAR_7 = FUNC_0(VAR_8);
   goto abort;
  }
  VAR_5->temp_min[VAR_9] = (s8) VAR_8;
 }

 VAR_8 = FUNC_5(VAR_6, VAR_1);
 if (FUNC_9(VAR_8 < 0)) {
  VAR_7 = FUNC_0(VAR_8);
  goto abort;
 }
 VAR_5->alarms = VAR_8 << 8;

 VAR_8 = FUNC_5(VAR_6, VAR_2);
 if (FUNC_9(VAR_8 < 0)) {
  VAR_7 = FUNC_0(VAR_8);
  goto abort;
 }
 VAR_5->alarms |= VAR_8;

 VAR_5->last_updated = VAR_3;
 VAR_5->valid = 1;
abort:
 FUNC_7(&VAR_5->update_lock);

 return VAR_7;
}
