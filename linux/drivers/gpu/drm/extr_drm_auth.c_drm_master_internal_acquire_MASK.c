
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int master_mutex; scalar_t__ master; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(struct drm_device *VAR_0)
{
 FUNC_0(&VAR_0->master_mutex);
 if (VAR_0->master) {
  FUNC_1(&VAR_0->master_mutex);
  return 0;
 }

 return 1;
}
