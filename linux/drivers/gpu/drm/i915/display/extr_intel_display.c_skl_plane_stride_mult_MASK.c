
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {scalar_t__ modifier; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct drm_framebuffer const*,int) ;
 unsigned int FUNC_2 (struct drm_framebuffer const*,int) ;

__attribute__((used)) static unsigned int FUNC_3(const struct drm_framebuffer *VAR_1,
       int VAR_2, unsigned int VAR_3)
{




 if (VAR_1->modifier == VAR_0)
  return 64;
 else if (FUNC_0(VAR_3))
  return FUNC_1(VAR_1, VAR_2);
 else
  return FUNC_2(VAR_1, VAR_2);
}
