
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mma8450 {struct input_polled_dev* idev; struct i2c_client* client; } ;
struct input_polled_dev {TYPE_2__* input; int close; int open; int poll_interval_max; int poll_interval; int poll; struct mma8450* private; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct TYPE_3__ {int bustype; } ;
struct TYPE_4__ {int evbit; TYPE_1__ id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*) ;
 struct input_polled_dev* FUNC_2 (int *) ;
 struct mma8450* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct input_polled_dev*) ;
 int FUNC_5 (TYPE_2__*,int ,int,int,int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_13,
    const struct i2c_device_id *VAR_14)
{
 struct input_polled_dev *VAR_15;
 struct mma8450 *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_3(&VAR_13->dev, sizeof(*VAR_16), VAR_6);
 if (!VAR_16)
  return -VAR_4;

 VAR_15 = FUNC_2(&VAR_13->dev);
 if (!VAR_15)
  return -VAR_4;

 VAR_16->client = VAR_13;
 VAR_16->idev = VAR_15;

 VAR_15->private = VAR_16;
 VAR_15->input->name = VAR_7;
 VAR_15->input->id.bustype = VAR_3;
 VAR_15->poll = VAR_12;
 VAR_15->poll_interval = VAR_8;
 VAR_15->poll_interval_max = VAR_9;
 VAR_15->open = VAR_11;
 VAR_15->close = VAR_10;

 FUNC_0(VAR_5, VAR_15->input->evbit);
 FUNC_5(VAR_15->input, VAR_0, -2048, 2047, 32, 32);
 FUNC_5(VAR_15->input, VAR_1, -2048, 2047, 32, 32);
 FUNC_5(VAR_15->input, VAR_2, -2048, 2047, 32, 32);

 VAR_17 = FUNC_4(VAR_15);
 if (VAR_17) {
  FUNC_1(&VAR_13->dev, "failed to register polled input device\n");
  return VAR_17;
 }

 return 0;
}
