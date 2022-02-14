
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct max6697_data {int valid; int** temp; int alarms; int update_lock; scalar_t__ last_updated; TYPE_1__* chip; int update_interval; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int channels; int have_ext; int have_crit; } ;


 struct max6697_data* FUNC_0 (int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int) ;
 int * VAR_2 ;
 int * VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 struct max6697_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct max6697_data *FUNC_9(struct device *VAR_9)
{
 struct max6697_data *VAR_10 = FUNC_2(VAR_9);
 struct i2c_client *VAR_11 = VAR_10->client;
 struct max6697_data *VAR_12 = VAR_10;
 int VAR_13;
 int VAR_14;
 u32 VAR_15;

 FUNC_5(&VAR_10->update_lock);

 if (VAR_10->valid &&
     !FUNC_7(VAR_8, VAR_10->last_updated
   + FUNC_4(VAR_10->update_interval)))
  goto abort;

 for (VAR_14 = 0; VAR_14 < VAR_10->chip->channels; VAR_14++) {
  if (VAR_10->chip->have_ext & (1 << VAR_14)) {
   VAR_13 = FUNC_3(VAR_11,
             VAR_3[VAR_14]);
   if (FUNC_8(VAR_13 < 0)) {
    VAR_12 = FUNC_0(VAR_13);
    goto abort;
   }
   VAR_10->temp[VAR_14][VAR_5] = VAR_13;
  }

  VAR_13 = FUNC_3(VAR_11, VAR_2[VAR_14]);
  if (FUNC_8(VAR_13 < 0)) {
   VAR_12 = FUNC_0(VAR_13);
   goto abort;
  }
  VAR_10->temp[VAR_14][VAR_6] = VAR_13;

  VAR_13 = FUNC_3(VAR_11, VAR_1[VAR_14]);
  if (FUNC_8(VAR_13 < 0)) {
   VAR_12 = FUNC_0(VAR_13);
   goto abort;
  }
  VAR_10->temp[VAR_14][VAR_7] = VAR_13;

  if (VAR_10->chip->have_crit & (1 << VAR_14)) {
   VAR_13 = FUNC_3(VAR_11,
             VAR_0[VAR_14]);
   if (FUNC_8(VAR_13 < 0)) {
    VAR_12 = FUNC_0(VAR_13);
    goto abort;
   }
   VAR_10->temp[VAR_14][VAR_4] = VAR_13;
  }
 }

 VAR_15 = 0;
 for (VAR_14 = 0; VAR_14 < 3; VAR_14++) {
  VAR_13 = FUNC_3(VAR_11, FUNC_1(VAR_14));
  if (FUNC_8(VAR_13 < 0)) {
   VAR_12 = FUNC_0(VAR_13);
   goto abort;
  }
  VAR_15 = (VAR_15 << 8) | VAR_13;
 }
 VAR_10->alarms = VAR_15;
 VAR_10->last_updated = VAR_8;
 VAR_10->valid = 1;
abort:
 FUNC_6(&VAR_10->update_lock);

 return VAR_12;
}
