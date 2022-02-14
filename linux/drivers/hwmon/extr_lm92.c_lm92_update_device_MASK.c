
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm92_data {int valid; int update_lock; scalar_t__ last_updated; int * temp; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct lm92_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct lm92_data *FUNC_6(struct device *VAR_4)
{
 struct lm92_data *VAR_5 = FUNC_1(VAR_4);
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7;

 FUNC_3(&VAR_5->update_lock);

 if (FUNC_5(VAR_1, VAR_5->last_updated + VAR_0) ||
     !VAR_5->valid) {
  FUNC_0(&VAR_6->dev, "Updating lm92 data\n");
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
   VAR_5->temp[VAR_7] =
    FUNC_2(VAR_6, VAR_2[VAR_7]);
  }
  VAR_5->last_updated = VAR_1;
  VAR_5->valid = 1;
 }

 FUNC_4(&VAR_5->update_lock);

 return VAR_5;
}
