
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_smp {int * pipe_reqprio_fifo_wm2; int * pipe_reqprio_fifo_wm1; int * pipe_reqprio_fifo_wm0; } ;
struct mdp5_kms {int num_hwpipes; struct mdp5_hw_pipe** hwpipes; } ;
struct mdp5_hw_pipe {int pipe; } ;
typedef enum mdp5_pipe { ____Placeholder_mdp5_pipe } mdp5_pipe ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct mdp5_kms* FUNC_3 (struct mdp5_smp*) ;
 int FUNC_4 (struct mdp5_kms*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct mdp5_smp *VAR_0)
{
 struct mdp5_kms *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_hwpipes; VAR_2++) {
  struct mdp5_hw_pipe *VAR_3 = VAR_1->hwpipes[VAR_2];
  enum mdp5_pipe VAR_4 = VAR_3->pipe;

  FUNC_4(VAR_1, FUNC_0(VAR_4),
      VAR_0->pipe_reqprio_fifo_wm0[VAR_4]);
  FUNC_4(VAR_1, FUNC_1(VAR_4),
      VAR_0->pipe_reqprio_fifo_wm1[VAR_4]);
  FUNC_4(VAR_1, FUNC_2(VAR_4),
      VAR_0->pipe_reqprio_fifo_wm2[VAR_4]);
 }
}
