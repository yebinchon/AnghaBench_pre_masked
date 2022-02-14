
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_mode_fb_cmd2 {int* modifier; int width; int height; int* pitches; int * handles; } ;
struct drm_gem_object {int size; } ;
struct drm_format_info {int format; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 struct drm_gem_object* FUNC_2 (struct drm_file*,int ) ;
 int FUNC_3 (struct drm_gem_object*) ;
 struct drm_format_info* FUNC_4 (struct drm_device*,struct drm_mode_fb_cmd2 const*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static bool
FUNC_6(struct drm_device *VAR_4,
        struct drm_file *VAR_5,
        const struct drm_mode_fb_cmd2 *VAR_6)
{
 int VAR_7 = 0;
 const struct drm_format_info *VAR_8;
 struct drm_gem_object *VAR_9 = ((void*)0);
 u32 VAR_10 = 0, VAR_11 = 0;
 u32 VAR_12 = 0, VAR_13 = 0;
 int VAR_14 = 0;

 switch (VAR_6->modifier[0] & VAR_1) {
 case 128:
  VAR_11 = 16;
  VAR_12 = 16;
  break;
 default:
  FUNC_1("AFBC superblock size is not supported\n");
  return 0;
 }

 VAR_8 = FUNC_4(VAR_4, VAR_6);

 VAR_7 = (VAR_6->width / VAR_12) *
  (VAR_6->height / VAR_11);

 VAR_14 = FUNC_5(VAR_8->format);

 VAR_10 = (VAR_14 * VAR_12 * VAR_11)
    / VAR_3;

 VAR_13 = FUNC_0(VAR_7 * VAR_0, VAR_2);
 VAR_13 += VAR_7 * FUNC_0(VAR_10, VAR_2);

 if ((VAR_6->width * VAR_14) != (VAR_6->pitches[0] * VAR_3)) {
  FUNC_1("Invalid value of (pitch * BITS_PER_BYTE) (=%u) "
         "should be same as width (=%u) * bpp (=%u)\n",
         (VAR_6->pitches[0] * VAR_3),
         VAR_6->width, VAR_14);
  return 0;
 }

 VAR_9 = FUNC_2(VAR_5, VAR_6->handles[0]);
 if (!VAR_9) {
  FUNC_1("Failed to lookup GEM object\n");
  return 0;
 }

 if (VAR_9->size < VAR_13) {
  FUNC_1("buffer size (%zu) too small for AFBC buffer size = %u\n",
         VAR_9->size, VAR_13);
  FUNC_3(VAR_9);
  return 0;
 }

 FUNC_3(VAR_9);

 return 1;
}
