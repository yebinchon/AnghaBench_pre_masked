
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int hdisplay; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct drm_connector *VAR_2,
         struct drm_display_mode *VAR_3)
{
 if (VAR_3->hdisplay & 0xf)
  return VAR_0;

 return VAR_1;
}
