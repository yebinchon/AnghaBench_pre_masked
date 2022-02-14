
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_drm_pipeline {scalar_t__ alias_id; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct omap_drm_pipeline *VAR_2 = VAR_0;
 const struct omap_drm_pipeline *VAR_3 = VAR_1;

 if (VAR_2->alias_id > VAR_3->alias_id)
  return 1;
 else if (VAR_2->alias_id < VAR_3->alias_id)
  return -1;
 return 0;
}
