
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serdev_device {int dev; } ;
struct TYPE_2__ {struct serdev_device* serdev; } ;
struct mrvl_serdev {TYPE_1__ hu; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mrvl_serdev* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int VAR_2 ;
 int FUNC_2 (struct serdev_device*,struct mrvl_serdev*) ;

__attribute__((used)) static int FUNC_3(struct serdev_device *VAR_3)
{
 struct mrvl_serdev *VAR_4;

 VAR_4 = FUNC_0(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->hu.serdev = VAR_3;
 FUNC_2(VAR_3, VAR_4);

 return FUNC_1(&VAR_4->hu, &VAR_2);
}
