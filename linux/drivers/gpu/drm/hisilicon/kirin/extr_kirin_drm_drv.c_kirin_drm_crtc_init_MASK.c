
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kirin_drm_data {int crtc_helper_funcs; int crtc_funcs; } ;
struct drm_plane {int dummy; } ;
struct drm_device {TYPE_1__* dev; } ;
struct drm_crtc {struct device_node* port; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int of_node; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_crtc*,int ) ;
 int FUNC_2 (struct drm_device*,struct drm_crtc*,struct drm_plane*,int *,int ,int *) ;
 struct device_node* FUNC_3 (int ,char*) ;
 int FUNC_4 (struct device_node*) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_1, struct drm_crtc *VAR_2,
          struct drm_plane *VAR_3,
          const struct kirin_drm_data *VAR_4)
{
 struct device_node *VAR_5;
 int VAR_6;




 VAR_5 = FUNC_3(VAR_1->dev->of_node, "port");
 if (!VAR_5) {
  FUNC_0("no port node found in %pOF\n", VAR_1->dev->of_node);
  return -VAR_0;
 }
 FUNC_4(VAR_5);
 VAR_2->port = VAR_5;

 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, ((void*)0),
     VAR_4->crtc_funcs, ((void*)0));
 if (VAR_6) {
  FUNC_0("failed to init crtc.\n");
  return VAR_6;
 }

 FUNC_1(VAR_2, VAR_4->crtc_helper_funcs);

 return 0;
}
