
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mode_revoke_lease {int lessee_id; } ;
struct drm_master {struct drm_master* lessor; } ;
struct drm_file {struct drm_master* master; } ;
struct TYPE_2__ {int idr_mutex; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_master* FUNC_1 (struct drm_master*,int ) ;
 int FUNC_2 (struct drm_master*) ;
 int FUNC_3 (struct drm_device*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct drm_device *VAR_4,
    void *VAR_5, struct drm_file *VAR_6)
{
 struct drm_mode_revoke_lease *VAR_7 = VAR_5;
 struct drm_master *VAR_8 = VAR_6->master;
 struct drm_master *VAR_9;
 int VAR_10 = 0;

 FUNC_0("revoke lease for %d\n", VAR_7->lessee_id);


 if (!FUNC_3(VAR_4, VAR_0))
  return -VAR_3;

 FUNC_4(&VAR_4->mode_config.idr_mutex);

 VAR_9 = FUNC_1(VAR_8, VAR_7->lessee_id);


 if (!VAR_9) {
  VAR_10 = -VAR_2;
  goto fail;
 }


 if (VAR_9->lessor != VAR_8) {
  VAR_10 = -VAR_1;
  goto fail;
 }

 FUNC_2(VAR_9);

fail:
 FUNC_5(&VAR_4->mode_config.idr_mutex);

 return VAR_10;
}
