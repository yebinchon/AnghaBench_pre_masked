
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vcnl4035_data {TYPE_3__* client; TYPE_4__* drdy_trigger0; } ;
struct TYPE_8__ {int parent; } ;
struct iio_dev {TYPE_2__ dev; int id; int name; } ;
struct TYPE_7__ {int parent; } ;
struct TYPE_10__ {int * ops; TYPE_1__ dev; } ;
struct TYPE_9__ {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 TYPE_4__* FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (int ,struct iio_dev*,int *,int ,int *) ;
 int FUNC_4 (int *,int ,int *,int ,int,int ,struct iio_dev*) ;
 struct vcnl4035_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (TYPE_4__*,struct iio_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_8)
{
 int VAR_9;
 struct vcnl4035_data *VAR_10 = FUNC_5(VAR_8);

 VAR_10->drdy_trigger0 = FUNC_1(
   VAR_8->dev.parent,
   "%s-dev%d", VAR_8->name, VAR_8->id);
 if (!VAR_10->drdy_trigger0)
  return -VAR_0;

 VAR_10->drdy_trigger0->dev.parent = VAR_8->dev.parent;
 VAR_10->drdy_trigger0->ops = &VAR_7;
 FUNC_6(VAR_10->drdy_trigger0, VAR_8);
 VAR_9 = FUNC_2(VAR_8->dev.parent,
     VAR_10->drdy_trigger0);
 if (VAR_9) {
  FUNC_0(&VAR_10->client->dev, "iio trigger register failed\n");
  return VAR_9;
 }


 VAR_9 = FUNC_3(VAR_8->dev.parent, VAR_8,
     ((void*)0), VAR_6,
     &VAR_4);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_10->client->dev, "iio triggered buffer setup failed\n");
  return VAR_9;
 }


 VAR_9 = FUNC_4(&VAR_10->client->dev, VAR_10->client->irq,
   ((void*)0), VAR_5,
   VAR_2 | VAR_1,
   VAR_3, VAR_8);
 if (VAR_9 < 0)
  FUNC_0(&VAR_10->client->dev, "request irq %d for trigger0 failed\n",
    VAR_10->client->irq);
 return VAR_9;
}
