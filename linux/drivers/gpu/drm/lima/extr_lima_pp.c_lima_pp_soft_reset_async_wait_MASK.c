
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lima_sched_pipe {struct lima_ip** processor; TYPE_1__* current_task; } ;
struct TYPE_4__ {int async_reset; } ;
struct lima_ip {scalar_t__ id; TYPE_2__ data; struct lima_device* dev; } ;
struct lima_device {struct lima_sched_pipe* pipe; } ;
struct drm_lima_m450_pp_frame {int num_pp; } ;
struct TYPE_3__ {struct drm_lima_m450_pp_frame* frame; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lima_ip*) ;

__attribute__((used)) static int FUNC_1(struct lima_ip *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 if (!VAR_2->data.async_reset)
  return 0;

 if (VAR_2->id == VAR_0) {
  struct lima_device *VAR_5 = VAR_2->dev;
  struct lima_sched_pipe *VAR_6 = VAR_5->pipe + VAR_1;
  struct drm_lima_m450_pp_frame *VAR_7 = VAR_6->current_task->frame;

  for (VAR_3 = 0; VAR_3 < VAR_7->num_pp; VAR_3++)
   VAR_4 |= FUNC_0(VAR_6->processor[VAR_3]);
 } else
  VAR_4 = FUNC_0(VAR_2);

 VAR_2->data.async_reset = 0;
 return VAR_4;
}
