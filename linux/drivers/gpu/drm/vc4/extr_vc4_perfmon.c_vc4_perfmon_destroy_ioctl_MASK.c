
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_perfmon {int dummy; } ;
struct TYPE_2__ {int lock; int idr; } ;
struct vc4_file {TYPE_1__ perfmon; } ;
struct vc4_dev {int v3d; } ;
struct drm_vc4_perfmon_destroy {int id; } ;
struct drm_file {struct vc4_file* driver_priv; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct vc4_perfmon* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct vc4_dev* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct vc4_perfmon*) ;

int FUNC_6(struct drm_device *VAR_2, void *VAR_3,
         struct drm_file *VAR_4)
{
 struct vc4_dev *VAR_5 = FUNC_4(VAR_2);
 struct vc4_file *VAR_6 = VAR_4->driver_priv;
 struct drm_vc4_perfmon_destroy *VAR_7 = VAR_3;
 struct vc4_perfmon *VAR_8;

 if (!VAR_5->v3d) {
  FUNC_0("Destroying perfmon no VC4 V3D probed\n");
  return -VAR_1;
 }

 FUNC_2(&VAR_6->perfmon.lock);
 VAR_8 = FUNC_1(&VAR_6->perfmon.idr, VAR_7->id);
 FUNC_3(&VAR_6->perfmon.lock);

 if (!VAR_8)
  return -VAR_0;

 FUNC_5(VAR_8);
 return 0;
}
