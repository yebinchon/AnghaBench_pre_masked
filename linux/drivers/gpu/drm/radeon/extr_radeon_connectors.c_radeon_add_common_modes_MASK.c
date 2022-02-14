
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int hdisplay; int vdisplay; } ;
struct radeon_encoder {int devices; struct drm_display_mode native_mode; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_display_mode* FUNC_0 (struct drm_device*,int,int,int,int,int,int) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 struct radeon_encoder* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_2, struct drm_connector *VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct radeon_encoder *VAR_5 = FUNC_2(VAR_2);
 struct drm_display_mode *VAR_6 = ((void*)0);
 struct drm_display_mode *VAR_7 = &VAR_5->native_mode;
 int VAR_8;
 struct mode_size {
  int w;
  int h;
 } VAR_9[17] = {
  { 640, 480},
  { 720, 480},
  { 800, 600},
  { 848, 480},
  {1024, 768},
  {1152, 768},
  {1280, 720},
  {1280, 800},
  {1280, 854},
  {1280, 960},
  {1280, 1024},
  {1440, 900},
  {1400, 1050},
  {1680, 1050},
  {1600, 1200},
  {1920, 1080},
  {1920, 1200}
 };

 for (VAR_8 = 0; VAR_8 < 17; VAR_8++) {
  if (VAR_5->devices & (VAR_1)) {
   if (VAR_9[VAR_8].w > 1024 ||
       VAR_9[VAR_8].h > 768)
    continue;
  }
  if (VAR_5->devices & (VAR_0)) {
   if (VAR_9[VAR_8].w > VAR_7->hdisplay ||
       VAR_9[VAR_8].h > VAR_7->vdisplay ||
       (VAR_9[VAR_8].w == VAR_7->hdisplay &&
        VAR_9[VAR_8].h == VAR_7->vdisplay))
    continue;
  }
  if (VAR_9[VAR_8].w < 320 || VAR_9[VAR_8].h < 200)
   continue;

  VAR_6 = FUNC_0(VAR_4, VAR_9[VAR_8].w, VAR_9[VAR_8].h, 60, 0, 0, 0);
  FUNC_1(VAR_3, VAR_6);
 }
}
