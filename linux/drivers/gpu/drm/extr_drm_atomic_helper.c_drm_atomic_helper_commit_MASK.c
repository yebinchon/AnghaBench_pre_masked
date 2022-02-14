
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct drm_atomic_state {int commit_work; scalar_t__ async_update; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct drm_atomic_state*) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_3 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_4 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_5 (struct drm_atomic_state*,int) ;
 int FUNC_6 (struct drm_atomic_state*,int) ;
 int FUNC_7 (struct drm_device*,struct drm_atomic_state*,int) ;
 int FUNC_8 (struct drm_atomic_state*) ;
 int FUNC_9 (int ,int *) ;
 int VAR_1 ;

int FUNC_10(struct drm_device *VAR_2,
        struct drm_atomic_state *VAR_3,
        bool VAR_4)
{
 int VAR_5;

 if (VAR_3->async_update) {
  VAR_5 = FUNC_4(VAR_2, VAR_3);
  if (VAR_5)
   return VAR_5;

  FUNC_2(VAR_2, VAR_3);
  FUNC_3(VAR_2, VAR_3);

  return 0;
 }

 VAR_5 = FUNC_5(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_0(&VAR_3->commit_work, VAR_0);

 VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 if (!VAR_4) {
  VAR_5 = FUNC_7(VAR_2, VAR_3, 1);
  if (VAR_5)
   goto err;
 }







 VAR_5 = FUNC_6(VAR_3, 1);
 if (VAR_5)
  goto err;
 FUNC_8(VAR_3);
 if (VAR_4)
  FUNC_9(VAR_1, &VAR_3->commit_work);
 else
  FUNC_1(VAR_3);

 return 0;

err:
 FUNC_3(VAR_2, VAR_3);
 return VAR_5;
}
