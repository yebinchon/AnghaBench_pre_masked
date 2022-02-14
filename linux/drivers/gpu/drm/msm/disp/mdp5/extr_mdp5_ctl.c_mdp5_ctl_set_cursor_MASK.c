
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mdp5_pipeline {scalar_t__ r_mixer; struct mdp5_hw_mixer* mixer; } ;
struct mdp5_hw_mixer {int lm; } ;
struct mdp5_ctl_manager {TYPE_1__* dev; } ;
struct mdp5_ctl {int cursor_on; int pending_ctl_trigger; int hw_lock; int id; struct mdp5_ctl_manager* ctlm; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mdp5_ctl*,int ) ;
 int FUNC_4 (struct mdp5_ctl*,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct mdp5_ctl *VAR_2, struct mdp5_pipeline *VAR_3,
   int VAR_4, bool VAR_5)
{
 struct mdp5_ctl_manager *VAR_6 = VAR_2->ctlm;
 unsigned long VAR_7;
 u32 VAR_8;
 struct mdp5_hw_mixer *VAR_9 = VAR_3->mixer;

 if (FUNC_2(!VAR_9)) {
  FUNC_0(VAR_6->dev->dev, "CTL %d cannot find LM",
   VAR_2->id);
  return -VAR_0;
 }

 if (VAR_3->r_mixer) {
  FUNC_0(VAR_6->dev->dev, "unsupported configuration");
  return -VAR_0;
 }

 FUNC_6(&VAR_2->hw_lock, VAR_7);

 VAR_8 = FUNC_3(VAR_2, FUNC_1(VAR_2->id, VAR_9->lm));

 if (VAR_5)
  VAR_8 |= VAR_1;
 else
  VAR_8 &= ~VAR_1;

 FUNC_4(VAR_2, FUNC_1(VAR_2->id, VAR_9->lm), VAR_8);
 VAR_2->cursor_on = VAR_5;

 FUNC_7(&VAR_2->hw_lock, VAR_7);

 VAR_2->pending_ctl_trigger = FUNC_5(VAR_4);

 return 0;
}
