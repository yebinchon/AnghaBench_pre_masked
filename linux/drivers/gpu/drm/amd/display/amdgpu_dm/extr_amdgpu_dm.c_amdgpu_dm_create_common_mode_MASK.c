
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {struct drm_device* dev; } ;
struct drm_display_mode {int hdisplay; int vdisplay; int name; int type; } ;
struct drm_device {int dummy; } ;
struct amdgpu_encoder {struct drm_display_mode native_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_display_mode* FUNC_0 (struct drm_device*,struct drm_display_mode*) ;
 int FUNC_1 (int ,char*,int ) ;
 struct amdgpu_encoder* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static struct drm_display_mode *
FUNC_3(struct drm_encoder *VAR_2,
        char *VAR_3,
        int VAR_4, int VAR_5)
{
 struct drm_device *VAR_6 = VAR_2->dev;
 struct amdgpu_encoder *VAR_7 = FUNC_2(VAR_2);
 struct drm_display_mode *VAR_8 = ((void*)0);
 struct drm_display_mode *VAR_9 = &VAR_7->native_mode;

 VAR_8 = FUNC_0(VAR_6, VAR_9);

 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_8->hdisplay = VAR_4;
 VAR_8->vdisplay = VAR_5;
 VAR_8->type &= ~VAR_1;
 FUNC_1(VAR_8->name, VAR_3, VAR_0);

 return VAR_8;

}
