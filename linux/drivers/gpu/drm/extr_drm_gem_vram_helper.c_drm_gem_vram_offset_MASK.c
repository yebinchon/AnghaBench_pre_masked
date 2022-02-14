
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int offset; } ;
struct drm_gem_vram_object {TYPE_1__ bo; int pin_count; } ;
typedef int s64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

s64 FUNC_1(struct drm_gem_vram_object *VAR_1)
{
 if (FUNC_0(!VAR_1->pin_count))
  return (s64)-VAR_0;
 return VAR_1->bo.offset;
}
