
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pca9532_led {int id; struct i2c_client* client; } ;
struct pca9532_data {int update_lock; TYPE_1__* chip_info; } ;
struct i2c_client {int dummy; } ;
typedef enum pca9532_state { ____Placeholder_pca9532_state } pca9532_state ;
struct TYPE_2__ {int num_leds; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct pca9532_data* FUNC_2 (struct i2c_client*) ;
 char FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static enum pca9532_state FUNC_6(struct pca9532_led *VAR_0)
{
 struct i2c_client *VAR_1 = VAR_0->client;
 struct pca9532_data *VAR_2 = FUNC_2(VAR_1);
 u8 VAR_3 = VAR_2->chip_info->num_leds;
 char VAR_4;
 enum pca9532_state VAR_5;

 FUNC_4(&VAR_2->update_lock);
 VAR_4 = FUNC_3(VAR_1, FUNC_1(VAR_3, VAR_0->id));
 VAR_5 = VAR_4 >> FUNC_0(VAR_0->id)/2;
 FUNC_5(&VAR_2->update_lock);
 return VAR_5;
}
