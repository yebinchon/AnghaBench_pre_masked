
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct vc4_perfmon {int ncounters; int counters; } ;
struct TYPE_2__ {int lock; int idr; } ;
struct vc4_file {TYPE_1__ perfmon; } ;
struct vc4_dev {int v3d; } ;
struct drm_vc4_perfmon_get_values {int values_ptr; int id; } ;
struct drm_file {struct vc4_file* driver_priv; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 struct vc4_perfmon* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct vc4_dev* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct vc4_perfmon*) ;
 int FUNC_8 (struct vc4_perfmon*) ;

int FUNC_9(struct drm_device *VAR_3, void *VAR_4,
     struct drm_file *VAR_5)
{
 struct vc4_dev *VAR_6 = FUNC_5(VAR_3);
 struct vc4_file *VAR_7 = VAR_5->driver_priv;
 struct drm_vc4_perfmon_get_values *VAR_8 = VAR_4;
 struct vc4_perfmon *VAR_9;
 int VAR_10;

 if (!VAR_6->v3d) {
  FUNC_0("Getting perfmon no VC4 V3D probed\n");
  return -VAR_2;
 }

 FUNC_3(&VAR_7->perfmon.lock);
 VAR_9 = FUNC_2(&VAR_7->perfmon.idr, VAR_8->id);
 FUNC_7(VAR_9);
 FUNC_4(&VAR_7->perfmon.lock);

 if (!VAR_9)
  return -VAR_1;

 if (FUNC_1(FUNC_6(VAR_8->values_ptr), VAR_9->counters,
    VAR_9->ncounters * sizeof(u64)))
  VAR_10 = -VAR_0;
 else
  VAR_10 = 0;

 FUNC_8(VAR_9);
 return VAR_10;
}
