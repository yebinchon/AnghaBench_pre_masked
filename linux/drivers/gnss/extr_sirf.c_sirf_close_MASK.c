
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirf_data {int open; int gdev_mutex; struct serdev_device* serdev; } ;
struct serdev_device {int dev; } ;
struct gnss_device {int dummy; } ;


 struct sirf_data* FUNC_0 (struct gnss_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sirf_data*) ;

__attribute__((used)) static void FUNC_5(struct gnss_device *VAR_0)
{
 struct sirf_data *VAR_1 = FUNC_0(VAR_0);
 struct serdev_device *VAR_2 = VAR_1->serdev;

 FUNC_4(VAR_1);

 FUNC_3(&VAR_2->dev);

 FUNC_1(&VAR_1->gdev_mutex);
 VAR_1->open = 0;
 FUNC_2(&VAR_1->gdev_mutex);
}
