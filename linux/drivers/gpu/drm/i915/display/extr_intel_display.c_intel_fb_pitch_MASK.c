
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_framebuffer {int* pitches; } ;
struct TYPE_4__ {TYPE_1__* rotated; } ;
struct TYPE_3__ {int pitch; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 TYPE_2__* FUNC_1 (struct drm_framebuffer const*) ;

__attribute__((used)) static int FUNC_2(const struct drm_framebuffer *VAR_0, int VAR_1,
     unsigned int VAR_2)
{
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_0)->rotated[VAR_1].pitch;
 else
  return VAR_0->pitches[VAR_1];
}
