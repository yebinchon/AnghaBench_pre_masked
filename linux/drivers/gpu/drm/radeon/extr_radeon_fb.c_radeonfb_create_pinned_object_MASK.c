
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_fbdev {struct radeon_device* rdev; } ;
struct radeon_device {scalar_t__ family; int dev; int ddev; } ;
struct radeon_bo {int dummy; } ;
struct drm_mode_fb_cmd2 {int height; int* pitches; int width; } ;
struct drm_gem_object {int dummy; } ;
struct drm_format_info {int* cpp; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;
 struct drm_format_info* FUNC_3 (int ,struct drm_mode_fb_cmd2*) ;
 struct radeon_bo* FUNC_4 (struct drm_gem_object*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct radeon_device*,int ,int,int) ;
 int FUNC_7 (struct radeon_bo*,int ,int ) ;
 int FUNC_8 (struct radeon_bo*,int *) ;
 int FUNC_9 (struct radeon_bo*,int ,int,int *) ;
 int FUNC_10 (struct radeon_bo*,int) ;
 int FUNC_11 (struct radeon_bo*,int,int) ;
 int FUNC_12 (struct radeon_bo*) ;
 int FUNC_13 (struct radeon_device*,int,int ,int ,int ,int,struct drm_gem_object**) ;
 int FUNC_14 (struct drm_gem_object*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct radeon_fbdev *VAR_8,
      struct drm_mode_fb_cmd2 *VAR_9,
      struct drm_gem_object **VAR_10)
{
 const struct drm_format_info *VAR_11;
 struct radeon_device *VAR_12 = VAR_8->rdev;
 struct drm_gem_object *VAR_13 = ((void*)0);
 struct radeon_bo *VAR_14 = ((void*)0);
 bool VAR_15 = 0;
 u32 VAR_16 = 0;
 int VAR_17;
 int VAR_18, VAR_19;
 int VAR_20 = VAR_9->height;
 u32 VAR_21;

 VAR_11 = FUNC_3(VAR_12->ddev, VAR_9);
 VAR_21 = VAR_11->cpp[0];


 VAR_9->pitches[0] = FUNC_6(VAR_12, VAR_9->width, VAR_21,
        VAR_15);

 if (VAR_12->family >= VAR_0)
  VAR_20 = FUNC_0(VAR_9->height, 8);
 VAR_19 = VAR_9->pitches[0] * VAR_20;
 VAR_18 = FUNC_0(VAR_19, VAR_2);
 VAR_17 = FUNC_13(VAR_12, VAR_18, 0,
           VAR_3,
           0, 1, &VAR_13);
 if (VAR_17) {
  FUNC_5("failed to allocate framebuffer (%d)\n", VAR_18);
  return -VAR_1;
 }
 VAR_14 = FUNC_4(VAR_13);

 if (VAR_15)
  VAR_16 = VAR_4;
 if (VAR_16) {
  VAR_17 = FUNC_11(VAR_14,
       VAR_16 | VAR_5,
       VAR_9->pitches[0]);
  if (VAR_17)
   FUNC_2(VAR_12->dev, "FB failed to set tiling flags\n");
 }


 VAR_17 = FUNC_10(VAR_14, 0);
 if (FUNC_15(VAR_17 != 0))
  goto out_unref;

 VAR_17 = FUNC_9(VAR_14, VAR_3,
           FUNC_1(VAR_12) ? 0 : 1 << 27,
           ((void*)0));
 if (VAR_17) {
  FUNC_12(VAR_14);
  goto out_unref;
 }
 if (VAR_15)
  FUNC_7(VAR_14, 0, 0);
 VAR_17 = FUNC_8(VAR_14, ((void*)0));
 FUNC_12(VAR_14);
 if (VAR_17) {
  goto out_unref;
 }

 *VAR_10 = VAR_13;
 return 0;
out_unref:
 FUNC_14(VAR_13);
 *VAR_10 = ((void*)0);
 return VAR_17;
}
