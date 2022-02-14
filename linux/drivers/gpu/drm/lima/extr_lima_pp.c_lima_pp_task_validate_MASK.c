
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct lima_sched_task {struct drm_lima_m450_pp_frame* frame; } ;
struct lima_sched_pipe {scalar_t__ num_processor; scalar_t__ bcast_processor; } ;
struct drm_lima_m450_pp_frame {scalar_t__ num_pp; scalar_t__ _pad; } ;
struct drm_lima_m400_pp_frame {scalar_t__ num_pp; scalar_t__ _pad; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct lima_sched_pipe *VAR_1,
     struct lima_sched_task *VAR_2)
{
 u32 VAR_3;

 if (VAR_1->bcast_processor) {
  struct drm_lima_m450_pp_frame *VAR_4 = VAR_2->frame;

  VAR_3 = VAR_4->num_pp;

  if (VAR_4->_pad)
   return -VAR_0;
 } else {
  struct drm_lima_m400_pp_frame *VAR_5 = VAR_2->frame;

  VAR_3 = VAR_5->num_pp;
 }

 if (VAR_3 == 0 || VAR_3 > VAR_1->num_processor)
  return -VAR_0;

 return 0;
}
