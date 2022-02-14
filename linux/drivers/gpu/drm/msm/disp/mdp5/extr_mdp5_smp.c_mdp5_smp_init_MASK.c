
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_smp_state {int state; } ;
struct mdp5_smp_block {int reserved; int reserved_state; int mmb_size; int mmb_count; } ;
struct mdp5_smp {int reserved; int blk_cnt; int blk_size; int dev; } ;
struct mdp5_kms {int dev; } ;
struct mdp5_global_state {struct mdp5_smp_state smp; } ;


 int VAR_0 ;
 struct mdp5_smp* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 struct mdp5_smp* FUNC_2 (int,int ) ;
 struct mdp5_global_state* FUNC_3 (struct mdp5_kms*) ;
 int FUNC_4 (struct mdp5_smp*) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (int) ;

struct mdp5_smp *FUNC_7(struct mdp5_kms *VAR_2, const struct mdp5_smp_block *VAR_3)
{
 struct mdp5_smp_state *VAR_4;
 struct mdp5_global_state *VAR_5;
 struct mdp5_smp *VAR_6 = ((void*)0);
 int VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (FUNC_6(!VAR_6)) {
  VAR_7 = -VAR_0;
  goto fail;
 }

 VAR_6->dev = VAR_2->dev;
 VAR_6->blk_cnt = VAR_3->mmb_count;
 VAR_6->blk_size = VAR_3->mmb_size;

 VAR_5 = FUNC_3(VAR_2);
 VAR_4 = &VAR_5->smp;


 FUNC_1(VAR_4->state, VAR_3->reserved_state, VAR_6->blk_cnt);
 FUNC_5(VAR_6->reserved, VAR_3->reserved, sizeof(VAR_6->reserved));

 return VAR_6;
fail:
 if (VAR_6)
  FUNC_4(VAR_6);

 return FUNC_0(VAR_7);
}
