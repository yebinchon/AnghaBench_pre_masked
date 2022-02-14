
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msm_gem_address_space {int dummy; } ;
struct drm_framebuffer {scalar_t__ width; scalar_t__ height; int pitches; } ;
struct dpu_hw_fmt_layout {int * plane_addr; int format; } ;
typedef int plane_addr ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct msm_gem_address_space*,struct drm_framebuffer*,struct dpu_hw_fmt_layout*) ;
 int FUNC_4 (struct msm_gem_address_space*,struct drm_framebuffer*,struct dpu_hw_fmt_layout*) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,struct dpu_hw_fmt_layout*,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (struct drm_framebuffer*) ;
 int FUNC_8 (int ) ;

int FUNC_9(
  struct msm_gem_address_space *VAR_6,
  struct drm_framebuffer *VAR_7,
  struct dpu_hw_fmt_layout *VAR_8)
{
 uint32_t VAR_9[VAR_2];
 int VAR_10, VAR_11;

 if (!VAR_7 || !VAR_8) {
  FUNC_2("invalid arguments\n");
  return -VAR_4;
 }

 if ((VAR_7->width > VAR_1) ||
   (VAR_7->height > VAR_0)) {
  FUNC_2("image dimensions outside max range\n");
  return -VAR_5;
 }

 VAR_8->format = FUNC_8(FUNC_7(VAR_7));


 VAR_11 = FUNC_5(VAR_8->format, VAR_7->width, VAR_7->height,
   VAR_8, VAR_7->pitches);
 if (VAR_11)
  return VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_2; ++VAR_10)
  VAR_9[VAR_10] = VAR_8->plane_addr[VAR_10];


 if (FUNC_1(VAR_8->format) ||
   FUNC_0(VAR_8->format))
  VAR_11 = FUNC_4(VAR_6, VAR_7, VAR_8);
 else
  VAR_11 = FUNC_3(VAR_6, VAR_7, VAR_8);


 if (!VAR_11 && !FUNC_6(VAR_9, VAR_8->plane_addr, sizeof(VAR_9)))
  VAR_11 = -VAR_3;

 return VAR_11;
}
