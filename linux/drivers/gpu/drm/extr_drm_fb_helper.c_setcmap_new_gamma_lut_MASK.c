
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct fb_cmap {int start; int len; void** blue; void** green; void** red; } ;
struct drm_property_blob {struct drm_color_lut* data; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int gamma_size; void** gamma_store; struct drm_device* dev; } ;
struct drm_color_lut {void* blue; void* green; void* red; } ;


 int VAR_0 ;
 struct drm_property_blob* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct drm_property_blob*) ;
 struct drm_property_blob* FUNC_2 (struct drm_device*,int,int *) ;

__attribute__((used)) static struct drm_property_blob *FUNC_3(struct drm_crtc *VAR_1,
             struct fb_cmap *VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->dev;
 struct drm_property_blob *VAR_4;
 struct drm_color_lut *VAR_5;
 int VAR_6 = VAR_1->gamma_size;
 int VAR_7;

 if (!VAR_6 || VAR_2->start + VAR_2->len > VAR_6)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_2(VAR_3, sizeof(*VAR_5) * VAR_6, ((void*)0));
 if (FUNC_1(VAR_4))
  return VAR_4;

 VAR_5 = VAR_4->data;
 if (VAR_2->start || VAR_2->len != VAR_6) {
  u16 *VAR_8 = VAR_1->gamma_store;
  u16 *VAR_9 = VAR_8 + VAR_1->gamma_size;
  u16 *VAR_10 = VAR_9 + VAR_1->gamma_size;

  for (VAR_7 = 0; VAR_7 < VAR_2->start; VAR_7++) {
   VAR_5[VAR_7].red = VAR_8[VAR_7];
   VAR_5[VAR_7].green = VAR_9[VAR_7];
   VAR_5[VAR_7].blue = VAR_10[VAR_7];
  }
  for (VAR_7 = VAR_2->start + VAR_2->len; VAR_7 < VAR_6; VAR_7++) {
   VAR_5[VAR_7].red = VAR_8[VAR_7];
   VAR_5[VAR_7].green = VAR_9[VAR_7];
   VAR_5[VAR_7].blue = VAR_10[VAR_7];
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_2->len; VAR_7++) {
  VAR_5[VAR_2->start + VAR_7].red = VAR_2->red[VAR_7];
  VAR_5[VAR_2->start + VAR_7].green = VAR_2->green[VAR_7];
  VAR_5[VAR_2->start + VAR_7].blue = VAR_2->blue[VAR_7];
 }

 return VAR_4;
}
