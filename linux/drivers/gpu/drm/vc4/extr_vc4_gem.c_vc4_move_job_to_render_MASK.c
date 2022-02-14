
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_exec_info {int head; } ;
struct vc4_dev {int render_job_list; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 struct vc4_dev* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;

void
FUNC_4(struct drm_device *VAR_0, struct vc4_exec_info *VAR_1)
{
 struct vc4_dev *VAR_2 = FUNC_2(VAR_0);
 bool VAR_3 = FUNC_0(&VAR_2->render_job_list);

 FUNC_1(&VAR_1->head, &VAR_2->render_job_list);
 if (VAR_3)
  FUNC_3(VAR_0);
}
