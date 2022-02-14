
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_mixer {int dev; } ;
struct sti_compositor {int dummy; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {int primary; } ;


 struct sti_compositor* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct sti_compositor*,int ) ;
 struct sti_mixer* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_4(struct drm_crtc *VAR_0)
{
 struct sti_mixer *VAR_1 = FUNC_3(VAR_0);
 struct sti_compositor *VAR_2 = FUNC_0(VAR_1->dev);

 if (FUNC_1(VAR_0) == 0)
  return FUNC_2(VAR_2, VAR_0->dev->primary);

 return 0;
}
