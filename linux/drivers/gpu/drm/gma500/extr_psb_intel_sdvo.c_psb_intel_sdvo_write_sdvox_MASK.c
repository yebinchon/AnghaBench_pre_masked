
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct psb_intel_sdvo {scalar_t__ sdvo_reg; TYPE_2__ base; } ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_3(struct psb_intel_sdvo *VAR_2, u32 VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->base.base.dev;
 u32 VAR_5 = VAR_3, VAR_6 = VAR_3;
 int VAR_7, VAR_8;
 int VAR_9 = FUNC_0(VAR_4) ? 1 : 0;

 for (VAR_8 = 0; VAR_8 <= VAR_9; VAR_8++) {
  if (VAR_2->sdvo_reg == VAR_0)
   VAR_6 = FUNC_1(VAR_1, VAR_8);
  else
   VAR_5 = FUNC_1(VAR_0, VAR_8);






  for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
   FUNC_2(VAR_0, VAR_5, VAR_8);
   FUNC_1(VAR_0, VAR_8);
   FUNC_2(VAR_1, VAR_6, VAR_8);
   FUNC_1(VAR_1, VAR_8);
  }
 }
}
