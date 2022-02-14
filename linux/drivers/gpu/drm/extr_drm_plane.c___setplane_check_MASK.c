
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct drm_plane {int possible_crtcs; } ;
struct drm_framebuffer {int modifier; TYPE_1__* format; } ;
struct drm_format_name_buf {int dummy; } ;
struct drm_crtc {int dummy; } ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {int format; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,struct drm_framebuffer*) ;
 int FUNC_3 (int ,struct drm_format_name_buf*) ;
 int FUNC_4 (struct drm_plane*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct drm_plane *VAR_3,
       struct drm_crtc *VAR_4,
       struct drm_framebuffer *VAR_5,
       int32_t VAR_6, int32_t VAR_7,
       uint32_t VAR_8, uint32_t VAR_9,
       uint32_t VAR_10, uint32_t VAR_11,
       uint32_t VAR_12, uint32_t VAR_13)
{
 int VAR_14;


 if (!(VAR_3->possible_crtcs & FUNC_1(VAR_4))) {
  FUNC_0("Invalid crtc for plane\n");
  return -VAR_0;
 }


 VAR_14 = FUNC_4(VAR_3, VAR_5->format->format,
        VAR_5->modifier);
 if (VAR_14) {
  struct drm_format_name_buf VAR_15;

  FUNC_0("Invalid pixel format %s, modifier 0x%llx\n",
         FUNC_3(VAR_5->format->format,
        &VAR_15),
         VAR_5->modifier);
  return VAR_14;
 }


 if (VAR_8 > VAR_2 ||
     VAR_6 > VAR_2 - (int32_t) VAR_8 ||
     VAR_9 > VAR_2 ||
     VAR_7 > VAR_2 - (int32_t) VAR_9) {
  FUNC_0("Invalid CRTC coordinates %ux%u+%d+%d\n",
         VAR_8, VAR_9, VAR_6, VAR_7);
  return -VAR_1;
 }

 VAR_14 = FUNC_2(VAR_10, VAR_11, VAR_12, VAR_13, VAR_5);
 if (VAR_14)
  return VAR_14;

 return 0;
}
