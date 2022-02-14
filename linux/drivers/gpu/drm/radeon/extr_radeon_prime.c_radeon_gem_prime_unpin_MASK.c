
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_bo {scalar_t__ prime_shared_count; } ;
struct drm_gem_object {int dummy; } ;


 struct radeon_bo* FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct radeon_bo*,int) ;
 int FUNC_2 (struct radeon_bo*) ;
 int FUNC_3 (struct radeon_bo*) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct drm_gem_object *VAR_0)
{
 struct radeon_bo *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = 0;

 VAR_2 = FUNC_1(VAR_1, 0);
 if (FUNC_4(VAR_2 != 0))
  return;

 FUNC_2(VAR_1);
 if (VAR_1->prime_shared_count)
  VAR_1->prime_shared_count--;
 FUNC_3(VAR_1);
}
