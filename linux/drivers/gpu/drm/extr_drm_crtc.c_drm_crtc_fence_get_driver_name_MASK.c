
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_crtc {TYPE_2__* dev; } ;
struct dma_fence {int dummy; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {char const* name; } ;


 struct drm_crtc* FUNC_0 (struct dma_fence*) ;

__attribute__((used)) static const char *FUNC_1(struct dma_fence *VAR_0)
{
 struct drm_crtc *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->dev->driver->name;
}
