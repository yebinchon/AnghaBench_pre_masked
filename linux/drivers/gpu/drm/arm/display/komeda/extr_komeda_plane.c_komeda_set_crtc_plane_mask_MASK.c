
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_pipeline {int dummy; } ;
struct komeda_kms_dev {int n_crtcs; struct komeda_crtc* crtcs; } ;
struct komeda_crtc {int slave_planes; struct komeda_pipeline* slave; } ;
struct drm_plane {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_plane*) ;

__attribute__((used)) static void
FUNC_2(struct komeda_kms_dev *VAR_0,
      struct komeda_pipeline *VAR_1,
      struct drm_plane *VAR_2)
{
 struct komeda_crtc *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->n_crtcs; VAR_4++) {
  VAR_3 = &VAR_0->crtcs[VAR_4];

  if (VAR_1 == VAR_3->slave)
   VAR_3->slave_planes |= FUNC_0(FUNC_1(VAR_2));
 }
}
