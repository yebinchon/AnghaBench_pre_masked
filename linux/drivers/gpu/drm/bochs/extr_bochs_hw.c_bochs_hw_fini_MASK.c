
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int pdev; struct bochs_device* dev_private; } ;
struct bochs_device {int edid; scalar_t__ fb_map; scalar_t__ ioports; scalar_t__ mmio; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(struct drm_device *VAR_1)
{
 struct bochs_device *VAR_2 = VAR_1->dev_private;

 if (VAR_2->mmio)
  FUNC_0(VAR_2->mmio);
 if (VAR_2->ioports)
  FUNC_3(VAR_0, 2);
 if (VAR_2->fb_map)
  FUNC_0(VAR_2->fb_map);
 FUNC_2(VAR_1->pdev);
 FUNC_1(VAR_2->edid);
}
