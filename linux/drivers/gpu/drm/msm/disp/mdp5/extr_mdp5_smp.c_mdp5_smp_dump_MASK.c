
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct mdp5_smp_state {void* state; void** client_state; } ;
struct mdp5_smp {int blk_cnt; } ;
struct mdp5_kms {int num_hwpipes; int glob_state_lock; struct mdp5_hw_pipe** hwpipes; } ;
struct mdp5_hw_pipe_state {struct drm_plane** hwpipe_to_plane; } ;
struct mdp5_hw_pipe {size_t idx; int pipe; } ;
struct mdp5_global_state {struct mdp5_smp_state smp; struct mdp5_hw_pipe_state hwpipe; } ;
struct drm_printer {int dummy; } ;
struct drm_plane {int * name; } ;
typedef enum mdp5_pipe { ____Placeholder_mdp5_pipe } mdp5_pipe ;


 int FUNC_0 (void*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_printer*,char*,...) ;
 struct mdp5_kms* FUNC_5 (struct mdp5_smp*) ;
 struct mdp5_global_state* FUNC_6 (struct mdp5_kms*) ;
 size_t FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;

void FUNC_10(struct mdp5_smp *VAR_0, struct drm_printer *VAR_1)
{
 struct mdp5_kms *VAR_2 = FUNC_5(VAR_0);
 struct mdp5_hw_pipe_state *VAR_3;
 struct mdp5_smp_state *VAR_4;
 struct mdp5_global_state *VAR_5;
 int VAR_6 = 0, VAR_7, VAR_8;

 FUNC_4(VAR_1, "name\tinuse\tplane\n");
 FUNC_4(VAR_1, "----\t-----\t-----\n");

 if (FUNC_1())
  FUNC_2(&VAR_2->glob_state_lock, ((void*)0));

 VAR_5 = FUNC_6(VAR_2);


 VAR_3 = &VAR_5->hwpipe;
 VAR_4 = &VAR_5->smp;

 for (VAR_7 = 0; VAR_7 < VAR_2->num_hwpipes; VAR_7++) {
  struct mdp5_hw_pipe *VAR_9 = VAR_2->hwpipes[VAR_7];
  struct drm_plane *VAR_10 = VAR_3->hwpipe_to_plane[VAR_9->idx];
  enum mdp5_pipe VAR_11 = VAR_9->pipe;
  for (VAR_8 = 0; VAR_8 < FUNC_9(VAR_11); VAR_8++) {
   u32 VAR_12 = FUNC_7(VAR_11, VAR_8);
   void *VAR_13 = VAR_4->client_state[VAR_12];
   int VAR_14 = FUNC_0(VAR_13, VAR_0->blk_cnt);

   FUNC_4(VAR_1, "%s:%d\t%d\t%s\n",
    FUNC_8(VAR_11), VAR_8, VAR_14,
    VAR_10 ? VAR_10->name : ((void*)0));

   VAR_6 += VAR_14;
  }
 }

 FUNC_4(VAR_1, "TOTAL:\t%d\t(of %d)\n", VAR_6, VAR_0->blk_cnt);
 FUNC_4(VAR_1, "AVAIL:\t%d\n", VAR_0->blk_cnt -
   FUNC_0(VAR_4->state, VAR_0->blk_cnt));

 if (FUNC_1())
  FUNC_3(&VAR_2->glob_state_lock);
}
