
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gnss_device {int dev; int cdev; int flags; TYPE_1__* ops; } ;
struct TYPE_2__ {int * write_raw; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*,int) ;

int FUNC_2(struct gnss_device *VAR_1)
{
 int VAR_2;


 if (VAR_1->ops->write_raw != ((void*)0))
  VAR_1->flags |= VAR_0;

 VAR_2 = FUNC_0(&VAR_1->cdev, &VAR_1->dev);
 if (VAR_2) {
  FUNC_1(&VAR_1->dev, "failed to add device: %d\n", VAR_2);
  return VAR_2;
 }

 return 0;
}
