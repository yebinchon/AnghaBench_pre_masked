
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_atomic_state {int commit_ready; } ;
struct drm_atomic_state {int dummy; } ;


 int FUNC_0 (struct drm_atomic_state*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_atomic_state*) ;
 struct intel_atomic_state* FUNC_3 (struct drm_atomic_state*) ;

__attribute__((used)) static void FUNC_4(struct drm_atomic_state *VAR_0)
{
 struct intel_atomic_state *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_0);

 FUNC_1(&VAR_1->commit_ready);

 FUNC_2(VAR_0);
}
