
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_sched_task {int dummy; } ;
struct lima_sched_pipe {int frame_size; int task_mmu_error; int task_error; int task_fini; int task_run; int task_validate; scalar_t__ task_slab; } ;
struct lima_device {struct lima_sched_pipe* pipe; } ;
struct drm_lima_gp_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int,int ,int ,int,int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_1(struct lima_device *VAR_10)
{
 int VAR_11 = sizeof(struct drm_lima_gp_frame);
 struct lima_sched_pipe *VAR_12 = VAR_10->pipe + VAR_9;

 if (!VAR_6) {
  VAR_6 = FUNC_0(
   "lima_gp_task", sizeof(struct lima_sched_task) + VAR_11,
   0, VAR_1, sizeof(struct lima_sched_task),
   VAR_11, ((void*)0));
  if (!VAR_6)
   return -VAR_0;
 }
 VAR_7++;

 VAR_12->frame_size = VAR_11;
 VAR_12->task_slab = VAR_6;

 VAR_12->task_validate = VAR_8;
 VAR_12->task_run = VAR_5;
 VAR_12->task_fini = VAR_3;
 VAR_12->task_error = VAR_2;
 VAR_12->task_mmu_error = VAR_4;

 return 0;
}
