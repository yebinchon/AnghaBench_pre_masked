
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdp5_kms {int num_intfs; struct mdp5_interface** intfs; int cfg; struct drm_device* dev; } ;
struct mdp5_interface {int num; int type; int idx; int mode; } ;
struct TYPE_2__ {int* connect; } ;
struct mdp5_cfg_hw {TYPE_1__ intf; } ;
struct drm_device {int dev; } ;
typedef enum mdp5_intf_type { ____Placeholder_mdp5_intf_type } mdp5_intf_type ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 struct mdp5_interface* FUNC_2 (int,int ) ;
 struct mdp5_cfg_hw* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mdp5_kms *VAR_4)
{
 struct drm_device *VAR_5 = VAR_4->dev;
 const struct mdp5_cfg_hw *VAR_6;
 const enum mdp5_intf_type *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_4->cfg);
 VAR_7 = VAR_6->intf.connect;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6->intf.connect); VAR_8++) {
  struct mdp5_interface *VAR_9;

  if (VAR_7[VAR_8] == VAR_2)
   continue;

  VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_1);
  if (!VAR_9) {
   FUNC_1(VAR_5->dev, "failed to construct INTF%d\n", VAR_8);
   return -VAR_0;
  }

  VAR_9->num = VAR_8;
  VAR_9->type = VAR_7[VAR_8];
  VAR_9->mode = VAR_3;
  VAR_9->idx = VAR_4->num_intfs;
  VAR_4->intfs[VAR_4->num_intfs++] = VAR_9;
 }

 return 0;
}
