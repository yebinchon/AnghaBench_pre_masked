
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_drm_private {unsigned int num_pipes; TYPE_1__* pipes; } ;
struct drm_device {struct omap_drm_private* dev_private; } ;
struct TYPE_2__ {scalar_t__ connector; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_0)
{
 struct omap_drm_private *VAR_1 = VAR_0->dev_private;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_pipes; VAR_2++) {
  if (VAR_1->pipes[VAR_2].connector)
   FUNC_0(VAR_1->pipes[VAR_2].connector);
 }
}
