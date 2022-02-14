
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct platform_device {int dummy; } ;
struct TYPE_4__ {void* hw_ctx; int base; } ;
struct kirin_drm_private {TYPE_2__ crtc; TYPE_1__* planes; void* hw_ctx; } ;
struct kirin_drm_data {size_t num_planes; size_t prim_plane; void* (* alloc_hw_ctx ) (struct platform_device*,int *) ;} ;
struct drm_plane {int dummy; } ;
struct drm_device {struct kirin_drm_private* dev_private; int dev; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;
struct TYPE_3__ {size_t ch; struct drm_plane base; void* hw_ctx; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (void*) ;
 struct kirin_drm_private* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct drm_device*,int *,struct drm_plane*,struct kirin_drm_data const*) ;
 int FUNC_4 (struct drm_device*,struct drm_plane*,int,struct kirin_drm_data const*) ;
 void* FUNC_5 (struct platform_device*,int *) ;
 struct platform_device* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_5,
      const struct kirin_drm_data *VAR_6)
{
 struct platform_device *VAR_7 = FUNC_6(VAR_5->dev);
 struct kirin_drm_private *VAR_8;
 struct drm_plane *VAR_9;
 enum drm_plane_type VAR_10;
 void *VAR_11;
 int VAR_12;
 u32 VAR_13;

 VAR_8 = FUNC_2(VAR_5->dev, sizeof(*VAR_8), VAR_4);
 if (!VAR_8) {
  FUNC_0("failed to alloc kirin_drm_private\n");
  return -VAR_3;
 }

 VAR_11 = VAR_6->alloc_hw_ctx(VAR_7, &VAR_8->crtc.base);
 if (FUNC_1(VAR_11)) {
  FUNC_0("failed to initialize kirin_priv hw ctx\n");
  return -VAR_2;
 }
 VAR_8->hw_ctx = VAR_11;






 for (VAR_13 = 0; VAR_13 < VAR_6->num_planes; VAR_13++) {
  if (VAR_13 == VAR_6->prim_plane)
   VAR_10 = VAR_1;
  else
   VAR_10 = VAR_0;
  VAR_12 = FUNC_4(VAR_5, &VAR_8->planes[VAR_13].base,
        VAR_10, VAR_6);
  if (VAR_12)
   return VAR_12;
  VAR_8->planes[VAR_13].ch = VAR_13;
  VAR_8->planes[VAR_13].hw_ctx = VAR_11;
 }


 VAR_9 = &VAR_8->planes[VAR_6->prim_plane].base;
 VAR_12 = FUNC_3(VAR_5, &VAR_8->crtc.base,
      VAR_9, VAR_6);
 if (VAR_12)
  return VAR_12;
 VAR_8->crtc.hw_ctx = VAR_11;
 VAR_5->dev_private = VAR_8;

 return 0;
}
