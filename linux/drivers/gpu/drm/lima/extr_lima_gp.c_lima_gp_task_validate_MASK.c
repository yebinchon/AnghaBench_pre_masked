
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct lima_sched_task {struct drm_lima_gp_frame* frame; } ;
struct lima_sched_pipe {int dummy; } ;
struct drm_lima_gp_frame {scalar_t__* frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(struct lima_sched_pipe *VAR_7,
     struct lima_sched_task *VAR_8)
{
 struct drm_lima_gp_frame *VAR_9 = VAR_8->frame;
 u32 *VAR_10 = VAR_9->frame;
 (void)VAR_7;

 if (VAR_10[VAR_6 >> 2] >
     VAR_10[VAR_5 >> 2] ||
     VAR_10[VAR_2 >> 2] >
     VAR_10[VAR_1 >> 2] ||
     VAR_10[VAR_4 >> 2] >
     VAR_10[VAR_3 >> 2])
  return -VAR_0;

 if (VAR_10[VAR_6 >> 2] ==
     VAR_10[VAR_5 >> 2] &&
     VAR_10[VAR_2 >> 2] ==
     VAR_10[VAR_1 >> 2])
  return -VAR_0;

 return 0;
}
