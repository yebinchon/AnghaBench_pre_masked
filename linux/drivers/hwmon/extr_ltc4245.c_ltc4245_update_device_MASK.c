
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc4245_data {int valid; int update_lock; scalar_t__ last_updated; scalar_t__* vregs; scalar_t__* cregs; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 struct ltc4245_data* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct i2c_client*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct ltc4245_data *FUNC_8(struct device *VAR_2)
{
 struct ltc4245_data *VAR_3 = FUNC_1(VAR_2);
 struct i2c_client *VAR_4 = VAR_3->client;
 s32 VAR_5;
 int VAR_6;

 FUNC_4(&VAR_3->update_lock);

 if (FUNC_6(VAR_1, VAR_3->last_updated + VAR_0) || !VAR_3->valid) {


  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->cregs); VAR_6++) {
   VAR_5 = FUNC_2(VAR_4, VAR_6);
   if (FUNC_7(VAR_5 < 0))
    VAR_3->cregs[VAR_6] = 0;
   else
    VAR_3->cregs[VAR_6] = VAR_5;
  }


  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->vregs); VAR_6++) {
   VAR_5 = FUNC_2(VAR_4, VAR_6+0x10);
   if (FUNC_7(VAR_5 < 0))
    VAR_3->vregs[VAR_6] = 0;
   else
    VAR_3->vregs[VAR_6] = VAR_5;
  }


  FUNC_3(VAR_2);

  VAR_3->last_updated = VAR_1;
  VAR_3->valid = 1;
 }

 FUNC_5(&VAR_3->update_lock);

 return VAR_3;
}
