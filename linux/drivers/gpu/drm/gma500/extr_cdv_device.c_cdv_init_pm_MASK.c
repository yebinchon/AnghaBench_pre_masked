
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_psb_private {int apm_base; int ospm_base; } ;
struct drm_device {int dev; TYPE_1__* pdev; struct drm_psb_private* dev_private; } ;
struct TYPE_2__ {int bus; } ;


 int FUNC_0 (int,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_7)
{
 struct drm_psb_private *VAR_8 = VAR_7->dev_private;
 u32 VAR_9;
 int VAR_10 = FUNC_4(VAR_7->pdev->bus);
 int VAR_11;

 VAR_8->apm_base = FUNC_0(VAR_10, VAR_4,
       VAR_0) & 0xFFFF;
 VAR_8->ospm_base = FUNC_0(VAR_10, VAR_4,
       VAR_3) & 0xFFFF;


 VAR_9 = FUNC_2(VAR_8->apm_base + VAR_1);


 VAR_9 &= ~VAR_5;
 VAR_9 |= VAR_6;
 FUNC_3(VAR_9, VAR_8->apm_base + VAR_1);


 for (VAR_11 = 0; VAR_11 < 5; VAR_11++) {
  u32 VAR_12 = FUNC_2(VAR_8->apm_base + VAR_2);
  if ((VAR_12 & VAR_5) == 0)
   return;
  FUNC_5(10);
 }
 FUNC_1(VAR_7->dev, "GPU: power management timed out.\n");
}
