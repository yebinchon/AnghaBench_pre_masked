
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirf_data {int open; int gdev_mutex; struct serdev_device* serdev; } ;
struct serdev_device {int dev; } ;
struct gnss_device {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 struct sirf_data* FUNC_1 (struct gnss_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sirf_data*) ;
 int FUNC_7 (struct sirf_data*) ;

__attribute__((used)) static int FUNC_8(struct gnss_device *VAR_0)
{
 struct sirf_data *VAR_1 = FUNC_1(VAR_0);
 struct serdev_device *VAR_2 = VAR_1->serdev;
 int VAR_3;

 FUNC_2(&VAR_1->gdev_mutex);
 VAR_1->open = 1;
 FUNC_3(&VAR_1->gdev_mutex);

 VAR_3 = FUNC_7(VAR_1);
 if (VAR_3) {
  FUNC_2(&VAR_1->gdev_mutex);
  VAR_1->open = 0;
  FUNC_3(&VAR_1->gdev_mutex);
  return VAR_3;
 }

 VAR_3 = FUNC_4(&VAR_2->dev);
 if (VAR_3 < 0) {
  FUNC_0(&VAR_0->dev, "failed to runtime resume: %d\n", VAR_3);
  FUNC_5(&VAR_2->dev);
  goto err_close;
 }

 return 0;

err_close:
 FUNC_6(VAR_1);

 FUNC_2(&VAR_1->gdev_mutex);
 VAR_1->open = 0;
 FUNC_3(&VAR_1->gdev_mutex);

 return VAR_3;
}
