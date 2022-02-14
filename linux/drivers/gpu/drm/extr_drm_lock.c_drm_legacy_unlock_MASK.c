
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_master {int lock; } ;
struct drm_lock {scalar_t__ context; } ;
struct drm_file {struct drm_master* master; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct drm_device*,int ) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct drm_device *VAR_5, void *VAR_6, struct drm_file *VAR_7)
{
 struct drm_lock *VAR_8 = VAR_6;
 struct drm_master *VAR_9 = VAR_7->master;

 if (!FUNC_1(VAR_5, VAR_0))
  return -VAR_3;

 if (VAR_8->context == VAR_1) {
  FUNC_0("Process %d using kernel context %d\n",
     FUNC_3(VAR_4), VAR_8->context);
  return -VAR_2;
 }

 if (FUNC_2(&VAR_9->lock, VAR_8->context)) {

 }

 return 0;
}
