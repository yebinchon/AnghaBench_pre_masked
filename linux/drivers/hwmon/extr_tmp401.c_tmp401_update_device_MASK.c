
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmp401_data {unsigned long last_updated; int valid; scalar_t__ kind; int* status; int config; int temp_crit_hyst; int update_lock; int update_interval; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int*) ;
 struct tmp401_data* FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 struct tmp401_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 unsigned long VAR_11 ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (struct i2c_client*,struct tmp401_data*) ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static struct tmp401_data *FUNC_9(struct device *VAR_13)
{
 struct tmp401_data *VAR_14 = FUNC_2(VAR_13);
 struct i2c_client *VAR_15 = VAR_14->client;
 struct tmp401_data *VAR_16 = VAR_14;
 int VAR_17, VAR_18;
 unsigned long VAR_19;

 FUNC_5(&VAR_14->update_lock);

 VAR_19 = VAR_14->last_updated +
        FUNC_4(VAR_14->update_interval);
 if (FUNC_7(VAR_11, VAR_19) || !VAR_14->valid) {
  if (VAR_14->kind != VAR_12) {




   VAR_18 = FUNC_3(VAR_15, VAR_1);
   if (VAR_18 < 0) {
    VAR_16 = FUNC_1(VAR_18);
    goto abort;
   }
   VAR_14->status[0] =
     (VAR_18 & VAR_8) >> 1;
   VAR_14->status[1] =
     ((VAR_18 & VAR_7) >> 2) |
     ((VAR_18 & VAR_4) >> 5);
   VAR_14->status[2] =
     ((VAR_18 & VAR_6) >> 3) |
     ((VAR_18 & VAR_3) >> 6);
   VAR_14->status[3] = VAR_18 & (VAR_2
      | VAR_5);
  } else {
   for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_14->status); VAR_17++) {
    VAR_18 = FUNC_3(VAR_15,
       VAR_10[VAR_17]);
    if (VAR_18 < 0) {
     VAR_16 = FUNC_1(VAR_18);
     goto abort;
    }
    VAR_14->status[VAR_17] = VAR_18;
   }
  }

  VAR_18 = FUNC_3(VAR_15, VAR_0);
  if (VAR_18 < 0) {
   VAR_16 = FUNC_1(VAR_18);
   goto abort;
  }
  VAR_14->config = VAR_18;
  VAR_18 = FUNC_8(VAR_15, VAR_14);
  if (VAR_18 < 0) {
   VAR_16 = FUNC_1(VAR_18);
   goto abort;
  }
  VAR_18 = FUNC_3(VAR_15, VAR_9);
  if (VAR_18 < 0) {
   VAR_16 = FUNC_1(VAR_18);
   goto abort;
  }
  VAR_14->temp_crit_hyst = VAR_18;

  VAR_14->last_updated = VAR_11;
  VAR_14->valid = 1;
 }

abort:
 FUNC_6(&VAR_14->update_lock);
 return VAR_16;
}
