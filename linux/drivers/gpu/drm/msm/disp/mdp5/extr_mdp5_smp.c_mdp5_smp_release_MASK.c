
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct mdp5_smp_state {int released; int state; void** client_state; } ;
struct mdp5_smp {int blk_cnt; } ;
typedef enum mdp5_pipe { ____Placeholder_mdp5_pipe } mdp5_pipe ;


 int FUNC_0 (int ,int ,void*,int) ;
 int FUNC_1 (void*,int) ;
 size_t FUNC_2 (int,int) ;
 int FUNC_3 (int) ;

void FUNC_4(struct mdp5_smp *VAR_0, struct mdp5_smp_state *VAR_1,
  enum mdp5_pipe VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_0->blk_cnt;

 for (VAR_3 = 0; VAR_3 < FUNC_3(VAR_2); VAR_3++) {
  u32 VAR_5 = FUNC_2(VAR_2, VAR_3);
  void *VAR_6 = VAR_1->client_state[VAR_5];


  FUNC_0(VAR_1->state, VAR_1->state, VAR_6, VAR_4);


  FUNC_1(VAR_6, VAR_4);
 }

 VAR_1->released |= (1 << VAR_2);
}
