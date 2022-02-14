
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * parent; int * fops; int name; int minor; } ;
struct ipmb_dev {TYPE_2__ miscdev; struct i2c_client* client; int file_mutex; int request_queue; int request_queue_len; int wait_queue; int lock; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; TYPE_1__* adapter; } ;
struct TYPE_4__ {int nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,char*,char*,int ) ;
 struct ipmb_dev* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct i2c_client*,struct ipmb_dev*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_5,
   const struct i2c_device_id *VAR_6)
{
 struct ipmb_dev *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(&VAR_5->dev, sizeof(*VAR_7),
     VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_10(&VAR_7->lock);
 FUNC_6(&VAR_7->wait_queue);
 FUNC_1(&VAR_7->request_queue_len, 0);
 FUNC_0(&VAR_7->request_queue);

 FUNC_9(&VAR_7->file_mutex);

 VAR_7->miscdev.minor = VAR_2;

 VAR_7->miscdev.name = FUNC_2(&VAR_5->dev, VAR_1,
      "%s%d", "ipmb-",
      VAR_5->adapter->nr);
 VAR_7->miscdev.fops = &VAR_3;
 VAR_7->miscdev.parent = &VAR_5->dev;
 VAR_8 = FUNC_8(&VAR_7->miscdev);
 if (VAR_8)
  return VAR_8;

 VAR_7->client = VAR_5;
 FUNC_4(VAR_5, VAR_7);
 VAR_8 = FUNC_5(VAR_5, VAR_4);
 if (VAR_8) {
  FUNC_7(&VAR_7->miscdev);
  return VAR_8;
 }

 return 0;
}
