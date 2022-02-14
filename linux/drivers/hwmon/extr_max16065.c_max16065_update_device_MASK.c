
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max16065_data {int valid; int num_adc; int update_lock; scalar_t__ last_updated; void** fault; void* curr_sense; void** adc; scalar_t__ have_current; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 size_t VAR_3 ;
 struct max16065_data* FUNC_3 (struct device*) ;
 void* FUNC_4 (struct i2c_client*,int ) ;
 scalar_t__ VAR_4 ;
 void* FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct max16065_data *FUNC_9(struct device *VAR_5)
{
 struct max16065_data *VAR_6 = FUNC_3(VAR_5);
 struct i2c_client *VAR_7 = VAR_6->client;

 FUNC_6(&VAR_6->update_lock);
 if (FUNC_8(VAR_4, VAR_6->last_updated + VAR_0) || !VAR_6->valid) {
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_6->num_adc; VAR_8++)
   VAR_6->adc[VAR_8]
     = FUNC_5(VAR_7, FUNC_1(VAR_8));

  if (VAR_6->have_current) {
   VAR_6->adc[VAR_3]
     = FUNC_5(VAR_7, VAR_1);
   VAR_6->curr_sense
     = FUNC_4(VAR_7,
           VAR_2);
  }

  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6->num_adc, 8); VAR_8++)
   VAR_6->fault[VAR_8]
     = FUNC_4(VAR_7, FUNC_2(VAR_8));

  VAR_6->last_updated = VAR_4;
  VAR_6->valid = 1;
 }
 FUNC_7(&VAR_6->update_lock);
 return VAR_6;
}
