
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct live_active {int base; int ref; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_i915_private*,int *,int ,int ) ;
 int FUNC_1 (int *) ;
 struct live_active* FUNC_2 (int,int ) ;

__attribute__((used)) static struct live_active *FUNC_3(struct drm_i915_private *VAR_3)
{
 struct live_active *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_1(&VAR_4->ref);
 FUNC_0(VAR_3, &VAR_4->base, VAR_1, VAR_2);

 return VAR_4;
}
