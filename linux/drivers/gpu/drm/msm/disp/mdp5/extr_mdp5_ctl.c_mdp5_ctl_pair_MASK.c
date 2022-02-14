
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdp5_kms {int dummy; } ;
struct mdp5_ctl_manager {TYPE_1__* dev; int single_flush_supported; } ;
struct mdp5_ctl {int status; struct mdp5_ctl* pair; struct mdp5_ctl_manager* ctlm; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mdp5_kms* FUNC_1 (struct mdp5_ctl_manager*) ;
 int FUNC_2 (struct mdp5_kms*,int ,int ) ;

int FUNC_3(struct mdp5_ctl *VAR_4, struct mdp5_ctl *VAR_5, bool VAR_6)
{
 struct mdp5_ctl_manager *VAR_7 = VAR_4->ctlm;
 struct mdp5_kms *VAR_8 = FUNC_1(VAR_7);


 if (!VAR_7->single_flush_supported)
  return 0;

 if (!VAR_6) {
  VAR_4->pair = ((void*)0);
  VAR_5->pair = ((void*)0);
  FUNC_2(VAR_8, VAR_3, 0);
  return 0;
 } else if ((VAR_4->pair != ((void*)0)) || (VAR_5->pair != ((void*)0))) {
  FUNC_0(VAR_7->dev->dev, "CTLs already paired\n");
  return -VAR_1;
 } else if (!(VAR_4->status & VAR_5->status & VAR_0)) {
  FUNC_0(VAR_7->dev->dev, "Only pair booked CTLs\n");
  return -VAR_1;
 }

 VAR_4->pair = VAR_5;
 VAR_5->pair = VAR_4;

 FUNC_2(VAR_8, VAR_3,
     VAR_2);

 return 0;
}
