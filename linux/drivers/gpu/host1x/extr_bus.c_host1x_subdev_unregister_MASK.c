
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_subdev {int dummy; } ;
struct host1x_device {int subdevs_lock; } ;


 int FUNC_0 (struct host1x_device*,struct host1x_subdev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct host1x_device *VAR_0,
         struct host1x_subdev *VAR_1)
{
 FUNC_1(&VAR_0->subdevs_lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->subdevs_lock);
}
