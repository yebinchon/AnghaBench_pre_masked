
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct platform_device {int dummy; } ;
struct mdp5_kms {struct drm_device* dev; } ;
struct mdp5_cfg_platform {int dummy; } ;
struct TYPE_3__ {int platform; TYPE_2__* hw; } ;
struct mdp5_cfg_handler {TYPE_1__ config; int revision; } ;
struct drm_device {int dev; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (struct mdp5_cfg_handler*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mdp5_cfg_handler* FUNC_3 (int) ;
 int VAR_2 ;
 struct mdp5_cfg_handler* VAR_3 ;
 struct mdp5_cfg_handler* VAR_4 ;
 struct mdp5_cfg_handler* FUNC_4 (int,int ) ;
 TYPE_2__* VAR_5 ;
 int FUNC_5 (struct mdp5_cfg_handler*) ;
 struct mdp5_cfg_platform* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int *,struct mdp5_cfg_platform*,int) ;
 struct platform_device* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;

struct mdp5_cfg_handler *FUNC_10(struct mdp5_kms *VAR_6,
  uint32_t VAR_7, uint32_t VAR_8)
{
 struct drm_device *VAR_9 = VAR_6->dev;
 struct platform_device *VAR_10 = FUNC_8(VAR_9->dev);
 struct mdp5_cfg_handler *VAR_11;
 const struct mdp5_cfg_handler *VAR_12;
 struct mdp5_cfg_platform *VAR_13;
 int VAR_14, VAR_15 = 0, VAR_16;

 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_2);
 if (FUNC_9(!VAR_11)) {
  VAR_15 = -VAR_0;
  goto fail;
 }

 switch (VAR_7) {
 case 1:
  VAR_12 = VAR_3;
  VAR_16 = FUNC_0(VAR_3);
  break;
 case 3:
  VAR_12 = VAR_4;
  VAR_16 = FUNC_0(VAR_4);
  break;
 default:
  FUNC_2(VAR_9->dev, "unexpected MDP major version: v%d.%d\n",
    VAR_7, VAR_8);
  VAR_15 = -VAR_1;
  goto fail;
 };


 for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14++) {
  if (VAR_12[VAR_14].revision != VAR_8)
   continue;
  VAR_5 = VAR_12[VAR_14].config.hw;

  break;
 }
 if (FUNC_9(!VAR_5)) {
  FUNC_2(VAR_9->dev, "unexpected MDP minor revision: v%d.%d\n",
    VAR_7, VAR_8);
  VAR_15 = -VAR_1;
  goto fail;
 }

 VAR_11->revision = VAR_8;
 VAR_11->config.hw = VAR_5;

 VAR_13 = FUNC_6(VAR_10);
 FUNC_7(&VAR_11->config.platform, VAR_13, sizeof(*VAR_13));

 FUNC_1("MDP5: %s hw config selected", VAR_5->name);

 return VAR_11;

fail:
 if (VAR_11)
  FUNC_5(VAR_11);

 return FUNC_3(VAR_15);
}
