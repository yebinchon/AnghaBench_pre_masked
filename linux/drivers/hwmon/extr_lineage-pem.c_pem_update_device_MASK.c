
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pem_data {int valid; int input_length; int update_lock; scalar_t__ last_updated; int fan_speed; scalar_t__ fans_supported; int input_string; int data_string; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 struct pem_data* FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pem_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct i2c_client*,int ,int ,int) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct pem_data *FUNC_8(struct device *VAR_6)
{
 struct pem_data *VAR_7 = FUNC_1(VAR_6);
 struct i2c_client *VAR_8 = VAR_7->client;
 struct pem_data *VAR_9 = VAR_7;

 FUNC_3(&VAR_7->update_lock);

 if (FUNC_6(VAR_5, VAR_7->last_updated + VAR_0) || !VAR_7->valid) {
  int VAR_10;


  VAR_10 = FUNC_5(VAR_8, VAR_2,
     VAR_7->data_string,
     sizeof(VAR_7->data_string));
  if (FUNC_7(VAR_10 < 0)) {
   VAR_9 = FUNC_0(VAR_10);
   goto abort;
  }


  if (VAR_7->input_length) {
   VAR_10 = FUNC_5(VAR_8, VAR_4,
      VAR_7->input_string,
      VAR_7->input_length);
   if (FUNC_7(VAR_10 < 0)) {
    VAR_9 = FUNC_0(VAR_10);
    goto abort;
   }
  }


  if (VAR_7->fans_supported) {
   VAR_10 = FUNC_5(VAR_8, VAR_3,
      VAR_7->fan_speed,
      sizeof(VAR_7->fan_speed));
   if (FUNC_7(VAR_10 < 0)) {
    VAR_9 = FUNC_0(VAR_10);
    goto abort;
   }
  }

  FUNC_2(VAR_8, VAR_1);

  VAR_7->last_updated = VAR_5;
  VAR_7->valid = 1;
 }
abort:
 FUNC_4(&VAR_7->update_lock);
 return VAR_9;
}
