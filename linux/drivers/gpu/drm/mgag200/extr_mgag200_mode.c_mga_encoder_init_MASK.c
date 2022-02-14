
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int possible_crtcs; } ;
struct mga_encoder {struct drm_encoder base; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_encoder*,int *) ;
 int FUNC_1 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 struct mga_encoder* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct drm_encoder *FUNC_3(struct drm_device *VAR_4)
{
 struct drm_encoder *VAR_5;
 struct mga_encoder *VAR_6;

 VAR_6 = FUNC_2(sizeof(struct mga_encoder), VAR_1);
 if (!VAR_6)
  return ((void*)0);

 VAR_5 = &VAR_6->base;
 VAR_5->possible_crtcs = 0x1;

 FUNC_1(VAR_4, VAR_5, &VAR_2,
    VAR_0, ((void*)0));
 FUNC_0(VAR_5, &VAR_3);

 return VAR_5;
}
