
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mdp5_smp {int blk_size; int* pipe_reqprio_fifo_wm0; int* pipe_reqprio_fifo_wm1; int* pipe_reqprio_fifo_wm2; } ;
typedef enum mdp5_pipe { ____Placeholder_mdp5_pipe } mdp5_pipe ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mdp5_smp *VAR_1,
  enum mdp5_pipe VAR_2, int VAR_3)
{
 u32 VAR_4 = VAR_1->blk_size / (128 / VAR_0);
 u32 VAR_5;


 VAR_5 = (VAR_3 * VAR_4) / 4;

 VAR_1->pipe_reqprio_fifo_wm0[VAR_2] = VAR_5 * 1;
 VAR_1->pipe_reqprio_fifo_wm1[VAR_2] = VAR_5 * 2;
 VAR_1->pipe_reqprio_fifo_wm2[VAR_2] = VAR_5 * 3;
}
