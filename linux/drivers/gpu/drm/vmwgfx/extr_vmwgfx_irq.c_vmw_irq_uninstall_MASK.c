
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_private {int capabilities; scalar_t__ io_start; } ;
struct drm_device {int irq_enabled; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct drm_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct vmw_private* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct vmw_private*,int ,int ) ;

void FUNC_5(struct drm_device *VAR_3)
{
 struct vmw_private *VAR_4 = FUNC_3(VAR_3);
 uint32_t VAR_5;

 if (!(VAR_4->capabilities & VAR_0))
  return;

 if (!VAR_3->irq_enabled)
  return;

 FUNC_4(VAR_4, VAR_1, 0);

 VAR_5 = FUNC_1(VAR_4->io_start + VAR_2);
 FUNC_2(VAR_5, VAR_4->io_start + VAR_2);

 VAR_3->irq_enabled = 0;
 FUNC_0(VAR_3->irq, VAR_3);
}
