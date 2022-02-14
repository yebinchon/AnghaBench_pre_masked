
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_exec_info {int head; scalar_t__ perfmon; } ;
struct vc4_dev {int bin_job_list; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 struct vc4_dev* FUNC_1 (struct drm_device*) ;
 struct vc4_exec_info* FUNC_2 (struct vc4_dev*) ;
 int FUNC_3 (struct vc4_dev*,scalar_t__,int) ;
 int FUNC_4 (struct drm_device*) ;

__attribute__((used)) static void
FUNC_5(struct drm_device *VAR_0)
{
 struct vc4_dev *VAR_1 = FUNC_1(VAR_0);
 struct vc4_exec_info *VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2)
  return;


 if (VAR_2->perfmon)
  FUNC_3(VAR_1, VAR_2->perfmon, 0);

 FUNC_0(&VAR_2->head, &VAR_1->bin_job_list);
 FUNC_4(VAR_0);
}
