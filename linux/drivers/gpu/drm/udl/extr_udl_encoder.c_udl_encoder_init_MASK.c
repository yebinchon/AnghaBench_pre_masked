
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int possible_crtcs; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_encoder*,int *) ;
 int FUNC_1 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 struct drm_encoder* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

struct drm_encoder *FUNC_3(struct drm_device *VAR_4)
{
 struct drm_encoder *VAR_5;

 VAR_5 = FUNC_2(sizeof(struct drm_encoder), VAR_1);
 if (!VAR_5)
  return ((void*)0);

 FUNC_1(VAR_4, VAR_5, &VAR_2, VAR_0,
    ((void*)0));
 FUNC_0(VAR_5, &VAR_3);
 VAR_5->possible_crtcs = 1;
 return VAR_5;
}
