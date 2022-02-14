
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {TYPE_1__* master; } ;
struct drm_device {int master_mutex; int master; } ;
struct TYPE_2__ {int lessee_id; int * lessor; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*,struct drm_file*) ;
 int FUNC_2 (struct drm_file*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct drm_device *VAR_1, void *VAR_2,
    struct drm_file *VAR_3)
{
 int VAR_4 = -VAR_0;

 FUNC_3(&VAR_1->master_mutex);
 if (!FUNC_2(VAR_3))
  goto out_unlock;

 if (!VAR_1->master)
  goto out_unlock;

 if (VAR_3->master->lessor != ((void*)0)) {
  FUNC_0("Attempt to drop lessee %d as master\n", VAR_3->master->lessee_id);
  VAR_4 = -VAR_0;
  goto out_unlock;
 }

 VAR_4 = 0;
 FUNC_1(VAR_1, VAR_3);
out_unlock:
 FUNC_4(&VAR_1->master_mutex);
 return VAR_4;
}
