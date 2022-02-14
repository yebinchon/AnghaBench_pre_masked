
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int devt; } ;
struct tpm_chip {int flags; int dev_num; TYPE_1__ devs; int cdevs; TYPE_1__ dev; int cdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int ,int ,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,struct tpm_chip*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct tpm_chip *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(&VAR_3->cdev, &VAR_3->dev);
 if (VAR_4) {
  FUNC_3(&VAR_3->dev,
   "unable to cdev_device_add() %s, major %d, minor %d, err=%d\n",
   FUNC_4(&VAR_3->dev), FUNC_0(VAR_3->dev.devt),
   FUNC_1(VAR_3->dev.devt), VAR_4);
  return VAR_4;
 }

 if (VAR_3->flags & VAR_0) {
  VAR_4 = FUNC_2(&VAR_3->cdevs, &VAR_3->devs);
  if (VAR_4) {
   FUNC_3(&VAR_3->devs,
    "unable to cdev_device_add() %s, major %d, minor %d, err=%d\n",
    FUNC_4(&VAR_3->devs), FUNC_0(VAR_3->devs.devt),
    FUNC_1(VAR_3->devs.devt), VAR_4);
   return VAR_4;
  }
 }


 FUNC_6(&VAR_2);
 FUNC_5(&VAR_1, VAR_3, VAR_3->dev_num);
 FUNC_7(&VAR_2);

 return VAR_4;
}
