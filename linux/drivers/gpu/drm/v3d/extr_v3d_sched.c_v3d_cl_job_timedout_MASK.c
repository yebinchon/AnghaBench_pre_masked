
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v3d_job {struct v3d_dev* v3d; } ;
struct v3d_dev {int dummy; } ;
struct drm_sched_job {int dummy; } ;
typedef enum v3d_queue { ____Placeholder_v3d_queue } v3d_queue ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct v3d_job* FUNC_3 (struct drm_sched_job*) ;
 int FUNC_4 (struct v3d_dev*,struct drm_sched_job*) ;

__attribute__((used)) static void
FUNC_5(struct drm_sched_job *VAR_0, enum v3d_queue VAR_1,
      u32 *VAR_2, u32 *VAR_3)
{
 struct v3d_job *VAR_4 = FUNC_3(VAR_0);
 struct v3d_dev *VAR_5 = VAR_4->v3d;
 u32 VAR_6 = FUNC_2(0, FUNC_0(VAR_1));
 u32 VAR_7 = FUNC_2(0, FUNC_1(VAR_1));

 if (*VAR_2 != VAR_6 || *VAR_3 != VAR_7) {
  *VAR_2 = VAR_6;
  *VAR_3 = VAR_7;
  return;
 }

 FUNC_4(VAR_5, VAR_0);
}
