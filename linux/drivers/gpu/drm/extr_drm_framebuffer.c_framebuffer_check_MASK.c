
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ u64 ;
struct drm_mode_fb_cmd2 {int width; int height; int* modifier; int* pitches; scalar_t__* offsets; int flags; scalar_t__* handles; int pixel_format; } ;
struct drm_format_name_buf {int dummy; } ;
struct drm_format_info {int num_planes; unsigned int* char_per_block; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct drm_format_info* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct drm_format_info const*,int,unsigned int) ;
 struct drm_format_info* FUNC_3 (struct drm_device*,struct drm_mode_fb_cmd2 const*) ;
 int FUNC_4 (int ,struct drm_format_name_buf*) ;
 unsigned int FUNC_5 (int,struct drm_format_info const*,int) ;
 unsigned int FUNC_6 (int,struct drm_format_info const*,int) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_6,
        const struct drm_mode_fb_cmd2 *VAR_7)
{
 const struct drm_format_info *VAR_8;
 int VAR_9;


 VAR_8 = FUNC_1(VAR_7->pixel_format);
 if (!VAR_8) {
  struct drm_format_name_buf VAR_10;

  FUNC_0("bad framebuffer format %s\n",
         FUNC_4(VAR_7->pixel_format,
        &VAR_10));
  return -VAR_3;
 }


 VAR_8 = FUNC_3(VAR_6, VAR_7);

 if (VAR_7->width == 0) {
  FUNC_0("bad framebuffer width %u\n", VAR_7->width);
  return -VAR_3;
 }

 if (VAR_7->height == 0) {
  FUNC_0("bad framebuffer height %u\n", VAR_7->height);
  return -VAR_3;
 }

 for (VAR_9 = 0; VAR_9 < VAR_8->num_planes; VAR_9++) {
  unsigned int VAR_11 = FUNC_6(VAR_7->width, VAR_8, VAR_9);
  unsigned int VAR_12 = FUNC_5(VAR_7->height, VAR_8, VAR_9);
  unsigned int VAR_13 = VAR_8->char_per_block[VAR_9];
  u64 VAR_14 = FUNC_2(VAR_8, VAR_9, VAR_11);

  if (!VAR_13 && (VAR_7->modifier[VAR_9] == VAR_0)) {
   FUNC_0("Format requires non-linear modifier for plane %d\n", VAR_9);
   return -VAR_3;
  }

  if (!VAR_7->handles[VAR_9]) {
   FUNC_0("no buffer object handle for plane %d\n", VAR_9);
   return -VAR_3;
  }

  if (VAR_14 > VAR_5)
   return -VAR_4;

  if ((uint64_t) VAR_12 * VAR_7->pitches[VAR_9] + VAR_7->offsets[VAR_9] > VAR_5)
   return -VAR_4;

  if (VAR_13 && VAR_7->pitches[VAR_9] < VAR_14) {
   FUNC_0("bad pitch %u for plane %d\n", VAR_7->pitches[VAR_9], VAR_9);
   return -VAR_3;
  }

  if (VAR_7->modifier[VAR_9] && !(VAR_7->flags & VAR_2)) {
   FUNC_0("bad fb modifier %llu for plane %d\n",
          VAR_7->modifier[VAR_9], VAR_9);
   return -VAR_3;
  }

  if (VAR_7->flags & VAR_2 &&
      VAR_7->modifier[VAR_9] != VAR_7->modifier[0]) {
   FUNC_0("bad fb modifier %llu for plane %d\n",
          VAR_7->modifier[VAR_9], VAR_9);
   return -VAR_3;
  }


  switch (VAR_7->modifier[VAR_9]) {
  case 128:



   if (VAR_7->pixel_format != VAR_1 ||
     VAR_11 % 128 || VAR_12 % 32 ||
     VAR_7->pitches[VAR_9] % 128) {
    FUNC_0("bad modifier data for plane %d\n", VAR_9);
    return -VAR_3;
   }
   break;

  default:
   break;
  }
 }

 for (VAR_9 = VAR_8->num_planes; VAR_9 < 4; VAR_9++) {
  if (VAR_7->modifier[VAR_9]) {
   FUNC_0("non-zero modifier for unused plane %d\n", VAR_9);
   return -VAR_3;
  }


  if (!(VAR_7->flags & VAR_2))
   continue;

  if (VAR_7->handles[VAR_9]) {
   FUNC_0("buffer object handle for unused plane %d\n", VAR_9);
   return -VAR_3;
  }

  if (VAR_7->pitches[VAR_9]) {
   FUNC_0("non-zero pitch for unused plane %d\n", VAR_9);
   return -VAR_3;
  }

  if (VAR_7->offsets[VAR_9]) {
   FUNC_0("non-zero offset for unused plane %d\n", VAR_9);
   return -VAR_3;
  }
 }

 return 0;
}
