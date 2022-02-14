
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_6__ {int irq_enable_mask; } ;
typedef TYPE_1__ drm_via_private_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*,int,int,int) ;

int FUNC_5(struct drm_device *VAR_3)
{
 drm_via_private_t *VAR_4 = (drm_via_private_t *) VAR_3->dev_private;
 u32 VAR_5;

 FUNC_0("via_driver_irq_postinstall\n");
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_4, VAR_2);
 FUNC_2(VAR_4, VAR_2, VAR_5 | VAR_1
    | VAR_4->irq_enable_mask);


 FUNC_3(VAR_4, 0x83d4, 0x11);
 FUNC_4(VAR_4, 0x83d5, 0x30, 0x30);

 return 0;
}
