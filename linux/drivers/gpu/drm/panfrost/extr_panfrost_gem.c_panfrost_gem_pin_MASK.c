
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_object {int dummy; } ;
struct TYPE_2__ {scalar_t__ is_heap; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_gem_object*) ;
 TYPE_1__* FUNC_1 (struct drm_gem_object*) ;

__attribute__((used)) static int FUNC_2(struct drm_gem_object *VAR_1)
{
 if (FUNC_1(VAR_1)->is_heap)
  return -VAR_0;

 return FUNC_0(VAR_1);
}
