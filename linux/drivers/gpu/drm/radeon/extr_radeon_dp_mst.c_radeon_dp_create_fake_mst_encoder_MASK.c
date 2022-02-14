
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_encoder_mst {int primary; struct radeon_connector* connector; } ;
struct drm_encoder {int possible_crtcs; } ;
struct radeon_encoder {int is_mst_encoder; struct radeon_encoder_mst* enc_priv; struct drm_encoder base; } ;
struct radeon_device {int num_crtc; } ;
struct TYPE_2__ {struct drm_connector_helper_funcs* helper_private; struct drm_device* dev; } ;
struct radeon_connector {TYPE_1__ base; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector_helper_funcs {struct drm_encoder* (* best_encoder ) (TYPE_1__*) ;} ;


 int FUNC_0 (char*,struct drm_encoder*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_encoder*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int FUNC_3 (struct radeon_encoder*) ;
 void* FUNC_4 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_encoder* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static struct radeon_encoder *
FUNC_7(struct radeon_connector *VAR_4)
{
 struct drm_device *VAR_5 = VAR_4->base.dev;
 struct radeon_device *VAR_6 = VAR_5->dev_private;
 struct radeon_encoder *VAR_7;
 struct radeon_encoder_mst *VAR_8;
 struct drm_encoder *VAR_9;
 const struct drm_connector_helper_funcs *VAR_10 = VAR_4->base.helper_private;
 struct drm_encoder *VAR_11 = VAR_10->best_encoder(&VAR_4->base);

 FUNC_0("enc master is %p\n", VAR_11);
 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->enc_priv = FUNC_4(sizeof(*VAR_8), VAR_1);
 if (!VAR_7->enc_priv) {
  FUNC_3(VAR_7);
  return ((void*)0);
 }
 VAR_9 = &VAR_7->base;
 switch (VAR_6->num_crtc) {
 case 1:
  VAR_9->possible_crtcs = 0x1;
  break;
 case 2:
 default:
  VAR_9->possible_crtcs = 0x3;
  break;
 case 4:
  VAR_9->possible_crtcs = 0xf;
  break;
 case 6:
  VAR_9->possible_crtcs = 0x3f;
  break;
 }

 FUNC_2(VAR_5, &VAR_7->base, &VAR_2,
    VAR_0, ((void*)0));
 FUNC_1(VAR_9, &VAR_3);

 VAR_8 = VAR_7->enc_priv;
 VAR_8->connector = VAR_4;
 VAR_8->primary = FUNC_6(VAR_11);
 VAR_7->is_mst_encoder = 1;
 return VAR_7;
}
