
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct device {int dummy; } ;
struct adm1029_data {int valid; int update_lock; scalar_t__ last_updated; void** fan_div; void** fan; void** temp; struct i2c_client* client; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 struct adm1029_data* FUNC_2 (struct device*) ;
 void* FUNC_3 (struct i2c_client*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct adm1029_data *FUNC_7(struct device *VAR_5)
{
 struct adm1029_data *VAR_6 = FUNC_2(VAR_5);
 struct i2c_client *VAR_7 = VAR_6->client;

 FUNC_4(&VAR_6->update_lock);




 if (FUNC_6(VAR_4, VAR_6->last_updated + VAR_3 * 2) || !VAR_6->valid) {
  int VAR_8;

  FUNC_1(&VAR_7->dev, "Updating adm1029 data\n");

  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++) {
   VAR_6->temp[VAR_8] =
       FUNC_3(VAR_7,
           VAR_2[VAR_8]);
  }
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_0); VAR_8++) {
   VAR_6->fan[VAR_8] =
       FUNC_3(VAR_7,
           VAR_0[VAR_8]);
  }
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++) {
   VAR_6->fan_div[VAR_8] =
       FUNC_3(VAR_7,
           VAR_1[VAR_8]);
  }

  VAR_6->last_updated = VAR_4;
  VAR_6->valid = 1;
 }

 FUNC_5(&VAR_6->update_lock);

 return VAR_6;
}
