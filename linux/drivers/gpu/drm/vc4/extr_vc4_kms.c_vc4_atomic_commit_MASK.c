
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_dev {int async_modeset; } ;
struct drm_device {int dummy; } ;
struct drm_atomic_state {int legacy_cursor_update; int commit_work; scalar_t__ async_update; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_4 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_5 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_6 (struct drm_atomic_state*,int) ;
 scalar_t__ FUNC_7 (struct drm_atomic_state*,int) ;
 int FUNC_8 (struct drm_device*,struct drm_atomic_state*,int) ;
 int FUNC_9 (struct drm_atomic_state*) ;
 int FUNC_10 (int ,int *) ;
 int VAR_1 ;
 struct vc4_dev* FUNC_11 (struct drm_device*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct drm_atomic_state*) ;

__attribute__((used)) static int FUNC_14(struct drm_device *VAR_2,
        struct drm_atomic_state *VAR_3,
        bool VAR_4)
{
 struct vc4_dev *VAR_5 = FUNC_11(VAR_2);
 int VAR_6;

 if (VAR_3->async_update) {
  VAR_6 = FUNC_2(&VAR_5->async_modeset);
  if (VAR_6)
   return VAR_6;

  VAR_6 = FUNC_5(VAR_2, VAR_3);
  if (VAR_6) {
   FUNC_12(&VAR_5->async_modeset);
   return VAR_6;
  }

  FUNC_3(VAR_2, VAR_3);

  FUNC_4(VAR_2, VAR_3);

  FUNC_12(&VAR_5->async_modeset);

  return 0;
 }






 VAR_3->legacy_cursor_update = 0;
 VAR_6 = FUNC_6(VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_1(&VAR_3->commit_work, VAR_0);

 VAR_6 = FUNC_2(&VAR_5->async_modeset);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_5(VAR_2, VAR_3);
 if (VAR_6) {
  FUNC_12(&VAR_5->async_modeset);
  return VAR_6;
 }

 if (!VAR_4) {
  VAR_6 = FUNC_8(VAR_2, VAR_3, 1);
  if (VAR_6) {
   FUNC_4(VAR_2, VAR_3);
   FUNC_12(&VAR_5->async_modeset);
   return VAR_6;
  }
 }







 FUNC_0(FUNC_7(VAR_3, 0) < 0);
 FUNC_9(VAR_3);
 if (VAR_4)
  FUNC_10(VAR_1, &VAR_3->commit_work);
 else
  FUNC_13(VAR_3);

 return 0;
}
