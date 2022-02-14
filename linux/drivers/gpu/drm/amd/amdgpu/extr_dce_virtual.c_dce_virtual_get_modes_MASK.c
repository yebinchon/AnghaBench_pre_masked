
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 struct drm_display_mode* FUNC_0 (struct drm_device*,int,int,int,int,int,int) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;

__attribute__((used)) static int FUNC_2(struct drm_connector *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct drm_display_mode *VAR_2 = ((void*)0);
 unsigned VAR_3;
 static const struct mode_size {
  int w;
  int h;
 } VAR_4[17] = {
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

 for (VAR_3 = 0; VAR_3 < 17; VAR_3++) {
  VAR_2 = FUNC_0(VAR_1, VAR_4[VAR_3].w, VAR_4[VAR_3].h, 60, 0, 0, 0);
  FUNC_1(VAR_0, VAR_2);
 }

 return 0;
}
