
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_sched_task {int dummy; } ;
struct lima_sched_pipe {int frame_size; int task_mmu_error; int task_error; int task_fini; int task_run; int task_validate; scalar_t__ task_slab; } ;
struct lima_device {scalar_t__ id; struct lima_sched_pipe* pipe; } ;
struct drm_lima_m450_pp_frame {int dummy; } ;
struct drm_lima_m400_pp_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int,int ,int ,int,int,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_1(struct lima_device *VAR_11)
{
 int VAR_12;
 struct lima_sched_pipe *VAR_13 = VAR_11->pipe + VAR_3;

 if (VAR_11->id == VAR_2)
  VAR_12 = sizeof(struct drm_lima_m400_pp_frame);
 else
  VAR_12 = sizeof(struct drm_lima_m450_pp_frame);

 if (!VAR_8) {
  VAR_8 = FUNC_0(
   "lima_pp_task", sizeof(struct lima_sched_task) + VAR_12,
   0, VAR_1, sizeof(struct lima_sched_task),
   VAR_12, ((void*)0));
  if (!VAR_8)
   return -VAR_0;
 }
 VAR_9++;

 VAR_13->frame_size = VAR_12;
 VAR_13->task_slab = VAR_8;

 VAR_13->task_validate = VAR_10;
 VAR_13->task_run = VAR_7;
 VAR_13->task_fini = VAR_5;
 VAR_13->task_error = VAR_4;
 VAR_13->task_mmu_error = VAR_6;

 return 0;
}
