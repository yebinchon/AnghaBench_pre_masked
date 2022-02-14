
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mdp5_kms {TYPE_2__* pdev; } ;
struct mdp5_encoder {int ctl; TYPE_1__* intf; } ;
struct drm_encoder {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mdp5_kms* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct mdp5_kms*,int ,int) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 struct mdp5_encoder* FUNC_5 (struct drm_encoder*) ;

int FUNC_6(struct drm_encoder *VAR_6,
           struct drm_encoder *VAR_7)
{
 struct mdp5_encoder *VAR_8 = FUNC_5(VAR_6);
 struct mdp5_encoder *VAR_9 = FUNC_5(VAR_7);
 struct mdp5_kms *VAR_10;
 struct device *VAR_11;
 int VAR_12;
 u32 VAR_13 = 0;

 if (!VAR_6 || !VAR_7)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_6);
 VAR_12 = VAR_8->intf->num;




 if (VAR_12 == 1)
  VAR_13 |= VAR_2;
 else if (VAR_12 == 2)
  VAR_13 |= VAR_1;
 else
  return -VAR_0;

 VAR_11 = &VAR_10->pdev->dev;

 FUNC_3(VAR_11);


 FUNC_2(VAR_10, VAR_5, 0);
 FUNC_2(VAR_10, VAR_4, VAR_13);
 FUNC_2(VAR_10, VAR_3, 1);

 FUNC_1(VAR_8->ctl, VAR_9->ctl, 1);

 FUNC_4(VAR_11);

 return 0;
}
