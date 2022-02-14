
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lima_sched_pipe {int done; int task; struct lima_ip** processor; TYPE_1__* current_task; } ;
struct lima_ip {struct lima_device* dev; } ;
struct lima_device {struct lima_sched_pipe* pipe; } ;
struct drm_lima_m450_pp_frame {int num_pp; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct drm_lima_m450_pp_frame* frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 (struct lima_ip*,int) ;
 int FUNC_2 (struct lima_sched_pipe*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 int VAR_8;
 irqreturn_t VAR_9 = VAR_1;
 struct lima_ip *VAR_10 = VAR_7;
 struct lima_device *VAR_11 = VAR_10->dev;
 struct lima_sched_pipe *VAR_12 = VAR_11->pipe + VAR_5;
 struct drm_lima_m450_pp_frame *VAR_13;


 if (!VAR_12->current_task)
  return VAR_1;

 VAR_13 = VAR_12->current_task->frame;

 for (VAR_8 = 0; VAR_8 < VAR_13->num_pp; VAR_8++) {
  struct lima_ip *VAR_14 = VAR_12->processor[VAR_8];
  u32 VAR_15, VAR_16;

  if (VAR_12->done & (1 << VAR_8))
   continue;




  VAR_15 = FUNC_3(VAR_3);
  VAR_16 = FUNC_3(VAR_2);

  if (VAR_16) {
   FUNC_1(VAR_14, VAR_16);
   VAR_9 = VAR_0;
  } else {
   if (VAR_15 & VAR_4)
    continue;
  }

  VAR_12->done |= (1 << VAR_8);
  if (FUNC_0(&VAR_12->task))
   FUNC_2(VAR_12);
 }

 return VAR_9;
}
