
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
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*,int,int,int ) ;

void FUNC_5(struct drm_device *VAR_2)
{
 drm_via_private_t *VAR_3 = (drm_via_private_t *) VAR_2->dev_private;
 u32 VAR_4;

 FUNC_0("\n");
 if (VAR_3) {



  FUNC_3(VAR_3, 0x83d4, 0x11);
  FUNC_4(VAR_3, 0x83d5, 0x30, 0);

  VAR_4 = FUNC_1(VAR_3, VAR_1);
  FUNC_2(VAR_3, VAR_1, VAR_4 &
     ~(VAR_0 | VAR_3->irq_enable_mask));
 }
}
