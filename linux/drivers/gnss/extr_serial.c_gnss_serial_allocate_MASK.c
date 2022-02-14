
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdev_device {int dev; } ;
struct gnss_serial {struct gnss_device* gdev; struct serdev_device* serdev; } ;
struct gnss_device {int * ops; } ;


 int VAR_0 ;
 struct gnss_serial* FUNC_0 (int) ;
 int VAR_1 ;
 struct gnss_device* FUNC_1 (int *) ;
 int FUNC_2 (struct gnss_device*) ;
 int VAR_2 ;
 int FUNC_3 (struct serdev_device*) ;
 int VAR_3 ;
 int FUNC_4 (struct gnss_device*,struct gnss_serial*) ;
 int FUNC_5 (struct gnss_serial*) ;
 struct gnss_serial* FUNC_6 (int,int ) ;
 int FUNC_7 (struct serdev_device*,int *) ;
 int FUNC_8 (struct serdev_device*,struct gnss_serial*) ;

struct gnss_serial *FUNC_9(struct serdev_device *VAR_4,
      size_t VAR_5)
{
 struct gnss_serial *VAR_6;
 struct gnss_device *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_6(sizeof(*VAR_6) + VAR_5, VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_1(&VAR_4->dev);
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto err_free_gserial;
 }

 VAR_7->ops = &VAR_2;
 FUNC_4(VAR_7, VAR_6);

 VAR_6->serdev = VAR_4;
 VAR_6->gdev = VAR_7;

 FUNC_8(VAR_4, VAR_6);
 FUNC_7(VAR_4, &VAR_3);

 VAR_8 = FUNC_3(VAR_4);
 if (VAR_8)
  goto err_put_device;

 return VAR_6;

err_put_device:
 FUNC_2(VAR_6->gdev);
err_free_gserial:
 FUNC_5(VAR_6);

 return FUNC_0(VAR_8);
}
