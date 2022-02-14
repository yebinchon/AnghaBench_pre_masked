
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cdn_dp_device {int suspended; int lock; scalar_t__ active; } ;


 int FUNC_0 (struct cdn_dp_device*) ;
 struct cdn_dp_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct device *VAR_0)
{
 struct cdn_dp_device *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = 0;

 FUNC_2(&VAR_1->lock);
 if (VAR_1->active)
  VAR_2 = FUNC_0(VAR_1);
 VAR_1->suspended = 1;
 FUNC_3(&VAR_1->lock);

 return VAR_2;
}
