
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int dev; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct drm_framebuffer const*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static unsigned int
FUNC_3(const struct drm_framebuffer *VAR_0, int VAR_1)
{
 return FUNC_0(FUNC_2(VAR_0->dev)) /
  FUNC_1(VAR_0, VAR_1);
}
