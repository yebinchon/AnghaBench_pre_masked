
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int nb_layers; } ;
struct ltdc_device {TYPE_2__ caps; } ;
struct drm_plane {int dummy; } ;
struct drm_device {struct ltdc_device* dev_private; } ;
struct TYPE_3__ {int id; } ;
struct drm_crtc {TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct drm_crtc*,int ,int,int ) ;
 int FUNC_3 (struct drm_crtc*,int *) ;
 int FUNC_4 (struct drm_device*,struct drm_crtc*,struct drm_plane*,int *,int *,int *) ;
 int FUNC_5 (struct drm_crtc*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct drm_plane* FUNC_6 (struct drm_device*,int ) ;
 int FUNC_7 (struct drm_device*) ;

__attribute__((used)) static int FUNC_8(struct drm_device *VAR_7, struct drm_crtc *VAR_8)
{
 struct ltdc_device *VAR_9 = VAR_7->dev_private;
 struct drm_plane *VAR_10, *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 VAR_10 = FUNC_6(VAR_7, VAR_2);
 if (!VAR_10) {
  FUNC_1("Can not create primary plane\n");
  return -VAR_3;
 }

 VAR_13 = FUNC_4(VAR_7, VAR_8, VAR_10, ((void*)0),
     &VAR_5, ((void*)0));
 if (VAR_13) {
  FUNC_1("Can not initialize CRTC\n");
  goto cleanup;
 }

 FUNC_3(VAR_8, &VAR_6);

 FUNC_5(VAR_8, VAR_0);
 FUNC_2(VAR_8, 0, 0, VAR_0);

 FUNC_0("CRTC:%d created\n", VAR_8->base.id);


 for (VAR_12 = 1; VAR_12 < VAR_9->caps.nb_layers; VAR_12++) {
  VAR_11 = FUNC_6(VAR_7, VAR_1);
  if (!VAR_11) {
   VAR_13 = -VAR_4;
   FUNC_1("Can not create overlay plane %d\n", VAR_12);
   goto cleanup;
  }
 }

 return 0;

cleanup:
 FUNC_7(VAR_7);
 return VAR_13;
}
