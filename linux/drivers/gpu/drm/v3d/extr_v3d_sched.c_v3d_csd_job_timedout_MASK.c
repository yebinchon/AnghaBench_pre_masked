
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v3d_dev {int dummy; } ;
struct TYPE_2__ {struct v3d_dev* v3d; } ;
struct v3d_csd_job {scalar_t__ timedout_batches; TYPE_1__ base; } ;
struct drm_sched_job {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct v3d_csd_job* FUNC_1 (struct drm_sched_job*) ;
 int FUNC_2 (struct v3d_dev*,struct drm_sched_job*) ;

__attribute__((used)) static void
FUNC_3(struct drm_sched_job *VAR_1)
{
 struct v3d_csd_job *VAR_2 = FUNC_1(VAR_1);
 struct v3d_dev *VAR_3 = VAR_2->base.v3d;
 u32 VAR_4 = FUNC_0(0, VAR_0);




 if (VAR_2->timedout_batches != VAR_4) {
  VAR_2->timedout_batches = VAR_4;
  return;
 }

 FUNC_2(VAR_3, VAR_1);
}
