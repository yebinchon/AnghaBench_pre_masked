
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_du_device {int dummy; } ;
struct drm_device {struct rcar_du_device* dev_private; } ;
struct drm_atomic_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_1 (struct drm_device*,struct drm_atomic_state*) ;
 scalar_t__ FUNC_2 (struct rcar_du_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_1,
    struct drm_atomic_state *VAR_2)
{
 struct rcar_du_device *VAR_3 = VAR_1->dev_private;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 if (FUNC_2(VAR_3, VAR_0))
  return 0;

 return FUNC_1(VAR_1, VAR_2);
}
