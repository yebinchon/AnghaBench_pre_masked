
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_dev {int ctm_state_lock; } ;
struct vc4_ctm_state {int dummy; } ;
struct drm_private_state {int dummy; } ;
struct drm_private_obj {int dummy; } ;
struct drm_device {struct vc4_dev* dev_private; } ;
struct drm_atomic_state {int acquire_ctx; struct drm_device* dev; } ;


 struct vc4_ctm_state* FUNC_0 (struct drm_private_state*) ;
 struct vc4_ctm_state* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct drm_private_state*) ;
 struct drm_private_state* FUNC_3 (struct drm_atomic_state*,struct drm_private_obj*) ;
 int FUNC_4 (int *,int ) ;
 struct vc4_ctm_state* FUNC_5 (struct drm_private_state*) ;

__attribute__((used)) static struct vc4_ctm_state *FUNC_6(struct drm_atomic_state *VAR_0,
            struct drm_private_obj *VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 struct vc4_dev *VAR_3 = VAR_2->dev_private;
 struct drm_private_state *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_4(&VAR_3->ctm_state_lock, VAR_0->acquire_ctx);
 if (VAR_5)
  return FUNC_1(VAR_5);

 VAR_4 = FUNC_3(VAR_0, VAR_1);
 if (FUNC_2(VAR_4))
  return FUNC_0(VAR_4);

 return FUNC_5(VAR_4);
}
