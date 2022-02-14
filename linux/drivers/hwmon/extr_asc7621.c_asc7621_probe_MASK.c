
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;
struct asc7621_data {int class_dev; int update_lock; } ;
struct TYPE_4__ {int dev_attr; } ;
struct TYPE_5__ {TYPE_1__ sda; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_client*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 struct asc7621_data* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct i2c_client*,struct asc7621_data*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct i2c_client *VAR_5, const struct i2c_device_id *VAR_6)
{
 struct asc7621_data *VAR_7;
 int VAR_8, VAR_9;

 if (!FUNC_8(VAR_5->adapter, VAR_3))
  return -VAR_0;

 VAR_7 = FUNC_6(&VAR_5->dev, sizeof(struct asc7621_data),
       VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 FUNC_9(VAR_5, VAR_7);
 FUNC_10(&VAR_7->update_lock);


 FUNC_3(VAR_5);


 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  VAR_9 =
      FUNC_4(&VAR_5->dev,
           &(VAR_4[VAR_8].sda.dev_attr));
  if (VAR_9)
   goto exit_remove;
 }

 VAR_7->class_dev = FUNC_7(&VAR_5->dev);
 if (FUNC_1(VAR_7->class_dev)) {
  VAR_9 = FUNC_2(VAR_7->class_dev);
  goto exit_remove;
 }

 return 0;

exit_remove:
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  FUNC_5(&VAR_5->dev,
       &(VAR_4[VAR_8].sda.dev_attr));
 }

 return VAR_9;
}
