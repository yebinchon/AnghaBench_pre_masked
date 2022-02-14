
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct emc6w201_data {int valid; int update_lock; scalar_t__ last_updated; void*** fan; void*** temp; void*** in; struct i2c_client* client; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_0 ;
 struct emc6w201_data* FUNC_8 (struct device*) ;
 void* FUNC_9 (struct i2c_client*,int ) ;
 void* FUNC_10 (struct i2c_client*,int ) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct emc6w201_data *FUNC_14(struct device *VAR_5)
{
 struct emc6w201_data *VAR_6 = FUNC_8(VAR_5);
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8;

 FUNC_11(&VAR_6->update_lock);

 if (FUNC_13(VAR_2, VAR_6->last_updated + VAR_0) || !VAR_6->valid) {
  for (VAR_8 = 0; VAR_8 < 6; VAR_8++) {
   VAR_6->in[VAR_1][VAR_8] =
    FUNC_10(VAR_7,
      FUNC_2(VAR_8));
   VAR_6->in[VAR_4][VAR_8] =
    FUNC_10(VAR_7,
      FUNC_4(VAR_8));
   VAR_6->in[VAR_3][VAR_8] =
    FUNC_10(VAR_7,
      FUNC_3(VAR_8));
  }

  for (VAR_8 = 0; VAR_8 < 6; VAR_8++) {
   VAR_6->temp[VAR_1][VAR_8] =
    FUNC_10(VAR_7,
      FUNC_5(VAR_8));
   VAR_6->temp[VAR_4][VAR_8] =
    FUNC_10(VAR_7,
      FUNC_7(VAR_8));
   VAR_6->temp[VAR_3][VAR_8] =
    FUNC_10(VAR_7,
      FUNC_6(VAR_8));
  }

  for (VAR_8 = 0; VAR_8 < 5; VAR_8++) {
   VAR_6->fan[VAR_1][VAR_8] =
    FUNC_9(VAR_7,
      FUNC_0(VAR_8));
   VAR_6->fan[VAR_4][VAR_8] =
    FUNC_9(VAR_7,
      FUNC_1(VAR_8));
  }

  VAR_6->last_updated = VAR_2;
  VAR_6->valid = 1;
 }

 FUNC_12(&VAR_6->update_lock);

 return VAR_6;
}
