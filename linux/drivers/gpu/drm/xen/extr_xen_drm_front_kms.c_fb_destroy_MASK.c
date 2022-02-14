
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_drm_front_drm_info {int front_info; } ;
struct drm_framebuffer {TYPE_1__* dev; } ;
struct TYPE_2__ {struct xen_drm_front_drm_info* dev_private; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_framebuffer*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct drm_framebuffer*) ;

__attribute__((used)) static void FUNC_5(struct drm_framebuffer *VAR_0)
{
 struct xen_drm_front_drm_info *VAR_1 = VAR_0->dev->dev_private;
 int VAR_2;

 if (FUNC_0(VAR_0->dev, &VAR_2)) {
  FUNC_3(VAR_1->front_info,
     FUNC_4(VAR_0));
  FUNC_1(VAR_2);
 }
 FUNC_2(VAR_0);
}
