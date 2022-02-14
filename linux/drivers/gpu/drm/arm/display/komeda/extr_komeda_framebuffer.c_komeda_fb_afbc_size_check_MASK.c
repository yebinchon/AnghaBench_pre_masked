
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct drm_framebuffer {int modifier; int width; int height; int* offsets; struct drm_gem_object** obj; struct drm_format_info* format; } ;
struct komeda_fb {int aligned_w; int aligned_h; int offset_payload; scalar_t__ afbc_size; struct drm_framebuffer base; } ;
struct drm_mode_fb_cmd2 {int * handles; } ;
struct drm_gem_object {scalar_t__ size; } ;
struct drm_format_info {int dummy; } ;
struct drm_file {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int,char*,int) ;
 struct drm_gem_object* FUNC_3 (struct drm_file*,int ) ;
 int FUNC_4 (struct drm_gem_object*) ;
 int FUNC_5 (struct drm_format_info const*,int) ;

__attribute__((used)) static int
FUNC_6(struct komeda_fb *VAR_10, struct drm_file *VAR_11,
     const struct drm_mode_fb_cmd2 *VAR_12)
{
 struct drm_framebuffer *VAR_13 = &VAR_10->base;
 const struct drm_format_info *VAR_14 = VAR_13->format;
 struct drm_gem_object *VAR_15;
 u32 VAR_16 = 0, VAR_17 = 0, VAR_18, VAR_19, VAR_20;
 u64 VAR_21;

 VAR_15 = FUNC_3(VAR_11, VAR_12->handles[0]);
 if (!VAR_15) {
  FUNC_1("Failed to lookup GEM object\n");
  return -VAR_9;
 }

 switch (VAR_13->modifier & VAR_1) {
 case 128:
  VAR_16 = 32;
  VAR_17 = 8;
  break;
 case 129:
  VAR_16 = 16;
  VAR_17 = 16;
  break;
 default:
  FUNC_2(1, "Invalid AFBC_FORMAT_MOD_BLOCK_SIZE: %lld.\n",
       VAR_13->modifier & VAR_1);
  break;
 }


 if (VAR_13->modifier & VAR_2) {
  VAR_16 *= VAR_7;
  VAR_17 *= VAR_7;
  VAR_18 = VAR_6;
 } else {
  VAR_18 = VAR_0;
 }

 VAR_10->aligned_w = FUNC_0(VAR_13->width, VAR_16);
 VAR_10->aligned_h = FUNC_0(VAR_13->height, VAR_17);

 if (VAR_13->offsets[0] % VAR_18) {
  FUNC_1("afbc offset alignment check failed.\n");
  goto check_failed;
 }

 VAR_19 = (VAR_10->aligned_w * VAR_10->aligned_h) / VAR_5;
 VAR_10->offset_payload = FUNC_0(VAR_19 * VAR_3,
        VAR_18);

 VAR_20 = FUNC_5(VAR_14, VAR_13->modifier);
 VAR_10->afbc_size = VAR_10->offset_payload + VAR_19 *
    FUNC_0(VAR_20 * VAR_5 / 8,
          VAR_4);
 VAR_21 = VAR_10->afbc_size + VAR_13->offsets[0];
 if (VAR_21 > VAR_15->size) {
  FUNC_1("afbc size check failed, obj_size: 0x%zx. min_size 0x%llx.\n",
         VAR_15->size, VAR_21);
  goto check_failed;
 }

 VAR_13->obj[0] = VAR_15;
 return 0;

check_failed:
 FUNC_4(VAR_15);
 return -VAR_8;
}
