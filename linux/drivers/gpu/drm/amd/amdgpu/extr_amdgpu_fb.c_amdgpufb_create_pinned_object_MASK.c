
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct drm_mode_fb_cmd2 {int height; int* pitches; int width; } ;
struct drm_gem_object {int dummy; } ;
struct drm_format_info {scalar_t__* cpp; } ;
struct amdgpu_fbdev {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dev; int ddev; } ;
struct amdgpu_bo {int tbo; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct amdgpu_device*,int ,scalar_t__,int) ;
 int FUNC_3 (struct amdgpu_bo*,int *) ;
 int FUNC_4 (struct amdgpu_bo*,scalar_t__) ;
 int FUNC_5 (struct amdgpu_bo*,int) ;
 int FUNC_6 (struct amdgpu_bo*,scalar_t__) ;
 int FUNC_7 (struct amdgpu_bo*) ;
 scalar_t__ FUNC_8 (struct amdgpu_device*,int) ;
 int FUNC_9 (struct amdgpu_device*,int,int ,scalar_t__,int,int ,int *,struct drm_gem_object**) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct drm_gem_object*) ;
 int FUNC_12 (int ,char*,...) ;
 struct drm_format_info* FUNC_13 (int ,struct drm_mode_fb_cmd2*) ;
 struct amdgpu_bo* FUNC_14 (struct drm_gem_object*) ;
 int FUNC_15 (char*,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct amdgpu_fbdev *VAR_9,
      struct drm_mode_fb_cmd2 *VAR_10,
      struct drm_gem_object **VAR_11)
{
 const struct drm_format_info *VAR_12;
 struct amdgpu_device *VAR_13 = VAR_9->adev;
 struct drm_gem_object *VAR_14 = ((void*)0);
 struct amdgpu_bo *VAR_15 = ((void*)0);
 bool VAR_16 = 0;
 u32 VAR_17 = 0, VAR_18;
 int VAR_19;
 int VAR_20, VAR_21;
 int VAR_22 = VAR_10->height;
 u32 VAR_23;
 u64 VAR_24 = VAR_0 |
          VAR_3 |
          VAR_2 |
          VAR_1;

 VAR_12 = FUNC_13(VAR_13->ddev, VAR_10);
 VAR_23 = VAR_12->cpp[0];


 VAR_10->pitches[0] = FUNC_2(VAR_13, VAR_10->width, VAR_23,
        VAR_16);
 VAR_18 = FUNC_8(VAR_13, VAR_24);
 VAR_22 = FUNC_0(VAR_10->height, 8);
 VAR_21 = VAR_10->pitches[0] * VAR_22;
 VAR_20 = FUNC_0(VAR_21, VAR_7);
 VAR_19 = FUNC_9(VAR_13, VAR_20, 0, VAR_18, VAR_24,
           VAR_8, ((void*)0), &VAR_14);
 if (VAR_19) {
  FUNC_15("failed to allocate framebuffer (%d)\n", VAR_20);
  return -VAR_5;
 }
 VAR_15 = FUNC_14(VAR_14);

 if (VAR_16)
  VAR_17 = FUNC_1(VAR_4, VAR_6);

 VAR_19 = FUNC_5(VAR_15, 0);
 if (FUNC_16(VAR_19 != 0))
  goto out_unref;

 if (VAR_17) {
  VAR_19 = FUNC_6(VAR_15,
       VAR_17);
  if (VAR_19)
   FUNC_12(VAR_13->dev, "FB failed to set tiling flags\n");
 }

 VAR_19 = FUNC_4(VAR_15, VAR_18);
 if (VAR_19) {
  FUNC_7(VAR_15);
  goto out_unref;
 }

 VAR_19 = FUNC_10(&VAR_15->tbo);
 if (VAR_19) {
  FUNC_7(VAR_15);
  FUNC_12(VAR_13->dev, "%p bind failed\n", VAR_15);
  goto out_unref;
 }

 VAR_19 = FUNC_3(VAR_15, ((void*)0));
 FUNC_7(VAR_15);
 if (VAR_19) {
  goto out_unref;
 }

 *VAR_11 = VAR_14;
 return 0;
out_unref:
 FUNC_11(VAR_14);
 *VAR_11 = ((void*)0);
 return VAR_19;
}
