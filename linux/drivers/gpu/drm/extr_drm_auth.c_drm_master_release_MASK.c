
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_master {int magic_map; } ;
struct drm_file {struct drm_master* master; scalar_t__ is_master; scalar_t__ magic; TYPE_1__* minor; } ;
struct drm_device {int master_mutex; struct drm_master* master; } ;
struct TYPE_2__ {struct drm_device* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_device*,struct drm_file*) ;
 int FUNC_2 (struct drm_file*) ;
 int FUNC_3 (struct drm_master*) ;
 int FUNC_4 (struct drm_device*,struct drm_master*) ;
 int FUNC_5 (struct drm_master**) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct drm_file *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->minor->dev;
 struct drm_master *VAR_3 = VAR_1->master;

 FUNC_7(&VAR_2->master_mutex);
 if (VAR_1->magic)
  FUNC_6(&VAR_1->master->magic_map, VAR_1->magic);

 if (!FUNC_2(VAR_1))
  goto out;

 FUNC_4(VAR_2, VAR_3);

 if (VAR_2->master == VAR_1->master)
  FUNC_1(VAR_2, VAR_1);
out:
 if (FUNC_0(VAR_2, VAR_0) && VAR_1->is_master) {



  FUNC_3(VAR_3);
 }


 if (VAR_1->master)
  FUNC_5(&VAR_1->master);
 FUNC_8(&VAR_2->master_mutex);
}
