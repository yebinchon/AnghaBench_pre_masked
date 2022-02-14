
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm95241_data {int valid; int update_lock; scalar_t__ last_updated; void* status; void** temp; int interval; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*) ;
 struct lm95241_data* FUNC_2 (struct device*) ;
 void* FUNC_3 (struct i2c_client*,int ) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct lm95241_data *FUNC_8(struct device *VAR_3)
{
 struct lm95241_data *VAR_4 = FUNC_2(VAR_3);
 struct i2c_client *VAR_5 = VAR_4->client;

 FUNC_5(&VAR_4->update_lock);

 if (FUNC_7(VAR_1, VAR_4->last_updated
         + FUNC_4(VAR_4->interval)) ||
     !VAR_4->valid) {
  int VAR_6;

  FUNC_1(VAR_3, "Updating lm95241 data.\n");
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++)
   VAR_4->temp[VAR_6]
     = FUNC_3(VAR_5,
           VAR_2[VAR_6]);

  VAR_4->status = FUNC_3(VAR_5,
       VAR_0);
  VAR_4->last_updated = VAR_1;
  VAR_4->valid = 1;
 }

 FUNC_6(&VAR_4->update_lock);

 return VAR_4;
}
