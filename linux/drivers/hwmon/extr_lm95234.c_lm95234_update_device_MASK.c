
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm95234_data {int valid; int status; int update_lock; scalar_t__ last_updated; int * temp; scalar_t__ interval; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct i2c_client*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct lm95234_data*,struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct lm95234_data *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_4->client;
 int VAR_6;

 FUNC_4(&VAR_4->update_lock);

 if (FUNC_6(VAR_3, VAR_4->last_updated + VAR_4->interval) ||
     !VAR_4->valid) {
  int VAR_7;

  if (!VAR_4->valid) {
   VAR_6 = FUNC_2(VAR_4, VAR_5);
   if (VAR_6 < 0)
    goto abort;
  }

  VAR_4->valid = 0;
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4->temp); VAR_7++) {
   VAR_6 = FUNC_3(VAR_5, VAR_7, &VAR_4->temp[VAR_7]);
   if (VAR_6 < 0)
    goto abort;
  }

  VAR_6 = FUNC_1(VAR_5, VAR_0);
  if (VAR_6 < 0)
   goto abort;
  VAR_4->status = VAR_6;

  VAR_6 = FUNC_1(VAR_5, VAR_1);
  if (VAR_6 < 0)
   goto abort;
  VAR_4->status |= VAR_6 << 8;

  VAR_6 = FUNC_1(VAR_5, VAR_2);
  if (VAR_6 < 0)
   goto abort;
  VAR_4->status |= VAR_6 << 16;

  VAR_4->last_updated = VAR_3;
  VAR_4->valid = 1;
 }
 VAR_6 = 0;
abort:
 FUNC_5(&VAR_4->update_lock);

 return VAR_6;
}
