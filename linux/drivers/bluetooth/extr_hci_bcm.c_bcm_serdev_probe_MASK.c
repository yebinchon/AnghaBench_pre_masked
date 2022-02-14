
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serdev_device {int dev; } ;
struct TYPE_2__ {struct serdev_device* serdev; } ;
struct bcm_device {TYPE_1__ serdev_hu; int init_speed; int oper_speed; int shutdown; TYPE_1__* hu; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm_device*) ;
 int FUNC_1 (struct bcm_device*) ;
 int FUNC_2 (struct bcm_device*,int) ;
 int FUNC_3 (struct bcm_device*) ;
 int VAR_2 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 struct bcm_device* FUNC_6 (int *,int,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (struct serdev_device*,struct bcm_device*) ;

__attribute__((used)) static int FUNC_10(struct serdev_device *VAR_3)
{
 struct bcm_device *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_6(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->dev = &VAR_3->dev;



 VAR_4->serdev_hu.serdev = VAR_3;
 FUNC_9(VAR_3, VAR_4);

 if (FUNC_7(&VAR_3->dev))
  VAR_5 = FUNC_0(VAR_4);
 else
  VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;

 if (!VAR_4->shutdown) {
  FUNC_5(&VAR_3->dev,
    "No reset resource, using default baud rate\n");
  VAR_4->oper_speed = VAR_4->init_speed;
 }

 VAR_5 = FUNC_2(VAR_4, 0);
 if (VAR_5)
  FUNC_4(&VAR_3->dev, "Failed to power down\n");

 return FUNC_8(&VAR_4->serdev_hu, &VAR_2);
}
