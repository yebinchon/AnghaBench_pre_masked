
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirf_data {int active; int gdev_mutex; scalar_t__ open; int power_wait; int wakeup; struct gnss_device* gdev; } ;
struct serdev_device {int dummy; } ;
struct gnss_device {int dummy; } ;


 int FUNC_0 (struct gnss_device*,unsigned char const*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sirf_data* FUNC_3 (struct serdev_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct serdev_device *VAR_0,
    const unsigned char *VAR_1, size_t VAR_2)
{
 struct sirf_data *VAR_3 = FUNC_3(VAR_0);
 struct gnss_device *VAR_4 = VAR_3->gdev;
 int VAR_5 = 0;

 if (!VAR_3->wakeup && !VAR_3->active) {
  VAR_3->active = 1;
  FUNC_4(&VAR_3->power_wait);
 }

 FUNC_1(&VAR_3->gdev_mutex);
 if (VAR_3->open)
  VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_2);
 FUNC_2(&VAR_3->gdev_mutex);

 return VAR_5;
}
