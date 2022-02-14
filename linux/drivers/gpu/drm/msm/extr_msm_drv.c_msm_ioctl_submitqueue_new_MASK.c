
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_msm_submitqueue {int flags; int id; int prio; } ;
struct drm_file {int driver_priv; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,int ,int ,int,int *) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_2, void *VAR_3,
  struct drm_file *VAR_4)
{
 struct drm_msm_submitqueue *VAR_5 = VAR_3;

 if (VAR_5->flags & ~VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_4->driver_priv, VAR_5->prio,
  VAR_5->flags, &VAR_5->id);
}
