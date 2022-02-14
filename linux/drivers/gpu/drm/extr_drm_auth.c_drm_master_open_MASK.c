
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int master; TYPE_1__* minor; } ;
struct drm_device {int master_mutex; int master; } ;
struct TYPE_2__ {struct drm_device* dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*,struct drm_file*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct drm_file *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->minor->dev;
 int VAR_2 = 0;



 FUNC_2(&VAR_1->master_mutex);
 if (!VAR_1->master)
  VAR_2 = FUNC_1(VAR_1, VAR_0);
 else
  VAR_0->master = FUNC_0(VAR_1->master);
 FUNC_3(&VAR_1->master_mutex);

 return VAR_2;
}
