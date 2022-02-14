
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct drm_atomic_state {int dummy; } ;


 int FUNC_0 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_1 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_2 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_3 (struct drm_device*,struct drm_atomic_state*,int ) ;
 int FUNC_4 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_5 (struct drm_atomic_state*,int) ;
 int FUNC_6 (struct drm_device*,struct drm_atomic_state*) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_0,
    struct drm_atomic_state *VAR_1,
    bool VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_4(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_5(VAR_1, 1);
 if (VAR_3) {
  FUNC_0(VAR_0, VAR_1);
  return VAR_3;
 }
 FUNC_1(VAR_0, VAR_1);

 FUNC_3(VAR_0, VAR_1, 0);

 FUNC_2(VAR_0, VAR_1);

 FUNC_6(VAR_0, VAR_1);

 FUNC_0(VAR_0, VAR_1);

 return 0;
}
