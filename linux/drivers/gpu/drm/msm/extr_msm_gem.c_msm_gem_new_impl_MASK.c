
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_gem_object {int dummy; } ;
struct msm_gem_object {int flags; struct drm_gem_object base; int mm_list; int vmas; int submit_entry; int madv; int lock; } ;
struct msm_drm_private {int inactive_list; } ;
struct drm_device {int struct_mutex; int dev; struct msm_drm_private* dev_private; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

 int VAR_3 ;


 int VAR_4 ;
 int FUNC_2 (int) ;
 struct msm_gem_object* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct drm_device *VAR_5,
  uint32_t VAR_6, uint32_t VAR_7,
  struct drm_gem_object **VAR_8,
  bool VAR_9)
{
 struct msm_drm_private *VAR_10 = VAR_5->dev_private;
 struct msm_gem_object *VAR_11;

 switch (VAR_7 & VAR_3) {
 case 129:
 case 130:
 case 128:
  break;
 default:
  FUNC_0(VAR_5->dev, "invalid cache flag: %x\n",
    (VAR_7 & VAR_3));
  return -VAR_0;
 }

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 FUNC_5(&VAR_11->lock);

 VAR_11->flags = VAR_7;
 VAR_11->madv = VAR_4;

 FUNC_1(&VAR_11->submit_entry);
 FUNC_1(&VAR_11->vmas);

 if (VAR_9) {
  FUNC_2(!FUNC_6(&VAR_5->struct_mutex));
  FUNC_4(&VAR_11->mm_list, &VAR_10->inactive_list);
 } else {
  FUNC_7(&VAR_5->struct_mutex);
  FUNC_4(&VAR_11->mm_list, &VAR_10->inactive_list);
  FUNC_8(&VAR_5->struct_mutex);
 }

 *VAR_8 = &VAR_11->base;

 return 0;
}
