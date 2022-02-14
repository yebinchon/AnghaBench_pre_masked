
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_minor {int index; int kdev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_minor*) ;
 int FUNC_4 (struct drm_minor*,int ,int ) ;
 int VAR_0 ;
 struct drm_minor** FUNC_5 (struct drm_device*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *,struct drm_minor*,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct drm_device *VAR_3, unsigned int VAR_4)
{
 struct drm_minor *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 FUNC_0("\n");

 VAR_5 = *FUNC_5(VAR_3, VAR_4);
 if (!VAR_5)
  return 0;

 VAR_7 = FUNC_4(VAR_5, VAR_5->index, VAR_0);
 if (VAR_7) {
  FUNC_1("DRM: Failed to initialize /sys/kernel/debug/dri.\n");
  goto err_debugfs;
 }

 VAR_7 = FUNC_2(VAR_5->kdev);
 if (VAR_7)
  goto err_debugfs;


 FUNC_7(&VAR_1, VAR_6);
 FUNC_6(&VAR_2, VAR_5, VAR_5->index);
 FUNC_8(&VAR_1, VAR_6);

 FUNC_0("new minor registered %d\n", VAR_5->index);
 return 0;

err_debugfs:
 FUNC_3(VAR_5);
 return VAR_7;
}
