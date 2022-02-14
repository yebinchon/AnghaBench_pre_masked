
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mdp5_kms {TYPE_2__* pdev; } ;
struct mdp5_encoder {TYPE_1__* intf; } ;
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
 int VAR_6 ;
 int VAR_7 ;
 struct mdp5_kms* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct mdp5_kms*,int ,int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 struct mdp5_encoder* FUNC_4 (struct drm_encoder*) ;

int FUNC_5(struct drm_encoder *VAR_8,
           struct drm_encoder *VAR_9)
{
 struct mdp5_encoder *VAR_10 = FUNC_4(VAR_8);
 struct mdp5_kms *VAR_11;
 struct device *VAR_12;
 int VAR_13;
 u32 VAR_14 = 0;

 if (!VAR_8 || !VAR_9)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_8);
 VAR_13 = VAR_10->intf->num;




 if (VAR_13 == 1)
  VAR_14 |= VAR_3;
 else if (VAR_13 == 2)
  VAR_14 |= VAR_2;
 else
  return -VAR_0;


 VAR_14 |= VAR_4;

 VAR_12 = &VAR_11->pdev->dev;


 FUNC_2(VAR_12);
 FUNC_1(VAR_11, VAR_7, VAR_14);

 FUNC_1(VAR_11, VAR_6,
     VAR_1);
 FUNC_1(VAR_11, VAR_5, 1);
 FUNC_3(VAR_12);

 return 0;
}
