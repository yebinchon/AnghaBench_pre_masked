
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_perfmon {scalar_t__* events; unsigned int ncounters; int refcnt; } ;
struct TYPE_2__ {int lock; int idr; } ;
struct vc4_file {TYPE_1__ perfmon; } ;
struct vc4_dev {int v3d; } ;
struct drm_vc4_perfmon_create {unsigned int ncounters; scalar_t__* events; int id; } ;
struct drm_file {struct vc4_file* driver_priv; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,struct vc4_perfmon*,int ,int ,int ) ;
 int FUNC_2 (struct vc4_perfmon*) ;
 struct vc4_perfmon* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct vc4_perfmon*,int ,unsigned int) ;
 struct vc4_dev* FUNC_8 (struct drm_device*) ;

int FUNC_9(struct drm_device *VAR_9, void *VAR_10,
        struct drm_file *VAR_11)
{
 struct vc4_dev *VAR_12 = FUNC_8(VAR_9);
 struct vc4_file *VAR_13 = VAR_11->driver_priv;
 struct drm_vc4_perfmon_create *VAR_14 = VAR_10;
 struct vc4_perfmon *VAR_15;
 unsigned int VAR_16;
 int VAR_17;

 if (!VAR_12->v3d) {
  FUNC_0("Creating perfmon no VC4 V3D probed\n");
  return -VAR_2;
 }


 if (VAR_14->ncounters > VAR_0 ||
     !VAR_14->ncounters)
  return -VAR_1;


 for (VAR_16 = 0; VAR_16 < VAR_14->ncounters; VAR_16++) {
  if (VAR_14->events[VAR_16] >= VAR_5)
   return -VAR_1;
 }

 VAR_15 = FUNC_3(FUNC_7(VAR_15, VAR_8, VAR_14->ncounters),
     VAR_4);
 if (!VAR_15)
  return -VAR_3;

 for (VAR_16 = 0; VAR_16 < VAR_14->ncounters; VAR_16++)
  VAR_15->events[VAR_16] = VAR_14->events[VAR_16];

 VAR_15->ncounters = VAR_14->ncounters;

 FUNC_6(&VAR_15->refcnt, 1);

 FUNC_4(&VAR_13->perfmon.lock);
 VAR_17 = FUNC_1(&VAR_13->perfmon.idr, VAR_15, VAR_7,
   VAR_6, VAR_4);
 FUNC_5(&VAR_13->perfmon.lock);

 if (VAR_17 < 0) {
  FUNC_2(VAR_15);
  return VAR_17;
 }

 VAR_14->id = VAR_17;
 return 0;
}
