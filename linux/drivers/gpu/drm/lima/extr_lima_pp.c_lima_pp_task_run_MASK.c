
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_sched_task {struct drm_lima_m450_pp_frame* frame; } ;
struct lima_sched_pipe {struct lima_ip** processor; int task; scalar_t__ done; struct lima_ip* bcast_processor; } ;
struct lima_ip {struct lima_device* dev; } ;
struct lima_device {scalar_t__ ip; } ;
struct drm_lima_m450_pp_frame {int num_pp; int wb; int * frame; int * fragment_stack_address; int * plbu_array_address; scalar_t__ use_dlbu; int dlbu_regs; } ;
struct drm_lima_m400_pp_frame {int num_pp; int wb; int * frame; int * fragment_stack_address; int * plbu_array_address; scalar_t__ use_dlbu; int dlbu_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct lima_device*,int) ;
 int FUNC_2 (struct lima_device*) ;
 int FUNC_3 (struct lima_device*,int) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (struct lima_ip*) ;
 int FUNC_6 (struct lima_ip*,int *,int ) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static void FUNC_8(struct lima_sched_pipe *VAR_6,
        struct lima_sched_task *VAR_7)
{
 if (VAR_6->bcast_processor) {
  struct drm_lima_m450_pp_frame *VAR_8 = VAR_7->frame;
  struct lima_device *VAR_9 = VAR_6->bcast_processor->dev;
  struct lima_ip *VAR_10 = VAR_6->bcast_processor;
  int VAR_11;

  VAR_6->done = 0;
  FUNC_0(&VAR_6->task, VAR_8->num_pp);

  if (VAR_8->use_dlbu) {
   FUNC_3(VAR_9, VAR_8->num_pp);

   VAR_8->frame[VAR_2 >> 2] = VAR_4;
   FUNC_4(VAR_9->ip + VAR_5, VAR_8->dlbu_regs);
  } else
   FUNC_2(VAR_9);

  FUNC_1(VAR_9, VAR_8->num_pp);

  FUNC_5(VAR_10);

  FUNC_6(VAR_10, VAR_8->frame, VAR_8->wb);

  for (VAR_11 = 0; VAR_11 < VAR_8->num_pp; VAR_11++) {
   struct lima_ip *VAR_12 = VAR_6->processor[VAR_11];

   FUNC_7(VAR_3, VAR_8->fragment_stack_address[VAR_11]);
   if (!VAR_8->use_dlbu)
    FUNC_7(VAR_2, VAR_8->plbu_array_address[VAR_11]);
  }

  FUNC_7(VAR_0, VAR_1);
 } else {
  struct drm_lima_m400_pp_frame *VAR_13 = VAR_7->frame;
  int VAR_14;

  FUNC_0(&VAR_6->task, VAR_13->num_pp);

  for (VAR_14 = 0; VAR_14 < VAR_13->num_pp; VAR_14++) {
   struct lima_ip *VAR_15 = VAR_6->processor[VAR_14];

   VAR_13->frame[VAR_2 >> 2] =
    VAR_13->plbu_array_address[VAR_14];
   VAR_13->frame[VAR_3 >> 2] =
    VAR_13->fragment_stack_address[VAR_14];

   FUNC_5(VAR_15);

   FUNC_6(VAR_15, VAR_13->frame, VAR_13->wb);

   FUNC_7(VAR_0, VAR_1);
  }
 }
}
