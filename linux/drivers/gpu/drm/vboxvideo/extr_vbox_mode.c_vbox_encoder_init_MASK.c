
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int possible_crtcs; } ;
struct vbox_encoder {struct drm_encoder base; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 struct vbox_encoder* FUNC_1 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct drm_encoder *FUNC_2(struct drm_device *VAR_3,
          unsigned int VAR_4)
{
 struct vbox_encoder *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0(VAR_3, &VAR_5->base, &VAR_2,
    VAR_0, ((void*)0));

 VAR_5->base.possible_crtcs = 1 << VAR_4;
 return &VAR_5->base;
}
