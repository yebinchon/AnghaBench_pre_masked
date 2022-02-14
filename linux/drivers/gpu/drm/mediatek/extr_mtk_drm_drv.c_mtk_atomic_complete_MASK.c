
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_drm_private {struct drm_device* drm; } ;
struct drm_device {int dummy; } ;
struct drm_atomic_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_1 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_2 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_3 (struct drm_device*,struct drm_atomic_state*,int ) ;
 int FUNC_4 (struct drm_device*,struct drm_atomic_state*,int) ;
 int FUNC_5 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_6 (struct drm_atomic_state*) ;

__attribute__((used)) static void FUNC_7(struct mtk_drm_private *VAR_1,
    struct drm_atomic_state *VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->drm;

 FUNC_4(VAR_3, VAR_2, 0);
 FUNC_1(VAR_3, VAR_2);
 FUNC_2(VAR_3, VAR_2);
 FUNC_3(VAR_3, VAR_2,
     VAR_0);

 FUNC_5(VAR_3, VAR_2);

 FUNC_0(VAR_3, VAR_2);
 FUNC_6(VAR_2);
}
