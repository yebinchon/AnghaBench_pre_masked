
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_psb_private {scalar_t__* pipestat; int dev; int vdc_irq_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct drm_psb_private *VAR_2, int VAR_3)
{
 if (VAR_2->pipestat[VAR_3] == 0) {
  if (FUNC_1(VAR_2->dev, 0)) {
   u32 VAR_4 = FUNC_3(VAR_3);
   VAR_2->vdc_irq_mask &= ~VAR_4;
   FUNC_0(~VAR_2->vdc_irq_mask, VAR_1);
   FUNC_0(VAR_2->vdc_irq_mask, VAR_0);
   FUNC_2(VAR_2->dev);
  }
 }
}
