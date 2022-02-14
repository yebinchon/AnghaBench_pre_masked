
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_lock {int flags; } ;
struct drm_file {int dummy; } ;
struct drm_device {scalar_t__ dev_private; } ;
typedef int drm_mga_private_t ;


 int FUNC_0 (char*,char*,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct drm_device*,struct drm_file*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct drm_device *VAR_3, void *VAR_4,
    struct drm_file *VAR_5)
{
 drm_mga_private_t *VAR_6 = (drm_mga_private_t *) VAR_3->dev_private;
 struct drm_lock *VAR_7 = VAR_4;

 FUNC_2(VAR_3, VAR_5);

 FUNC_0("%s%s%s\n",
    (VAR_7->flags & VAR_0) ? "flush, " : "",
    (VAR_7->flags & VAR_1) ? "flush all, " : "",
    (VAR_7->flags & VAR_2) ? "idle, " : "");

 FUNC_3(VAR_6);

 if (VAR_7->flags & (VAR_0 | VAR_1))
  FUNC_4(VAR_6);

 if (VAR_7->flags & VAR_2) {






  return FUNC_5(VAR_6);

 } else {
  return 0;
 }
}
