
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_dev {int overflow_mem_work; int job_wait_queue; int v3d; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 struct vc4_dev* FUNC_3 (struct drm_device*) ;
 int VAR_2 ;

void
FUNC_4(struct drm_device *VAR_3)
{
 struct vc4_dev *VAR_4 = FUNC_3(VAR_3);

 if (!VAR_4->v3d)
  return;

 FUNC_2(&VAR_4->job_wait_queue);
 FUNC_0(&VAR_4->overflow_mem_work, VAR_2);




 FUNC_1(VAR_1, VAR_0);
}
