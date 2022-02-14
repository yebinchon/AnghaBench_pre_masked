
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_master {struct drm_master* lessor; } ;



struct drm_master *FUNC_0(struct drm_master *VAR_0)
{
 while (VAR_0->lessor != ((void*)0))
  VAR_0 = VAR_0->lessor;
 return VAR_0;
}
