
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * parent; } ;
struct tpic2810 {TYPE_1__ chip; int lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct tpic2810* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (TYPE_1__*,struct tpic2810*) ;
 int FUNC_3 (struct i2c_client*,struct tpic2810*) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_3,
     const struct i2c_device_id *VAR_4)
{
 struct tpic2810 *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(&VAR_3->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_3(VAR_3, VAR_5);

 VAR_5->chip = VAR_2;
 VAR_5->chip.parent = &VAR_3->dev;

 VAR_5->client = VAR_3;

 FUNC_4(&VAR_5->lock);

 VAR_6 = FUNC_2(&VAR_5->chip, VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_3->dev, "Unable to register gpiochip\n");
  return VAR_6;
 }

 return 0;
}
