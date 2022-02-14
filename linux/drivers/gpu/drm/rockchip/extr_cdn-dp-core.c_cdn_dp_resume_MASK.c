
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cdn_dp_device {int suspended; int lock; int event_work; scalar_t__ fw_loaded; } ;


 struct cdn_dp_device* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct device *VAR_0)
{
 struct cdn_dp_device *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->lock);
 VAR_1->suspended = 0;
 if (VAR_1->fw_loaded)
  FUNC_3(&VAR_1->event_work);
 FUNC_2(&VAR_1->lock);

 return 0;
}
