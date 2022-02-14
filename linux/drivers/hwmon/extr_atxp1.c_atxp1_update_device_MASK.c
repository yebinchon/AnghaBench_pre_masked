
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {void* gpio2; void* gpio1; void* cpu_vid; void* vid; } ;
struct atxp1_data {int valid; int update_lock; TYPE_1__ reg; scalar_t__ last_updated; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct atxp1_data* FUNC_0 (struct device*) ;
 void* FUNC_1 (struct i2c_client*,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static struct atxp1_data *FUNC_5(struct device *VAR_6)
{
 struct atxp1_data *VAR_7 = FUNC_0(VAR_6);
 struct i2c_client *VAR_8 = VAR_7->client;

 FUNC_2(&VAR_7->update_lock);

 if (FUNC_4(VAR_5, VAR_7->last_updated + VAR_4) || !VAR_7->valid) {


  VAR_7->reg.vid = FUNC_1(VAR_8, VAR_3);
  VAR_7->reg.cpu_vid = FUNC_1(VAR_8,
            VAR_0);
  VAR_7->reg.gpio1 = FUNC_1(VAR_8, VAR_1);
  VAR_7->reg.gpio2 = FUNC_1(VAR_8, VAR_2);

  VAR_7->valid = 1;
 }

 FUNC_3(&VAR_7->update_lock);

 return VAR_7;
}
