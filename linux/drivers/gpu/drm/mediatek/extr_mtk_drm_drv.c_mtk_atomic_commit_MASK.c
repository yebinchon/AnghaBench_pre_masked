
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int work; } ;
struct mtk_drm_private {TYPE_1__ commit; } ;
struct drm_device {struct mtk_drm_private* dev_private; } ;
struct drm_atomic_state {int dummy; } ;


 int FUNC_0 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_1 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_2 (struct drm_atomic_state*,int) ;
 int FUNC_3 (struct drm_atomic_state*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mtk_drm_private*,struct drm_atomic_state*) ;
 int FUNC_6 (struct mtk_drm_private*,struct drm_atomic_state*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct drm_device *VAR_0,
        struct drm_atomic_state *VAR_1,
        bool VAR_2)
{
 struct mtk_drm_private *VAR_3 = VAR_0->dev_private;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;

 FUNC_7(&VAR_3->commit.lock);
 FUNC_4(&VAR_3->commit.work);

 VAR_4 = FUNC_2(VAR_1, 1);
 if (VAR_4) {
  FUNC_8(&VAR_3->commit.lock);
  FUNC_0(VAR_0, VAR_1);
  return VAR_4;
 }

 FUNC_3(VAR_1);
 if (VAR_2)
  FUNC_6(VAR_3, VAR_1);
 else
  FUNC_5(VAR_3, VAR_1);

 FUNC_8(&VAR_3->commit.lock);

 return 0;
}
