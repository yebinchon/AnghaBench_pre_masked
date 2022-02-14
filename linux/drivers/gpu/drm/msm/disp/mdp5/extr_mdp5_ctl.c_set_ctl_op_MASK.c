
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mdp5_pipeline {scalar_t__ r_mixer; struct mdp5_interface* intf; } ;
struct mdp5_interface {int type; int mode; scalar_t__ num; } ;
struct mdp5_ctl {int hw_lock; int id; } ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mdp5_ctl*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct mdp5_ctl *VAR_6, struct mdp5_pipeline *VAR_7)
{
 unsigned long VAR_8;
 struct mdp5_interface *VAR_9 = VAR_7->intf;
 u32 VAR_10 = 0;

 if (!FUNC_5(VAR_9->type))
  VAR_10 |= FUNC_0(VAR_0 + VAR_9->num);

 switch (VAR_9->type) {
 case 129:
  if (VAR_9->mode == VAR_3)
   VAR_10 |= VAR_1;
  break;

 case 128:
  if (VAR_9->mode == VAR_4)
   VAR_10 |= FUNC_1(VAR_5);
  break;

 default:
  break;
 }

 if (VAR_7->r_mixer)
  VAR_10 |= VAR_2 |
     FUNC_2(1);

 FUNC_6(&VAR_6->hw_lock, VAR_8);
 FUNC_4(VAR_6, FUNC_3(VAR_6->id), VAR_10);
 FUNC_7(&VAR_6->hw_lock, VAR_8);
}
