
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mdp5_pipeline {int dummy; } ;
struct mdp5_ctl_manager {int flush_hw_mask; } ;
struct mdp5_ctl {int id; int pending_ctl_trigger; int flush_mask; int hw_lock; struct mdp5_ctl_manager* ctlm; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct mdp5_ctl*,int ,int) ;
 int FUNC_3 (struct mdp5_ctl*,int*,int*) ;
 int FUNC_4 (struct mdp5_ctl*,struct mdp5_pipeline*,int) ;
 int FUNC_5 (struct mdp5_ctl*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (struct mdp5_ctl*,struct mdp5_pipeline*) ;

u32 FUNC_9(struct mdp5_ctl *VAR_1,
      struct mdp5_pipeline *VAR_2,
      u32 VAR_3, bool VAR_4)
{
 struct mdp5_ctl_manager *VAR_5 = VAR_1->ctlm;
 unsigned long VAR_6;
 u32 VAR_7 = VAR_1->id;
 u32 VAR_8;

 FUNC_1("flush_mask=%x, trigger=%x", VAR_3, VAR_1->pending_ctl_trigger);

 if (VAR_1->pending_ctl_trigger & VAR_3) {
  VAR_3 |= VAR_0;
  VAR_1->pending_ctl_trigger = 0;
 }

 VAR_3 |= FUNC_4(VAR_1, VAR_2, VAR_3);

 VAR_3 &= VAR_5->flush_hw_mask;

 VAR_8 = VAR_3;

 FUNC_3(VAR_1, &VAR_3, &VAR_7);

 if (!VAR_4) {
  VAR_1->flush_mask |= VAR_3;
  return VAR_8;
 } else {
  VAR_3 |= VAR_1->flush_mask;
  VAR_1->flush_mask = 0;
 }

 if (VAR_3) {
  FUNC_6(&VAR_1->hw_lock, VAR_6);
  FUNC_2(VAR_1, FUNC_0(VAR_7), VAR_3);
  FUNC_7(&VAR_1->hw_lock, VAR_6);
 }

 if (FUNC_8(VAR_1, VAR_2)) {
  FUNC_5(VAR_1);
 }

 return VAR_8;
}
