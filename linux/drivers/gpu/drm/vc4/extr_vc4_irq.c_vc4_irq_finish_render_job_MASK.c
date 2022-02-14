
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_exec_info {scalar_t__ perfmon; int * fence; int head; } ;
struct vc4_dev {int job_done_work; int job_wait_queue; int job_done_list; int finished_seqno; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 struct vc4_dev* FUNC_4 (struct drm_device*) ;
 struct vc4_exec_info* FUNC_5 (struct vc4_dev*) ;
 struct vc4_exec_info* FUNC_6 (struct vc4_dev*) ;
 int FUNC_7 (struct vc4_dev*,scalar_t__,int) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(struct drm_device *VAR_0)
{
 struct vc4_dev *VAR_1 = FUNC_4(VAR_0);
 struct vc4_exec_info *VAR_2 = FUNC_6(VAR_1);
 struct vc4_exec_info *VAR_3, *VAR_4;

 if (!VAR_2)
  return;

 VAR_1->finished_seqno++;
 FUNC_2(&VAR_2->head, &VAR_1->job_done_list);

 VAR_3 = FUNC_5(VAR_1);
 VAR_4 = FUNC_6(VAR_1);




 if (VAR_2->perfmon && !VAR_4 &&
     (!VAR_3 || VAR_3->perfmon != VAR_2->perfmon))
  FUNC_7(VAR_1, VAR_2->perfmon, 1);
 if (VAR_4)
  FUNC_9(VAR_0);
 else if (VAR_3 && VAR_3->perfmon != VAR_2->perfmon)
  FUNC_8(VAR_0);

 if (VAR_2->fence) {
  FUNC_1(VAR_2->fence);
  FUNC_0(VAR_2->fence);
  VAR_2->fence = ((void*)0);
 }

 FUNC_10(&VAR_1->job_wait_queue);
 FUNC_3(&VAR_1->job_done_work);
}
